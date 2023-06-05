-------- EventFlow: MercenaryChallenge_Eldin --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle', 'EventQueryAIScheduleCheckActorAction', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMessageDialog', 'EventWait']
queries: ['EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerPlayerGoOffstageCouplerWithCombinedActor']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[Eldin]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002A[Eldin]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003A[Eldin]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia004A[Eldin]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia005A[Eldin]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageCouplerWithCombinedActor']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)]
entrypoint: MasterSword_Check(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[Finale(Reader)]
entrypoint: Finale(Reader)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[LastGreeting_Toryu(Reader)]
entrypoint: LastGreeting_Toryu(Reader)
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002A[LastGreeting_Toryu(MercenarySoldier002)]
entrypoint: LastGreeting_Toryu(MercenarySoldier002)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003A[LastGreeting_Toryu(MercenarySoldier003)]
entrypoint: LastGreeting_Toryu(MercenarySoldier003)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004A[LastGreeting_Toryu(MercenarySoldier004)]
entrypoint: LastGreeting_Toryu(MercenarySoldier004)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005A[LastGreeting_Toryu(MercenarySoldier005)]
entrypoint: LastGreeting_Toryu(MercenarySoldier005)
actions: []
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[ReadyClearEvent_Eldin(Reader)]
entrypoint: ReadyClearEvent_Eldin(Reader)
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)]
entrypoint: ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)]
entrypoint: ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)]
entrypoint: ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)]
entrypoint: ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

void Ready_Npc_MercenarySoldier_CommonTalk() {
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Broken'}) {

        fork {

            call ToryuMember_OneTalk()

        } {

            call RequestCouplerInvisible()

        } {
            Npc_TabantaBridgeHatago005[Eldin].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }


        fork {
            Npc_TabantaBridgeHatago005[Eldin].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }


        call ReadyClearEvent()

    } else {

        fork {

            call ToryuMember_OneTalk()

        } {

            call RequestCouplerInvisible()

        } {
            Npc_TabantaBridgeHatago005[Eldin].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'}) {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn({'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk', 'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1020', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'TurntoActorName': 'Npc_TabantaBridgeHatago005', 'TurntoInstanceName': 'Eldin', 'LeaderActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        } else {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow({'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk', 'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1020', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'TurntoActorName': 'Npc_TabantaBridgeHatago005', 'TurntoInstanceName': 'Eldin', 'MessageId_Last': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1048', 'LeaderActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        }

        call Ready_Npc_LeaderTalk()

    }
}

void Ready_Npc_LeaderTalk() {
    Event1:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event318:
            Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1002', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Eldin', 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})

            call Eldin_MercenarySoldier_BattleStart_StepStart()

        } else {
            Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1013', 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'RideWait'})
            Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1004', 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'RideWait'})
            goto Event318
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1021', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Move', 'ChallengeName': 'MercenaryChallenge_Eldin', 'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin")})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1012', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1013', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1015', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia005A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1014', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia002A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void WeatherTalk() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [4, 5]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_026', 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_027', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1037', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1010', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia005A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1036', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1009', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Ready_Npc_TabantaBridgeHatago005_Eldin_Walking_Talk() {

    call RequestCouplerInvisible()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event1
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': True})
    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1013', 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'RideWait'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1032', 'IsNotOpenIfSkipedMostRecent': False})
        Event35:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Eldin', 'IsWaitEnd': True})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1004', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1002', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event35
    }
}

void Ready_Npc_MercenarySoldier_Eldin_Near_StartWalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Broken'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_LeaderArrival'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
            Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': True, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call WeatherTalk()

    }
}

void MasterSword_Check() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'}) {
        if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'})
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1043', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Eldin', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Eldin', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1044', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1058', 'ASName': 'RideWait', 'EndDialogOption': 3, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1061', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event96:
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'RideWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Finish_Elite({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'Reader': 'Reader'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor2ActorName': '', 'PosVector': [2409.16796875, 556.1680297851562, -2958.988037109375], 'AtVector': [2413.385009765625, 554.9660034179688, -2961.468994140625], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    } else {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1018', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Eldin', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Eldin', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1030', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1045', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1061', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event96
    }
}

