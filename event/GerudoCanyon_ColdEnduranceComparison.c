-------- EventFlow: GerudoCanyon_ColdEnduranceComparison --------

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

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryCheckTime']
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

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Ready_Npc_GerudoCanyon003_Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Cold_Gaman_Waiting'}) {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Check_Object1', 'Length': 4.0, 'Radius': 2.0}) {
            Event108:

            call Canyon_Gaman.ObjectCheck()

        } else
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Check_Object2', 'Length': 4.0, 'Radius': 2.0}) {
            goto Event108
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_NoMoney'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_24hEnduranceComparison:Ready_Talk_008', 'ChoiceLabel3': 6, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_0081', 'ChoiceLabel3': 6, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event20:
            if !GameSystemActor.EventQueryHasRuppe({'Value': 50}) {
                switch Player.EventQueryCurrentLife({'Value': 4}) {
                  case [0, 1]:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_005', 'IsNotOpenIfSkipedMostRecent': False})
                  case 2:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_012', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerIncreaseRupee({'Value': -50})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_NoMoney', 'Value': False})
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_014', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_Battle_HotOrCold', 'Value': False})

                    call Canyon_Gaman.Battle_Setting()

                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_003', 'IsNotOpenIfSkipedMostRecent': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Comparison', 'ChallengeName': 'GerudoCanyon_ColdEnduranceComparison', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_Battle'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Canyon_Cold_Gaman_LosedAndTalked'})
                }
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_013', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_NoMoney', 'Value': True})
            }
          case 1:
            Event71:
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_0083', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel3': 6, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event20
              case 1:
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event71
              case 2:
                Event55:
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_010', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Canyon_Cold_Gaman_Waiting'})
            }
          case 2:
            goto Event55
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Cold_Gaman_Challenge_Once'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Cold_Gaman_Losed'}) {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_007', 'IsNotOpenIfSkipedMostRecent': False})
        Event16:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Cold_Gaman_Explain'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_015', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
                Event47:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_002', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Cold_Gaman_Challenge_Once'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Cold_Gaman_Waiting'})
                  case 1:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
                    Event3:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_0080', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        Npc_GerudoCanyon003.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'ObjectCheck', 'Target': 5})
                        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_0082', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
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

                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_0083', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event47
                  case 2:
                    Event4:
                    Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_004', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GerudoCanyon_ColdEnduranceComparison', 'StepName': 'Prepare'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Cold_Gaman_Explain'})
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_001', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event3
            }
        } else {
            goto Event4
        }
    } else
    if !Npc_GerudoCanyon003.EventQueryIsOnRecentTalkFlag() {
        Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_006', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoCanyon003.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Ready_Talk_000', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event16
}

void Ready_Npc_GerudoCanyon003_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Cold_Gaman_Explain'}) {
        Npc_GerudoCanyon003.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
    } else {
        Npc_GerudoCanyon003.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_000', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    }
}

void Comparison_Npc_GerudoCanyon003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    switch EventWorldManagerController.EventQueryTimeDivision() {
      case 0:
        Event100:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_07'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_015', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_014', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_07'})
        }
      case [5, 6]:
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 21, 'Minute': 30}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_00'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_001', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_000', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_00'})
            }
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 22, 'Minute': 30}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_01'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_003', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_002', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_01'})
            }
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 23, 'Minute': 30}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_02'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_005', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_004', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_02'})
            }
        } else
        Event92:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_03'}) {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_007', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_006', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_03'})
        }
      case 7:
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 0, 'Minute': 30}) {
            goto Event92
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 1, 'Minute': 30}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_04'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_008', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_04'})
            }
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 2, 'Minute': 30}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_05'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_011', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_010', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_05'})
            }
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 3}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Canyon_Gaman_WhileTalked_06'}) {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_013', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyon003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:While_Talk_012', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Canyon_Gaman_WhileTalked_06'})
            }
        } else
        goto Event100
    }
}

void Comparison_Npc_GerudoCanyon003_EachFrame() {
    Event134:
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Comparison', 'GameDataName': 'Step_GerudoCanyon_ColdEnduranceComparison', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Canyon_Gaman_Battle', 'Index': -1}) {
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case 0:
                Event33:
                Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_007', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event134
              case [5, 6]:
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 21, 'Minute': 30}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_000', 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': False, 'DisplayFrame': 900, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 22, 'Minute': 30}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_001', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 23, 'Minute': 30}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_002', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else {
                    Event29:
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_003', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                }
              case 7:
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 0, 'Minute': 30}) {
                    goto Event29
                } else
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 1, 'Minute': 30}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_004', 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 2, 'Minute': 30}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_005', 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else
                if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 30, 'Hour': 3}) {
                    Npc_GerudoCanyon003.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/GerudoCanyon_ColdEnduranceComparison:Balloon_While_006', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 900, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                    goto Event134
                } else {
                    goto Event33
                }
            }
        } else {
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event134
        }
    }
}

void Prepare_Talk() {
    goto Event0
}
