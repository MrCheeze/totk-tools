-------- EventFlow: NewCanyonMissingPersonsCase --------

Actor: Npc_FaronWoods007[degudo]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchorAndSleep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_FaronWoods007[canyon]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoGate003[canyon]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoGate003[degudo]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchorAndSleep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWaitFrameOrInput', 'EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_NorthHateru005
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_GerudoGate_AncientAssistant001
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_001[degudo]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchorAndSleep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Road_001[canyon]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Lizalfos_Fire_GerudoCanyon[enemy1_NewCanyonMissingPersonsCase]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Enemy_Lizalfos_Fire_GerudoCanyon[enemy2_NewCanyonMissingPersonsCase]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventTriggerParticipateEvent']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)]
entrypoint: Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)]
entrypoint: Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_Road_001[Npc_Road_001_Talk_SubFlow0(Npc_Road_001)]
entrypoint: Npc_Road_001_Talk_SubFlow0(Npc_Road_001)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_FaronWoods007[Weather_FaronWoods007(Npc_FaronWoods007)]
entrypoint: Weather_FaronWoods007(Npc_FaronWoods007)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Road_001[Weather_Road_001(Npc_Road_001)]
entrypoint: Weather_Road_001(Npc_Road_001)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_HatenoGate003[Weather_HatenoGate003(Npc_HatenoGate003)]
entrypoint: Weather_HatenoGate003(Npc_HatenoGate003)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)]
entrypoint: Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_Road_001[Npc_Road_001_AppearEnemy(Npc_Road_001)]
entrypoint: Npc_Road_001_AppearEnemy(Npc_Road_001)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Road_001[Npc_Road_001_Talk_SubFlow_Stun(Npc_Road_001)]
entrypoint: Npc_Road_001_Talk_SubFlow_Stun(Npc_Road_001)
actions: ['EventPlayAS', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

void Ready_Npc_NorthHateru005_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 3}) {
      case 0:

        fork {
            Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_00_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Event179:
        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 1, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_01_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 1}) {
          case 0:
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_03_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event132:

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 0, 'ActorName': 'Npc_GerudoGate_AncientAssistant001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_GerudoGate_AncientAssistant001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_04_Assistant_Day', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }

            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_05_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 1}) {
              case 0:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': '', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'NewCanyonMissingPersonsCase', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                Event54:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Start_NewCanyonMissingPersonsCase'})
              case 1:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'NewCanyonMissingPersonsCase', 'StepName': 'Step1', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                goto Event54
              case 2:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'NewCanyonMissingPersonsCase', 'StepName': 'Step2', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                goto Event54
            }
          case 1:
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_11_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event132
          case 2:
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_21_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event132
        }
      case [1, 2]:

        call Report_Npc_NorthHateru005_Talk()

    }
}

void Ready_Npc_NorthHateru005_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Ready_00_Client', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step0_Npc_FaronWoods007_Near() {
    Event9:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Searching_Victim1_00', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step0_Npc_HatenoGate003_Near() {
    Event26:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Searching_Victim1_00'})
}

void Step1_Npc_FaronWoods007_Near() {
    goto Event9
}

void Step1_Npc_HatenoGate003_Near() {
    goto Event26
}

void Step2_Npc_FaronWoods007_Near() {
    goto Event9
}

void Step2_Npc_HatenoGate003_Near() {
    goto Event26
}

