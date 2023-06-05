-------- EventFlow: TreasureOfLambda --------

Actor: subchallnpc000[LambdaDomi]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventNPCChangePostureWithAS', 'EventTriggerLookAtObject', 'EventAIScheduleMoveToAnchor']
queries: ['EventQueryHasControllerSet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: subchallnpc000_twin[LambdaBri]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventNPCChangePostureWithAS', 'EventTriggerLookAtObject', 'EventAIScheduleMoveToAnchor', 'EventTriggerParticipateEvent']
queries: ['EventQueryHasControllerSet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerConversate', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerWait', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerClimbOff', 'EventPlayerHorseGetOff', 'EventPlayerStopInAir', 'EventTriggerParticipateEvent', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventRequestSoulSageLightOrb']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: Dm_TBox_Field_Iron[TreasureDynamic]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

void Ready_subchallnpc000_LambdaDomi_Near() {
    Event0:
    subchallnpc000[LambdaDomi].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/TreasureOfLambda:near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_subchallnpc000_LambdaDomi_Talk() {
    Event2:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'subchallnpc000_twin', 'Spearker1InstanceName': 'LambdaBri', 'Spearker2ActorName': 'subchallnpc000', 'Spearker2InstanceName': 'LambdaDomi', 'Actor1': ActorIdentifier(name="subchallnpc000", sub_name="LambdaDomi"), 'Actor2': ActorIdentifier(name="subchallnpc000_twin", sub_name="LambdaBri")})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        fork {
            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BuriDomi_HaveTalked_2'})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_29', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_32', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_34', 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
        Event118:
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            } {
                subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            }

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TreasureOfLambda_TalkLambda'}) {
                Event153:
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_37', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event160:
                subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_26', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_27', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_43', 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_44', 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_45', 'IsNotOpenIfSkipedMostRecent': False})

                fork {
                    subchallnpc000[LambdaDomi].EventAIScheduleMoveToAnchor({'InstanceName': '', 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'IsTurnToAnchorRot': True, 'ASName': '', 'ActionType': 3, 'AnchorType': 6, 'IsWaitEnd': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                    subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 3})
                    subchallnpc000[LambdaDomi].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    subchallnpc000_twin[LambdaBri].EventAIScheduleMoveToAnchor({'InstanceName': '', 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'IsTurnToAnchorRot': True, 'ASName': '', 'ActionType': 3, 'AnchorType': 6, 'IsWaitEnd': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                    subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 3})
                    subchallnpc000_twin[LambdaBri].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
                }

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'TreasureOfLambda', 'StepName': 'OpenTreasure', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Our_Treasure_IsCompleted_Exp'}) {
                goto Event153
            } else
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuriDomi_HaveTalked', 'Index': -1}) in [0, 1] {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'TreasureOfLambda_TalkLambda'})
                goto Event160
            }
        }
    } else {

        fork {
            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }

        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_03', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_46', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BuriDomi_HaveTalked_2'})
            subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
            subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuriDomi_HaveTalked', 'Index': -1}) {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
            subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event103:
            subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_22', 'ChoiceLabel1': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_24', 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event118
        } else {
            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
            subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_28', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Ready_subchallnpc000_twin_LambdaBri_Talk() {
    goto Event2
}

void OpenTreasure_subchallnpc000_LambdaDomi_Near() {
    Event6:
    subchallnpc000[LambdaDomi].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/TreasureOfLambda:near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void OpenTreasure_subchallnpc000_LambdaDomi_Talk() {
    Event8:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Actor2': ActorIdentifier(name="subchallnpc000_twin", sub_name="LambdaBri"), 'Actor1': ActorIdentifier(name="subchallnpc000", sub_name="LambdaDomi"), 'Spearker1ActorName': 'subchallnpc000_twin', 'Spearker1InstanceName': 'LambdaBri', 'Spearker2ActorName': 'subchallnpc000', 'Spearker2InstanceName': 'LambdaDomi'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event193:
        subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'Target': 2, 'ResetArriveTransformFixed': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_47', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_41', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_43', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_44', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_45', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_48', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event193
    }
}

