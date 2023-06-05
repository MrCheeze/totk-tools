-------- EventFlow: HuntSalmon --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

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

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora006
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasPouchContentByCategory']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora010[HuntSalmon_Clear]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void GetPrize_Npc_Zora010_NPC_Zora010_I-4_04_Near() {
    Event141:
    Npc_Zora006.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HuntSalmon:near0008', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_Zora010[HuntSalmon_Clear].EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/HuntSalmon:near0009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GetPrize_Npc_Zora010_NPC_Zora010_I-4_04_Talk() {
    Event143:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Zora006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Zora010', 'Actor1': ActorIdentifier(name="Npc_Zora006"), 'Actor2': ActorIdentifier(name="Npc_Zora010", sub_name="HuntSalmon_Clear"), 'Spearker2InstanceName': 'HuntSalmon_Clear'})

    Npc_Zora010[HuntSalmon_Clear].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
    Npc_Zora010[HuntSalmon_Clear].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Npc_Zora006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event144:
    if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 6, 'Count': 60}) {
        Npc_Zora010[HuntSalmon_Clear].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HuntSalmon', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetPrize', 'IsWaitEnd': True})
    } else {
        Npc_Zora010[HuntSalmon_Clear].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_FishGet_B', 'MaterialActorName2': 'Item_FishGet_B', 'MaterialActorName3': 'Item_FishGet_B', 'MaterialActorName4': 'Item_FishGet_B', 'MaterialActorName5': 'Item_FishGet_B'})

        Npc_Zora010[HuntSalmon_Clear].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0046', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora006.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Zora010', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': 'HuntSalmon_Clear', 'IsReleaseThreaten': False, 'IsWaitEnd': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora010[HuntSalmon_Clear].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Zora006', 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora010[HuntSalmon_Clear].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0048', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HuntSalmon_ClearWarp'})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HuntSalmon', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void Ready_Npc_Zora010_HuntSalmon_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HuntSalmon:near0007', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Zora010_HuntSalmon_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HuntSalmon_FirstTalkZora010'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event122:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0034', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0037', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HuntSalmon_FirstTalkZora010'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0049', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event122
    }
}

void Ready_Npc_Zora006_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HuntSalmon:near0005', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Zora006_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HuntSalmon_TalkedNpc_Zora006', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0032', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event103:
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0028', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HuntSalmon', 'StepName': 'Step1', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HuntSalmon_TalkedNpc_Zora006', 'Index': -1, 'Value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0026', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event103
    }
}

void Step1_Npc_Zora010_HuntSalmon_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HuntSalmon:near0007', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_Zora010_HuntSalmon_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HuntSalmon_FirstTalkZora010'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 10, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0043', 'ChoiceNumber': 3, 'ChoiceLabel2': 11, 'ChoiceLabel3': 12, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event128:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0034', 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel2': 11, 'ChoiceLabel3': 12, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0044', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event108:
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Zora010_ClearHuntSalmon'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HuntSalmon', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Report', 'IsWaitEnd': True})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0037', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            goto Event108
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0037', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HuntSalmon_FirstTalkZora010'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0049', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event128
    }
}

void Step1_Npc_Zora006_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HuntSalmon:near0006', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_Zora006_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void GetPrize_Npc_Zora006_Near() {
    goto Event141
}

void GetPrize_Npc_Zora006_Talk() {
    goto Event143
}

void Report_Npc_Zora006_Near() {
    goto Event141
}

void Report_Npc_Zora006_Talk() {
    Event156:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Zora006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Zora010', 'Actor1': ActorIdentifier(name="Npc_Zora006"), 'Actor2': ActorIdentifier(name="Npc_Zora010", sub_name="HuntSalmon_Clear"), 'Spearker2InstanceName': 'HuntSalmon_Clear'})

    Npc_Zora010[HuntSalmon_Clear].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
    Npc_Zora010[HuntSalmon_Clear].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Npc_Zora006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora010[HuntSalmon_Clear].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HuntSalmon:talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event144
}

void Report_Npc_Zora010_NPC_Zora010_I-4_04_Near() {
    goto Event141
}

void Report_Npc_Zora010_NPC_Zora010_I-4_04_Talk() {
    goto Event156
}

void NearActorsTalk() {
    goto Event156
}

void NearActorsNear() {
    goto Event141
}

void GetPrize_NearActorsTalk() {
    goto Event143
}

void GetPrize_NearActorsNear() {
    goto Event141
}