void Report_Npc_NorthHateru005_Talk() {
    Event45:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001")})


    call Join()


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Start_NewCanyonMissingPersonsCase', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NoGet_Reward_NewCanyonMissingPersonsCase'}) {
            Event275:
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_RePresent_00', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'Npc_FaronWoods007', 'InstanceName': 'degudo'})
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client_02', 'IsNotOpenIfSkipedMostRecent': False})

            call GroupUp()

            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_RePresent_02', 'IsNotOpenIfSkipedMostRecent': False})
            Event302:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'BombFruit', 'Num': 10}) {

                fork {

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'BombFruit_Bundle_D'})

                } {
                    Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
                }

                Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'End_NewCanyonMissingPersonsCase'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'NewCanyonMissingPersonsCase', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            } else {
                Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_MaxPouch', 'IsNotOpenIfSkipedMostRecent': False})

                call ReturnLocation()

                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NoGet_Reward_NewCanyonMissingPersonsCase'})
            }
        } else {
            Event343:
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client_01', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'Npc_FaronWoods007', 'InstanceName': 'degudo'})
            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client_02', 'IsNotOpenIfSkipedMostRecent': False})

            call GroupUp()

            Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event302
        }
    } else {
        Event345:
        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_Unknown_02', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'Npc_FaronWoods007', 'InstanceName': 'degudo'})
        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client_02', 'IsNotOpenIfSkipedMostRecent': False})

        call GroupUp()

        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_Unknown_01', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Start_NewCanyonMissingPersonsCase'})
        goto Event302
    }
}

void Report_Npc_NorthHateru005_Near() {
    Event47:
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Report_00_Client', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step0_Npc_NorthHateru005_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'IsConfront': False, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Event5:
    Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_00_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event175:

    fork {
        Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_GerudoGate_AncientAssistant001', 'IsConfront': False, 'FaceControlType': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 5, 6, 7]:
            Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_Common_Assistant_Night', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [1, 2, 3, 4]:
            Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_Common_Assistant_Day', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }


    fork {
        Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_Common_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'IsConfront': False, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void Step0_Npc_NorthHateru005_Near() {
    Event63:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Ready_00_Client', 'IsDisplayInTerror': False, 'IsChallenge': False, 'NotOverriddenByInterestBalloon': False})
}

void Step2_Npc_NorthHateru005_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Event206:
    Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_20_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event175
}

void Step2_Npc_NorthHateru005_Near() {
    goto Event63
}

void Step1_Npc_NorthHateru005_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Event177:
    Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_10_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event175
}

void Step1_Npc_NorthHateru005_Near() {
    goto Event63
}

void Report_Npc_FaronWoods007_degudo_Talk() {
    Event142:

    call Npc_FaronWoods007_Talk_SubFlow({'Npc_FaronWoods007': ActorIdentifier(name="Npc_FaronWoods007", sub_name="degudo")})

}

void Report_Npc_HatenoGate003_degudo_Talk() {
    Event145:

    call Npc_HatenoGate003_Talk_SubFlow({'Npc_HatenoGate003': ActorIdentifier(name="Npc_HatenoGate003", sub_name="degudo")})

}

void Ready_Npc_FaronWoods007_Near() {
    goto Event9
}

void Npc_FaronWoods007_Talk_SubFlow() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_FaronWoods007_NewCanyonMissingPersonsCase', 'Index': -1}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        if !Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventQueryIsOnRecentTalkFlag() {
            Event71:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_Road_001_NewCanyonMissingPersonsCase', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase', 'Index': -1}) {
                    if !Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventQueryIsOnRecentTalkFlag() {
                        Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_01', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventQueryIsOnRecentTalkFlag() {
                    Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_about', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_aboutVictim3', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase', 'Index': -1}) {
                if Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventQueryIsOnRecentTalkFlag() {
                    Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_about', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_aboutVictim2', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventQueryIsOnRecentTalkFlag() {
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_about', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_aboutVictim2_3', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {

            call Weather_FaronWoods007({'Npc_FaronWoods007': 'Npc_FaronWoods007'})

            Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event71
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_FaronWoods007_NewCanyonMissingPersonsCase'}) {
            Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim1_04', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event11:
            if !GameSystemActor.EventQueryTalkChoice2()
            && !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'WaterFruit', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'WaterFruit', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkHandOver', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim1_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim1_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                fork {
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } {
                    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Rescue_FaronWoods007_NewCanyonMissingPersonsCase'})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 1})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Start_NewCanyonMissingPersonsCase', 'Index': -1}) {
                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'NewCanyonMissingPersonsCase'})
                    }
                }

                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            } else {
                Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim1_03', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Talked_FaronWoods007_NewCanyonMissingPersonsCase'})
            Npc_FaronWoods007[Npc_FaronWoods007_Talk_SubFlow(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim1_00', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event11
        }
    }
}

