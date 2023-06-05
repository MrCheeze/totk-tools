-------- EventFlow: Npc_HighMountain012 --------

Actor: Npc_HighMountain012
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago001
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
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

void Talk() {
    Event125:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_HighMountain012"), 'Actor2': ActorIdentifier(name="Npc_TabantaBridgeHatago001"), 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_HighMountain012', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_TabantaBridgeHatago001', 'Spearker2InstanceName': ''})

    Npc_TabantaBridgeHatago001.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    if !Npc_HighMountain012.EventQueryIsOnRecentTalkFlag() {

        fork {
            Npc_HighMountain012.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_TabantaBridgeHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain012.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        fork {
            Npc_HighMountain012.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'Target': 3, 'ActorName': 'Npc_TabantaBridgeHatago001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_TabantaBridgeHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'ActorName': 'Npc_HighMountain012', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_TabantaBridgeHatago001.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event75:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Bera_Meet_TabantaBridgeHatago', 'Value': True, 'Index': -1})
        Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1032', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune16_IsCompleted_Exp'})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            if !Npc_TabantaBridgeHatago001.EventQueryIsOnRecentTalkFlag() {
                Npc_TabantaBridgeHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01_01', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01_04', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_TabantaBridgeHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01_05', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_TabantaBridgeHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01_02', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_TabantaBridgeHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago001:Talk01_03', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1026_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})

        fork {
            Npc_HighMountain012.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_TabantaBridgeHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1026_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1026', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain012.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        fork {
            Npc_HighMountain012.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'Target': 3, 'ActorName': 'Npc_TabantaBridgeHatago001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_TabantaBridgeHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'ActorName': 'Npc_HighMountain012', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_TabantaBridgeHatago001.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk1027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event75
    }
}

void Near() {
    Event123:
    Npc_HighMountain012.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain012:near1000', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SageOfWind_IsAfter_TouchSecretStone_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call Rito_ItemExchange.HackJoin()


    call Rito_ItemExchange.VerlaJoin()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Bera_ClearTalk', 'Index': -1}) {
        if !Npc_HighMountain012.EventQueryIsOnRecentTalkFlag() {
            Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2020', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event144:
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Bera_Random_ItemExchange'}) {
              case [0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'Bera_Random_ItemExchange'})

                    call Fish_ItemExchange()

                } else {
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'Bera_Random_ItemExchange'})

                    call Mushroom_ItemExchange()

                }
              case 1:

                call Shellfish_ItemExchange()

              case 2:

                call Fish_ItemExchange()

              case 3:

                call Mushroom_ItemExchange()

            }
        } else
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case 0:
            if !EventWorldManagerController.EventQueryCheckTime({'Hour': 5, 'Minute': 0, 'CompareOparator': 4}) {
                Event140:
                Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2503', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Event138:
                Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2501', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event143:
            Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2504', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event144
          case 1:
            goto Event138
          case [2, 3, 4, 5]:
            goto Event140
          case 6:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'Hour': 23, 'CompareOparator': 4}) {
                goto Event140
            } else {
                Event139:
                Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2502', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event143
          case 7:
            goto Event139
        }
    } else
    if Npc_HighMountain012.EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2001_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2001', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Bera_ClearTalk'})
    Npc_HighMountain012.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2020', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event144
}

void SageOfWind_IsAfter_TouchSecretStone_Exp_Near() {
    if !Npc_HighMountain012.EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain012.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain012:near2011'})
    } else
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case 0:
        if !EventWorldManagerController.EventQueryCheckTime({'Hour': 5, 'Minute': 0, 'CompareOparator': 4}) {
            Event195:
            Npc_HighMountain012.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain012:near2010'})
        } else {
            Event193:
            Npc_HighMountain012.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain012:near2008'})
        }
      case 1:
        goto Event193
      case [2, 3, 4, 5]:
        Event194:
        Npc_HighMountain012.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain012:near2009'})
      case 6:
        if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'Hour': 23, 'CompareOparator': 4}) {
            goto Event194
        } else {
            goto Event195
        }
      case 7:
        goto Event195
    }
}

void Shellfish_ItemExchange() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Obj_ArrowBundle_A_02'}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_FishGet_AC', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2010_01', 'IsNotOpenIfSkipedMostRecent': False})
                Event21:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_FishGet_AC', 'EffectType': 0, 'EffectValue': -1, 'Num': -3, 'IsSetOnlyEquipIndex': False})

                    call Exchange_Common()

                } else {
                    Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Rito_ItemExchange:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2010', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event21
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
            Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2010_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event159:
            Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2014_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event159
        }
    } else {

        call MaxPoach()

    }
}

void Fish_ItemExchange() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Obj_ArrowBundle_A_02', 'Num': 1}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_FishGet_C', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2011_01', 'IsNotOpenIfSkipedMostRecent': False})
                Event40:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_FishGet_C', 'EffectType': 0, 'EffectValue': -1, 'Num': -3, 'IsSetOnlyEquipIndex': False})

                    call Exchange_Common()

                } else {
                    Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Rito_ItemExchange:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2011', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event40
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2011_01', 'IsNotOpenIfSkipedMostRecent': False})
            Event178:
            Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2014_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2011', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event178
        }
    } else {

        call MaxPoach()

    }
}

void Mushroom_ItemExchange() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Obj_ArrowBundle_A_02', 'Num': 1}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 5, 'Actor': 'Item_MushroomGet_K', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2012_01', 'IsNotOpenIfSkipedMostRecent': False})
                Event51:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Num': -5, 'Actor': 'Item_MushroomGet_K', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})

                    call Exchange_Common()

                } else {
                    Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Rito_ItemExchange:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
                Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2012', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event51
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bera_JustDecideTradeItem'}) {
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2012_01', 'IsNotOpenIfSkipedMostRecent': False})
            Event184:
            Npc_HighMountain012.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2014_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Bera_JustDecideTradeItem', 'Index': -1})
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event184
        }
    } else {

        call MaxPoach()

    }
}

void NearActorsTalk() {
    goto Event125
}

void NearActorsNear() {
    goto Event123
}

void Exchange_Common() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkHandOver', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Rito_ItemExchange:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain012.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_HighMountain012.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'TalkWait'})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_ArrowBundle_A_02'})

    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Bera_Random_ItemExchange'}) {
      case [0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Event169:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Bera_Random_ItemExchange'})
            Event170:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Bera_JustDecideTradeItem', 'Value': False, 'Index': -1})
            Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Event168:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'Bera_Random_ItemExchange'})
            goto Event170
          case 2:
            Event167:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'Bera_Random_ItemExchange'})
            goto Event170
        }
      case 1:
        if !GameSystemActor.EventQueryRandomChoice2() {
            goto Event168
        } else {
            goto Event167
        }
        goto Event170
      case 2:
        if !GameSystemActor.EventQueryRandomChoice2() {
            goto Event169
        } else {
            goto Event167
        }
        goto Event170
      case 3:
        if !GameSystemActor.EventQueryRandomChoice2() {
            goto Event169
        } else {
            goto Event168
        }
        goto Event170
    }
}

void MaxPoach() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_HighMountain012.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain012:Talk2021', 'IsNotOpenIfSkipedMostRecent': False})
}
