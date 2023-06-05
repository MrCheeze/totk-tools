-------- EventFlow: MushroomSisters_1 --------

Actor: Npc_Attacked_008[MushroomSisters_1]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Attacked_009[MushroomSisters_1]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Attacked_008_MushroomSisters_1_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_Attacked_008", sub_name="MushroomSisters_1"), 'Actor2': ActorIdentifier(name="Npc_Attacked_009", sub_name="MushroomSisters_1"), 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_Attacked_008', 'Spearker1InstanceName': 'MushroomSisters_1', 'Spearker2ActorName': 'Npc_Attacked_009', 'Spearker2InstanceName': 'MushroomSisters_1'})

    Npc_Attacked_009[MushroomSisters_1].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'MushroomSisters_1', 'ActorName': 'Npc_Attacked_008', 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Attacked_008[MushroomSisters_1].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Attacked_009', 'InstanceName': 'MushroomSisters_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_13', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_MushroomGet_K', 'IsExcludeAttached': False, 'IsExcludeAttachment': True, 'Num': 10}) {

        call Already_Got_Item()

    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MushroomSisters_1', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void Ready_Npc_Attacked_008_MushroomSisters_1_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_00_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Attacked_009_MushroomSisters_1_Talk() {

    call Ready_Npc_Attacked_008_MushroomSisters_1_Talk()

}

void Step01_Npc_Attacked_008_MushroomSisters_1_Talk() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_MushroomGet_K', 'Num': 10, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

        call Step01_PairTalk()

    } else {

        call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_Attacked_008", sub_name="MushroomSisters_1"), 'Actor2': ActorIdentifier(name="Npc_Attacked_009", sub_name="MushroomSisters_1"), 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Attacked_008', 'Spearker1InstanceName': 'MushroomSisters_1', 'Spearker2ActorName': 'Npc_Attacked_009', 'Spearker2InstanceName': 'MushroomSisters_1'})

        Npc_Attacked_008[MushroomSisters_1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_16', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Attacked_008[MushroomSisters_1].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Attacked_009', 'InstanceName': 'MushroomSisters_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_00_17', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step01_Npc_Attacked_008_MushroomSisters_1_Near() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_MushroomGet_K', 'Num': 10, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_01_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_01_00', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Step01_PairTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Attacked_008", sub_name="MushroomSisters_1"), 'Actor2': ActorIdentifier(name="Npc_Attacked_009", sub_name="MushroomSisters_1"), 'Spearker1ActorName': 'Npc_Attacked_008', 'Spearker1InstanceName': 'MushroomSisters_1', 'Spearker2ActorName': 'Npc_Attacked_009', 'Spearker2InstanceName': 'MushroomSisters_1'})

    Npc_Attacked_009[MushroomSisters_1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Event55:
    Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_08', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Attacked_008[MushroomSisters_1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Attacked_009[MushroomSisters_1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_09', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkHandOver', 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_MushroomGet_K', 'EffectType': 0, 'EffectValue': -1, 'Num': -10, 'IsSetOnlyEquipIndex': False})
        Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
            Event77:

            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Mushroom_C', 'MaterialActorName2': 'Item_Mushroom_C', 'MaterialActorName3': 'Item_Fruit_M'})

            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_03', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_15', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_009[MushroomSisters_1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'MushroomSisters_1', 'ActorName': 'Npc_Attacked_008', 'Target': 3, 'ResetArriveTransformFixed': False})
            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_16', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Attacked_009', 'InstanceName': 'MushroomSisters_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_17', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_18', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_009[MushroomSisters_1].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Attacked_008[MushroomSisters_1].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_07', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Attacked_009', 'InstanceName': 'MushroomSisters_1', 'ResetArriveTransformFixed': False})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_05', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_009[MushroomSisters_1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'MushroomSisters_1', 'ActorName': 'Npc_Attacked_008', 'Target': 3, 'ResetArriveTransformFixed': False})
            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_11', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_12', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Attacked_009[MushroomSisters_1].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_06', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_008[MushroomSisters_1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Attacked_009', 'InstanceName': 'MushroomSisters_1', 'ResetArriveTransformFixed': False})
            Npc_Attacked_009[MushroomSisters_1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'MushroomSisters_1', 'ActorName': 'Npc_Attacked_008', 'Target': 3, 'ResetArriveTransformFixed': False})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_13', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Attacked_009[MushroomSisters_1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Attacked_009[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_10', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MushroomSisters_1_Delivered', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MushroomSisters_1', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        } else {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_21', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetPresent', 'ChallengeName': 'MushroomSisters_1', 'IsWaitEnd': True})
        }
    } else {
        Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_20', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MushroomSisters_1_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MushroomSisters_1', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    }
}

void Ready_Npc_Attacked_009_MushroomSisters_1_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_00_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Already_Got_Item() {
    goto Event55
}

void Step01_Npc_Attacked_009_MushroomSisters_1_Talk() {

    call Step01_Npc_Attacked_008_MushroomSisters_1_Talk()

}

void GetPresent_Npc_Attacked_008_MushroomSisters_1_Talk() {
    Event96:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Attacked_008", sub_name="MushroomSisters_1"), 'Actor2': ActorIdentifier(name="Npc_Attacked_009", sub_name="MushroomSisters_1"), 'Spearker1ActorName': 'Npc_Attacked_008', 'Spearker1InstanceName': 'MushroomSisters_1', 'Spearker2ActorName': 'Npc_Attacked_009', 'Spearker2InstanceName': 'MushroomSisters_1'})

    Npc_Attacked_009[MushroomSisters_1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
        Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_23', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event77
    } else {
        Npc_Attacked_008[MushroomSisters_1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MushroomSisters_1:Talk_01_22', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void GetPresent_Npc_Attacked_009_MushroomSisters_1_Talk() {
    goto Event96
}

void GetPresent_Npc_Attacked_008_MushroomSisters_1_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_02'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MushroomSisters_1:Near_02', 'IsChallenge': False})
    }
}