void Step1_Npc_FaronWoods007_Talk_degudo() {
    goto Event142
}

void Step1_Npc_FaronWoods007_Talk_canyon() {
    Event140:

    call Npc_FaronWoods007_Talk_SubFlow({'Npc_FaronWoods007': ActorIdentifier(name="Npc_FaronWoods007", sub_name="canyon")})

}

void Npc_HatenoGate003_Talk_SubFlow() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        if !Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventQueryIsOnRecentTalkFlag() {
            Event214:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_FaronWoods007_NewCanyonMissingPersonsCase'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_Road_001_NewCanyonMissingPersonsCase'}) {
                    if !Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventQueryIsOnRecentTalkFlag() {
                        Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_aboutVictim2', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_Road_001_NewCanyonMissingPersonsCase'}) {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_aboutVictim1', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_aboutVictim1_2', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Weather_HatenoGate003({'Npc_HatenoGate003': 'Npc_HatenoGate003'})

            Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event214
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_HatenoGate003_NewCanyonMissingPersonsCase'}) {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Fruit_I', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_05', 'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event58:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Fruit_I', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkHandOver', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_06', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    } {
                        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase'})
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 1})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Start_NewCanyonMissingPersonsCase', 'Index': -1}) {
                            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'NewCanyonMissingPersonsCase'})
                        }
                    }

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } else {
                    Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_05', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Talked_HatenoGate003_NewCanyonMissingPersonsCase'})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Fruit_I', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_00', 'ChangeMstxtForActor': False, 'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event58
            } else {
                Npc_HatenoGate003[Npc_HatenoGate003_Talk_SubFlow(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim3_00', 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    }
}

void Step0_Npc_FaronWoods007_Talk_canyon() {
    goto Event140
}

void Step2_Npc_FaronWoods007_Talk_canyon() {
    goto Event140
}

void Step2_Npc_FaronWoods007_Talk_degudo() {
    goto Event142
}

void Step0_Npc_HatenoGate003_Talk_canyon() {
    Event144:

    call Npc_HatenoGate003_Talk_SubFlow({'Npc_HatenoGate003': ActorIdentifier(name="Npc_HatenoGate003", sub_name="canyon")})

}

void Step0_Npc_HatenoGate003_Talk_degudo() {
    goto Event145
}

void Step1_Npc_HatenoGate003_Talk_canyon() {
    goto Event144
}

void Step1_Npc_HatenoGate003_Talk_degudo() {
    goto Event145
}

void Step2_Npc_HatenoGate003_Talk_canyon() {
    goto Event144
}

void Step2_Npc_HatenoGate003_Talk_degudo() {
    goto Event145
}

void Ready_Npc_FaronWoods007_Talk_canyon() {
    goto Event140
}

void Ready_Npc_FaronWoods007_degudo_Talk_degudo() {
    goto Event142
}

void Ready_Npc_HatenoGate003_Talk_canyon() {
    goto Event144
}

void Ready_Npc_HatenoGate003_degudo_Talk_degudo() {
    goto Event145
}

void Ready_Npc_HatenoGate003_Near() {
    goto Event26
}

void Ready_Npc_GerudoGate_AncientAssistant001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001")})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 3}) {
      case 0:
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_00_Client_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_NorthHateru005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Ready_00_Client', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event179
      case [1, 2]:

        call Report_Npc_NorthHateru005_Talk()

    }
}

void Step0_Npc_GerudoGate_AncientAssistant001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'FaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_00_Client_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    goto Event5
}

void Step1_Npc_GerudoGate_AncientAssistant001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'FaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_00_Client_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    goto Event177
}