void Report_Npc_MercenarySoldier_Talk() {

    call MercenaryChallenge_HyrulePlain.SoundControl_ClearEventStart()


    call MercenaryChallenge_HyrulePlain.InitClearEvent()

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Mercenary_Toryu_IsCamperPresent', 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsCompleted_Exp'}) {

        call Mercenary_Eldin_Bloody.Finale({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    } else {

        call Finale({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    }
}

void Clear_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1023', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1022', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call MasterSword_Check({'Reader': 'Reader'})

    Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Elite({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'Reader': 'Reader'})

    Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1039', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1040'})

    Event180:
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Eldin'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
    }
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call FlagReset()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Akkare', 'StepName': 'MeetAgain', 'IsWaitEnd': True})
}

void Ready_Npc_MercenarySoldier_Eldin_Near_StartBattle() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsCompleted_Exp'}) {

        call Mercenary_Eldin_Bloody.Ready_Npc_MercenarySoldier_Eldin_Near_StartBattle()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Broken'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_LeaderArrival'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
            Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1018', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1018', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 300, 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 300, 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_TabantaBridgeHatago005_BattleStart_StepStart() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1006', 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
}

void ToryuMember_OneTalk() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {

        call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    }
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_EventStarter.EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1050', 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_EventStarter.EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1051', 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_EventStarter.EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1052', 'IsNotOpenIfSkipedMostRecent': False})
      case 3:
        Npc_EventStarter.EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1053', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void EndFlow() {
    goto Event180
}

void Npc_TabantaBridgeHatago005_Eldin_NearBattlePoint() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Broken'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_LeaderArrival'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsAfter_Ready_Exp'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1020', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    }
}

void Eldin_MercenarySoldier_BattleStart_StepStart() {
    Npc_MercenarySoldier_Hylia002A[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia003A[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia004A[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia005A[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void LastGreeting_Toryu() {

    fork {
        Npc_TabantaBridgeHatago005[LastGreeting_Toryu(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[LastGreeting_Toryu(Reader)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'RideWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_EndAnime_Elite({'Player': ActorIdentifier(name="Player"), 'Reader': 'Reader', 'MercenarySoldier002': 'MercenarySoldier002', 'MercenarySoldier003': 'MercenarySoldier003', 'MercenarySoldier004': 'MercenarySoldier004', 'MercenarySoldier005': 'MercenarySoldier005', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

    } {
        Npc_TabantaBridgeHatago005[LastGreeting_Toryu(Reader)].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry01', 'ELinkKey': ''})
    } {

        call MercenaryChallenge_HyrulePlain.SoundControl_ClearFanfare()

    }

}

void ReadyClearEvent() {
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

    call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'ReadyClearEvent_Eldin_Link'})


    call ReadyClearEvent_Eldin({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'InstanceName_SoldierWarp': 'ReadyClearEvent_Eldin', 'Npc_MercenarySoldier_Hylia002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'Npc_MercenarySoldier_Hylia003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'Npc_MercenarySoldier_Hylia004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'Npc_MercenarySoldier_Hylia005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor2ActorName': '', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Eldin', 'PosVector': [6.25, -0.05999999865889549, 5.489999771118164], 'AtVector': [2.609999895095825, -0.7099999785423279, 2.109999895095825], 'TargetFovy': 42.18000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerBecomeSpeaker()
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1054', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1059', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1057', 'IsNotOpenIfSkipedMostRecent': False})

    call MasterSword_Check({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Elite({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Reader': 'Reader', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'Player': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1040'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Toryu_IsDefeatedFirst'})

    call EndFlow()

}

void FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_BattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_IsDoneBattleEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_PreBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_EldinDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'})
}

void MercenaryChallenge_Eldin_Broken_ReadyTalk() {

    call RequestCouplerInvisible()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call ReadyClearEvent()

}

void ReadyClearEvent_Eldin() {
    Npc_TabantaBridgeHatago005[ReadyClearEvent_Eldin(Reader)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ReadyClearEvent_Eldin_Link', 'UseDemoWait': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_TabantaBridgeHatago005[ReadyClearEvent_Eldin(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia002)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia003)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia004)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Eldin(Npc_MercenarySoldier_Hylia005)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void RequestCouplerInvisible() {
    if !LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
        Player.EventTriggerPlayerGoOffstageCouplerWithCombinedActor({'IsVisibleHorse': False, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False})
    } else {
        LastRiddenAnimal_ForEvent.EventGoOffstageCouplerWithCombinedActor({'IsSleepXLink': False, 'IsWaitEnd': True, 'IsVisibleHorse': False, 'ExecuteSetSpeedZeroEveryFrame': False})
    }
}