void OpenTreasure_subchallnpc000_twin_LambdaBri_Talk() {
    goto Event8
}

void OpenBox() {
    Player.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_49', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'TreasureOfLambda_OpenBox_SubFlow'})

    fork {
        subchallnpc000[LambdaDomi].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        subchallnpc000_twin[LambdaBri].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 6, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Dm_TBox_Field_Iron[TreasureDynamic].EventWarpToTargetPosAndRot({'YAngle': 47.56999969482422, 'IsWaitEnd': True, 'Position': [2580.0, 112.0, -1402.449951171875]})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'TreasureOfLambda', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void StopCaveIn() {
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventTriggerPlayerClimbOff()
    }
    if !Player.EventQueryCheckPlayerState({'State': 4}) {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})

            fork {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            }

            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

            call InitEvent_Air()

            Event287:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

            fork {
                subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
                subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
                subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            call ExitCave()

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BuriDomi_HaveTalked_2'})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuriDomi_HaveTalked', 'Index': -1}) {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event103
        } else {
            Event289:

            fork {
                subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            } {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerWait({'IsWaitEnd': False})
            }

            subchallnpc000[LambdaDomi].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            subchallnpc000_twin[LambdaBri].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

            call InitEvent1()

            goto Event287
        }
    } else {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        goto Event289
    }
}

void InitEvent() {
    subchallnpc000[LambdaDomi].EventTriggerBecomeSpeaker()

    fork {
        subchallnpc000[LambdaDomi].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000[LambdaDomi].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000[LambdaDomi].EventQueryHasControllerSet() {
            subchallnpc000[LambdaDomi].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        subchallnpc000_twin[LambdaBri].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000_twin[LambdaBri].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000_twin[LambdaBri].EventQueryHasControllerSet() {
            subchallnpc000_twin[LambdaBri].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    } {
        if Player.EventQueryCheckPlayerState({'State': 27}) {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
        }
    }

}

void ExitCave() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventTriggerPlayerGetOff()
    }
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'TreasureOfLambda_Canceled', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})

    fork {
        subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'PosVector': [2604.77001953125, 257.20001220703125, -1321.81005859375], 'AtVector': [2604.68994140625, 256.95001220703125, -1327.97998046875], 'TargetFovy': 40.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Prepare2() {
    subchallnpc000_twin[LambdaBri].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})

    fork {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'OpenBoxPos02', 'UseDemoWait': True})
    } {
        subchallnpc000[LambdaDomi].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'DomiOpenBoxPos02', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        subchallnpc000_twin[LambdaBri].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'BriOpenBoxPos02', 'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Dm_TBox_Field_Iron[TreasureDynamic].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 70.10874938964844, 'Position': [2578.541015625, 240.6623992919922, -1428.60400390625]})
    }

}

