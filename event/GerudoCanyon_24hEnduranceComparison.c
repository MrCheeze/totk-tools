-------- EventFlow: GerudoCanyon_24hEnduranceComparison --------

Actor: Npc_GerudoCanyon003
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryHasRuppe', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryCurrentLife']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Ready_Npc_GerudoCanyon003_Talk() {
    Event5:

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Waiting'}) {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Check_Object1', 'Length': 4.0, 'Radius': 2.0}) {
            Event106:

            call Canyon_Gaman.ObjectCheck()

        } else
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Check_Object2', 'Length': 4.0, 'Radius': 2.0}) {
            goto Event106
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_NoMoney'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_008', 'ChoiceLabel3': 6, 'ChoiceLabel2': 8, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_0081', 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 6, 'ChoiceLabel2': 8, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event95:
            if !GameSystemActor.EventQueryHasRuppe({'Value': 150}) {
                switch Player.EventQueryCurrentLife({'Value': 4}) {
                  case [0, 1]:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_005', 'IsNotOpenIfSkipedMostRecent': False})
                  case 2:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerIncreaseRupee({'Value': -150})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Canyon_Gaman_NoMoney'})
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_014', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Battle_HotOrCold', 'Value': True})

                    call Canyon_Gaman.Battle_Setting()

                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GerudoCanyon_24hEnduranceComparison', 'StepName': 'Comparison', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_Battle'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_LosedAndTalked', 'Value': False})
                }
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_013', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_NoMoney'})
            }
          case 1:
            Event4:
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_0083', 'ChoiceLabel3': 6, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event95
              case 1:
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event4
              case 2:
                Event62:
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Waiting', 'Value': False})
            }
          case 2:
            goto Event62
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Losed'}) {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event2:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Explain'}) {
                Event8:
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_001', 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event23:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_Challenge_Once'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_Waiting'})
                  case 1:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_016', 'IsNotOpenIfSkipedMostRecent': False})
                    Event111:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_0080', 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        Npc_GerudoCanyon003.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'ObjectCheck', 'Target': 5})
                        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_0082', 'IsNotOpenIfSkipedMostRecent': False})
                    } {

                        call Canyon_Gaman.WatchStonePole()

                    }


                    fork {
                        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                    } {
                        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc_GerudoCanyon003'})
                    } {
                        Npc_GerudoCanyon003.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2, 'InstanceName': '', 'ActorName': ''})
                    }

                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_0083', 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event23
                      case 1:
                        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event111
                      case 2:
                        Event9:
                        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 2:
                    goto Event9
                }
            } else {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GerudoCanyon_24hEnduranceComparison', 'StepName': 'Prepare'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_Explain'})
                goto Event8
            }
        } else {
            goto Event9
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Challenge_Once'})
    && !Npc_GerudoCanyon003.EventQueryIsOnRecentTalkFlag() {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoCanyon003.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_000', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event2
}

void Comparison_Npc_GerudoCanyon003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 9}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_00'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_001', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_000', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_00'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 10}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_01'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_003', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_002', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_01'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 11}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_02'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_005', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_004', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_02'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 12}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_03'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_007', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_006', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_03'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 13}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_04'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_008', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_04'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 14}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_05'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_011', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_010', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_05'})
        }
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 15}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_06'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_013', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_012', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_06'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_07'}) {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_015', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:While_Talk_014', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_07'})
    }
}

void Ready_Npc_GerudoCanyon003_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Explain'}) {
        Npc_GerudoCanyon003.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_000', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
    } else {
        Npc_GerudoCanyon003.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_000', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    }
}

void Comparison_Npc_GerudoCanyon003_EachFrame() {
    Event133:
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_GerudoCanyon_24hEnduranceComparison', 'Value': 'Comparison', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Canyon_Gaman_Battle', 'Index': -1}) {
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 9}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 10}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 11}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 900, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 12}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 900, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 13}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_004'})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 14}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 15}) {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 900, 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_006'})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            } else {
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 900, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Balloon_While_007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event133
            }
        } else {
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event133
        }
    }
}

void Prepare_Talk() {
    goto Event5
}