void Step2_Npc_GerudoGate_AncientAssistant001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NorthHateru005"), 'Actor2': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Spearker1ActorName': 'Npc_NorthHateru005', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker2InstanceName': ''})


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'FaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Step_00_Client_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    goto Event206
}

void Report_Npc_GerudoGate_AncientAssistant001_Talk() {
    Event268:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_GerudoGate_AncientAssistant001"), 'Actor2': ActorIdentifier(name="Npc_NorthHateru005"), 'Spearker1ActorName': 'Npc_GerudoGate_AncientAssistant001', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_NorthHateru005', 'Spearker2InstanceName': ''})


    call Join()


    fork {
        Npc_NorthHateru005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_GerudoGate_AncientAssistant001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Start_NewCanyonMissingPersonsCase', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NoGet_Reward_NewCanyonMissingPersonsCase'}) {
            Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_RePresent_01', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            goto Event275
        } else {
            Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_00_Client_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            goto Event343
        }
    } else {
        Npc_GerudoGate_AncientAssistant001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Talk_Report_01_Client_Unknown_00', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NorthHateru005', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        goto Event345
    }
}

void Ready_Npc_Road_001_canyon_Talk() {
    Event222:

    call Npc_Road_001_Talk_SubFlow0({'Npc_Road_001': ActorIdentifier(name="Npc_Road_001", sub_name="canyon")})

}

void Ready_Npc_Road_001_canyon_Near() {
    Event223:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/NewCanyonMissingPersonsCase:Balloon_Searching_Victim2_00', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step0_Npc_Road_001_canyon_Talk() {
    goto Event222
}

void Step0_Npc_Road_001_canyon_Near() {
    goto Event223
}

void Step1_Npc_Road_001_canyon_Talk() {
    goto Event222
}

void Step1_Npc_Road_001_canyon_Near() {
    goto Event223
}

void Step2_Npc_Road_001_canyon_Talk() {
    goto Event222
}

void Step2_Npc_Road_001_canyon_Near() {
    goto Event223
}

void Report_Npc_Road_001_degudo_Talk() {
    Event245:

    call Npc_Road_001_Talk_SubFlow_Eliminate({'Npc_Road_001': ActorIdentifier(name="Npc_Road_001", sub_name="degudo")})

}

void Ready_Npc_Road_001_degudo_Talk() {
    goto Event245
}

void Step0_Npc_Road_001_degudo_Talk() {
    goto Event245
}

void Step1_Npc_Road_001_degudo_Talk() {
    goto Event245
}

void Step2_Npc_Road_001_degudo_Talk() {
    goto Event245
}

void Npc_Road_001_Talk_SubFlow0() {

    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Road_001', 'InstanceName': 'canyon', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'canyon', 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.800000011920929, 1.5, 3.0], 'Actor1ActorName': 'Npc_Road_001', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_Road_001[Npc_Road_001_Talk_SubFlow0(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim2_00', 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'AppearEnemy_NewCanyonMissingPersonsCase'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Enemy_Lizalfos_Fire_GerudoCanyon[enemy1_NewCanyonMissingPersonsCase].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Lizalfos_Fire_GerudoCanyon[enemy2_NewCanyonMissingPersonsCase].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }


    fork {
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Enemy_Lizalfos_Fire_GerudoCanyon', 'InstanceName': 'enemy1_NewCanyonMissingPersonsCase'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Road_001', 'Actor1InstanceName': 'canyon', 'PosVector': [-2.630000114440918, 2.0, 3.740000009536743], 'AtVector': [-0.30000001192092896, 0.0, 16.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsIgnorePosVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'Actor1InstanceName': 'canyon', 'AtVector': [-20.5, 0.0, -14.0], 'PosVector': [-9.0, 2.0, -8.0], 'Actor1ActorName': 'Npc_Road_001', 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Ready_Npc_Road_001_canyon_EliminateEnemy_NewCanyonMissingPersonsCase_Talk() {
    Event67:

    call Npc_Road_001_Talk_SubFlow_Eliminate({'Npc_Road_001': ActorIdentifier(name="Npc_Road_001", sub_name="canyon")})

}

void Step0_Npc_Road_001_canyon_EliminateEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event67
}

void Step2_Npc_Road_001_canyon_EliminateEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event67
}