void StopTakeOut() {
    EventSystemActor.EventTransition({'EventName': 'TreasureOfLambda_StopTakeOut_SubFlow', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
    GameSystemActor.EventResetGimmick({'Option': 0, 'IsWaitEnd': True, 'IsResetCamera': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'PosVector': [2579.909912109375, 244.89999389648438, -1399.219970703125], 'AtVector': [2580.47998046875, 243.97999572753906, -1405.030029296875], 'TargetFovy': 50.0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 10.0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void StopTakeOut_SubFlow() {

    call Common.AirStartUP_Player()


    call InitEvent()

    subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_51', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if Player.EventQueryCheckPlayerState({'State': 5}) {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    call ExitCave()

    subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_52', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_53', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerWarpToTargetPosAndRot({'Position': [2580.20703125, 242.8437957763672, -1402.6929931640625], 'UseDemoWait': False, 'YAngle': 174.3990020751953, 'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    fork {
        subchallnpc000[LambdaDomi].EventAIScheduleMoveToAnchor({'InstanceName': '', 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'IsTurnToAnchorRot': True, 'ASName': '', 'ActionType': 3, 'AnchorType': 6, 'IsWaitEnd': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 3})
        subchallnpc000[LambdaDomi].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        subchallnpc000_twin[LambdaBri].EventAIScheduleMoveToAnchor({'InstanceName': '', 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'IsTurnToAnchorRot': True, 'ASName': '', 'ActionType': 3, 'AnchorType': 6, 'IsWaitEnd': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 3})
        subchallnpc000_twin[LambdaBri].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    }

}

void InitEvent1() {
    subchallnpc000[LambdaDomi].EventTriggerBecomeSpeaker()

    fork {
        subchallnpc000[LambdaDomi].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000[LambdaDomi].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000[LambdaDomi].EventQueryHasControllerSet() {
            subchallnpc000[LambdaDomi].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        subchallnpc000_twin[LambdaBri].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000_twin[LambdaBri].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000_twin[LambdaBri].EventQueryHasControllerSet() {
            subchallnpc000_twin[LambdaBri].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        Player.EventPlayerConversate({'EventGreetType': 3, 'IsWaitEnd': False})
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void NearActorsTalk() {
    goto Event2
}

void NearActorsNear() {
    goto Event0
}

void NearActorsTalkBri() {
    goto Event2
}

void NearActorsNearBri() {
    Event34:
    subchallnpc000_twin[LambdaBri].EventTriggerParticipateEvent()
}

void NearActorsTalkOpen() {
    goto Event8
}

void NearActorsNearOpen() {
    goto Event6
}

void NearActorsTalkBriOpen() {
    goto Event8
}

void NearActorsNearBriOpen() {
    goto Event34
}

void InitEvent_Air() {
    subchallnpc000[LambdaDomi].EventTriggerBecomeSpeaker()

    fork {
        subchallnpc000[LambdaDomi].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000[LambdaDomi].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000[LambdaDomi].EventQueryHasControllerSet() {
            subchallnpc000[LambdaDomi].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        subchallnpc000_twin[LambdaBri].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        subchallnpc000_twin[LambdaBri].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !subchallnpc000_twin[LambdaBri].EventQueryHasControllerSet() {
            subchallnpc000_twin[LambdaBri].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 1})
        }
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void OpenBox_SubFlow() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_TreasureOff'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [2582.919921875, 242.1999969482422, -1424.3599853515625], 'AtVector': [2580.840087890625, 241.52000427246094, -1429.02001953125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'OpenBoxPos01', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        subchallnpc000[LambdaDomi].EventAIScheduleWarpToAnchor({'AnchorType': 8, 'InstanceName': 'DomiOpenBoxPos01', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        subchallnpc000[LambdaDomi].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000[LambdaDomi].EventTriggerBecomeSpeaker()
    } {
        subchallnpc000_twin[LambdaBri].EventAIScheduleWarpToAnchor({'AnchorType': 8, 'InstanceName': 'BriOpenBoxPos01', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        subchallnpc000_twin[LambdaBri].EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
        subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Dm_TBox_Field_Iron[TreasureDynamic].EventWarpToTargetPosAndRot({'YAngle': 47.56999969482422, 'IsWaitEnd': True, 'Position': [2580.0, 240.5, -1428.449951171875]})
        Dm_TBox_Field_Iron[TreasureDynamic].EventPlayAS({'IsWaitEnd': False, 'ASName': 'OpenWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': 'TreasureDynamic', 'ActorName': 'Dm_TBox_Field_Iron', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_twin[LambdaBri].EventPlayAS({'ASName': 'Act_LookDown', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Prepare2()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_BottleVisible', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_42', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': 'TreasureDynamic', 'ActorName': 'Dm_TBox_Field_Iron', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000[LambdaDomi].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'subchallnpc000_twin', 'InstanceName': 'LambdaBri', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000[LambdaDomi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin[LambdaBri].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'subchallnpc000', 'InstanceName': 'LambdaDomi', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_twin[LambdaBri].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLambda:Comment_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
