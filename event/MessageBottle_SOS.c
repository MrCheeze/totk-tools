-------- EventFlow: MessageBottle_SOS --------

Actor: Npc_EventStarter[PlayingActor_MessageBottleSOS]
entrypoint: None()
actions: ['EventTalk', 'EventNPCChangePostureWithAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Road_015[PlayingActor_MessageBottleSOS]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Road_035_Near() {

    call 02_Npc_Road_015_PlayingActor_MessageBottleSOS_Near()

}

void Ready_Npc_Road_035_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MessageBottle_SOS_Talked'}) {

        call SecondTalk()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MessageBottle_SOS_Talked'})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0000', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0001', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event110:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MessageBottle_SOS_RockCheck', 'Index': -1}) {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'SOS_Exit', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0009_2', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MessageBottle_SOS', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'MessageBottle_SOS_02', 'IsWaitEnd': True})
        } else {
            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0003_00', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 0, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Bottle_SOS_CharangeClear'})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MessageBottle_SOS', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        }
    }
}

void 01_Npc_Road_035_Near() {

    call 02_Npc_Road_015_PlayingActor_MessageBottleSOS_Near()

}

void 01_Npc_Road_035_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0000', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event110
}

void Ready_FldObj_MessageBottle_MessageBottle_Zonau_00_Talk() {

    call FldObj_MessageBottle.Talk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MessageBottle_SOS', 'StepName': 'MessageBottle_SOS_01', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void 02_Npc_Road_015_PlayingActor_MessageBottleSOS_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call SecondTalk()

}

void 02_Npc_Road_015_PlayingActor_MessageBottleSOS_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MessageBottle_SOS_RockCheck', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MessageBottle_SOS_Talked'}) {
            Npc_Road_015[PlayingActor_MessageBottleSOS].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MessageBottle_SOS:NPC_Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_Road_015[PlayingActor_MessageBottleSOS].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MessageBottle_SOS:NPC_Near_0000', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MessageBottle_SOS_Talked'}) {
        Npc_Road_015[PlayingActor_MessageBottleSOS].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MessageBottle_SOS:NPC_Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
    } else {
        Npc_Road_015[PlayingActor_MessageBottleSOS].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MessageBottle_SOS:NPC_Near_0000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
    }
}

void SecondTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MessageBottle_SOS_RockCheck', 'Index': -1}) {
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0010', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0010', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'SOS_Exit', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0011_0', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0011', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0003_00', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 0, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter[PlayingActor_MessageBottleSOS].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MessageBottle_SOS:NPC_Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Bottle_SOS_CharangeClear'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MessageBottle_SOS', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
    }
}