void Step1_Npc_Road_001_canyon_EliminateEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event67
}

void Weather_FaronWoods007() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case 0:
        Npc_FaronWoods007[Weather_FaronWoods007(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_Morning', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [1, 2, 3, 4]:
        Npc_FaronWoods007[Weather_FaronWoods007(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_Noon', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [5, 6]:
        Npc_FaronWoods007[Weather_FaronWoods007(Npc_FaronWoods007)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_Evening', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 7:
        Npc_FaronWoods007[Weather_FaronWoods007(Npc_FaronWoods007)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim1_Midnight', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Weather_Road_001() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_Road_001[Weather_Road_001(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_Morning', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_Road_001[Weather_Road_001(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_Noon', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [5, 6]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_Road_001[Weather_Road_001(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_Evening', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 7:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_Road_001[Weather_Road_001(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_Midnight', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Weather_HatenoGate003() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_HatenoGate003[Weather_HatenoGate003(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_Morning', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4]:
        Npc_HatenoGate003[Weather_HatenoGate003(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_Noon', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [5, 6]:
        Npc_HatenoGate003[Weather_HatenoGate003(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_Evening', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 7:
        Npc_HatenoGate003[Weather_HatenoGate003(Npc_HatenoGate003)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim3_Midnight', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step0_Npc_FaronWoods007_Talk_degudo() {
    goto Event142
}

void Npc_Road_001_Talk_SubFlow_Eliminate() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_Road_001_NewCanyonMissingPersonsCase'}) {
        if !Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventQueryIsOnRecentTalkFlag() {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

            Event192:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Rescue_FaronWoods007_NewCanyonMissingPersonsCase'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase', 'Index': -1}) {
                    if !Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventQueryIsOnRecentTalkFlag() {
                        Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_aboutVictim3', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Rescue_HatenoGate003_NewCanyonMissingPersonsCase', 'Index': -1}) {
                Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_aboutVictim1', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_aboutVictim1_3', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Weather_Road_001({'Npc_Road_001': 'Npc_Road_001'})

            Npc_Road_001[Npc_Road_001_Talk_SubFlow_Eliminate(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Rescued_Victim2_00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event192
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

        Event16:
        Npc_Road_001[Npc_Road_001_Talk_SubFlow_Stun(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim2_02', 'ASName': 'Talk', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Rescue_Road_001_NewCanyonMissingPersonsCase'})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Count_Rescue_NewCanyonMissingPersonsCase', 'Value': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Start_NewCanyonMissingPersonsCase', 'Index': -1}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'NewCanyonMissingPersonsCase'})
        }
        GameSystemActor.EventWaitFrameOrInput({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }
}

void Ready_Npc_Road_001_canyon_AppearEnemy_NewCanyonMissingPersonsCase_Talk() {
    Event244:

    call Npc_Road_001_AppearEnemy({'Npc_Road_001': ActorIdentifier(name="Npc_Road_001", sub_name="canyon")})

}

void Npc_Road_001_AppearEnemy() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    Npc_Road_001[Npc_Road_001_AppearEnemy(Npc_Road_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/NewCanyonMissingPersonsCase:Searching_Victim2_01', 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Step0_Npc_Road_001_canyon_AppearEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event244
}

void Step2_Npc_Road_001_canyon_AppearEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event244
}

void Step1_Npc_Road_001_canyon_AppearEnemy_NewCanyonMissingPersonsCase_Talk() {
    goto Event244
}

void Talk_Rescue_All() {
    goto Event45
}

void Near_Rescue_All() {
    goto Event47
}

void Talk_Rescue_All_Npc_GerudoGate_AncientAssistant001() {
    goto Event268
}

void Stun() {

    call Npc_Road_001_Talk_SubFlow_Stun({'Npc_Road_001': ActorIdentifier(name="Npc_Road_001", sub_name="canyon")})

}

void Npc_Road_001_Talk_SubFlow_Stun() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 6, 'IsRidingAny': False, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Stun', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Road_001[Npc_Road_001_Talk_SubFlow_Stun(Npc_Road_001)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Road_001[Npc_Road_001_Talk_SubFlow_Stun(Npc_Road_001)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Road_001', 'InstanceName': 'canyon', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Npc_Road_001', 'Actor1InstanceName': 'canyon', 'PosVector': [0.3799999952316284, 0.8700000047683716, 6.119999885559082], 'AtVector': [-0.5, 1.340000033378601, 1.440000057220459], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Road_001", sub_name="canyon"), 'Arg_Turn': 3})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    goto Event16
}

void Join() {
    Npc_Road_001[degudo].EventTriggerParticipateEvent()
    Npc_FaronWoods007[degudo].EventTriggerParticipateEvent()
    Npc_HatenoGate003[degudo].EventTriggerParticipateEvent()
}

void GroupUp() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'NewCanyonMissingPersonsCase', 'UseDemoWait': True})

    fork {
        Npc_Road_001[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': '', 'EnableArrivalState': False})
        Npc_Road_001[degudo].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_Road_001[degudo].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_FaronWoods007[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': '', 'EnableArrivalState': False})
        Npc_FaronWoods007[degudo].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
        Npc_FaronWoods007[degudo].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_HatenoGate003[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': '', 'EnableArrivalState': False})
        Npc_HatenoGate003[degudo].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_HatenoGate003[degudo].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_NorthHateru005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_GerudoGate_AncientAssistant001.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 3.059999942779541, -3.0399999618530273], 'AtVector': [-0.03999999910593033, 0.46000000834465027, 1.0199999809265137], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': False})
        Event389:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 1}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player', 'PosVector': [6.360000133514404, 0.8399999737739563, 2.2899999618530273], 'AtVector': [-0.8100000023841858, -1.7300000190734863, 1.659999966621399], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 2.8399999141693115, -3.869999885559082], 'AtVector': [-0.029999999329447746, 1.6399999856948853, 1.5700000524520874], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
    goto Event389
}

void ReturnLocation() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case 0:
            if !EventWorldManagerController.EventQueryCheckTime({'Hour': 5, 'Minute': 0, 'CompareOparator': 3}) {
                Event365:

                fork {
                    Npc_Road_001[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ResetArrivalState': False, 'InstanceName': '', 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'EnableArrivalState': False})
                } {
                    Npc_FaronWoods007[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': '', 'AnchorType': 0, 'EnableArrivalState': False})
                } {
                    Npc_HatenoGate003[degudo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': '', 'AnchorType': 0, 'EnableArrivalState': False})
                }

            } else {
                Event374:

                fork {
                    Npc_Road_001[degudo].EventAIScheduleWarpToAnchorAndSleep({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ResetArrivalState': False, 'ForceGetUpDuringSleep': False, 'AnchorType': 0, 'EnableArrivalState': False})
                } {
                    Npc_FaronWoods007[degudo].EventAIScheduleWarpToAnchorAndSleep({'AnchorType': 20, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ResetArrivalState': False, 'ForceGetUpDuringSleep': False, 'EnableArrivalState': False})
                } {
                    Npc_HatenoGate003[degudo].EventAIScheduleWarpToAnchorAndSleep({'AnchorType': 20, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ResetArrivalState': False, 'ForceGetUpDuringSleep': False, 'EnableArrivalState': False})
                }

            }
          case [1, 2, 3, 4, 5, 6]:
            goto Event365
          case 7:
            goto Event374
        }
    } {
        Npc_NorthHateru005.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        Npc_NorthHateru005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'Npc_GerudoGate_AncientAssistant001'})
    } {
        Npc_GerudoGate_AncientAssistant001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_GerudoGate_AncientAssistant001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'Npc_NorthHateru005'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
