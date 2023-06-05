-------- EventFlow: PhotoSpot_Challenge_02 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWaitAlbumSelectPictureUIInput', 'EventCloseAlbumSelectPictureUI', 'EventWait', 'EventReplacePictureAsAlbumSelect', 'EventOpenAlbumSelectPictureUIFromChallengeTarget', 'EventChangeAlbumModeDetail', 'EventChangeAlbumModeList']
queries: ['EventQueryAlbumSelectPictureUIInput', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerMoveToAnchor', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerUnequip', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DeathWestHatago_002
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_StableHostelFrame_A_01[ForestHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DeathEastHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_LakeSideHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_FaronHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TamourHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TamourPlainHatago_004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_NorthHatelHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_RiverSideHatago003
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HutagoHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HyruleDepthHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_AttentionPoster_A_01
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch', 'EventQueryIsPouchContentForCooking']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_StableHostelFrame_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)]
entrypoint: Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)
actions: ['EventTriggerParticipateEvent', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget', 'EventTalk', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerTalk']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryAvoidDuplicationRandomChoice2']
params: None

Actor: Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter_000)]
entrypoint: Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter_000)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter_001)]
entrypoint: Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter_001)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: None

Actor: Npc_EventStarter[Ready(Npc_EventStarter)]
entrypoint: Ready(Npc_EventStarter)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerParticipateEvent', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget', 'EventTalk', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerTalk']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_EventStarter[Ready(Npc_EventStarter_001)]
entrypoint: Ready(Npc_EventStarter_001)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: None

Actor: Npc_EventStarter[After_Complete(Npc_EventStarter)]
entrypoint: After_Complete(Npc_EventStarter)
actions: ['EventTriggerParticipateEvent', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget', 'EventTalk', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerForceSetRecentTalkFlag', 'EventTriggerTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction', 'EventQueryAvoidDuplicationRandomChoice3']
params: None

Actor: Npc_EventStarter[TalkDirectly(Npc_EventStarter_000)]
entrypoint: TalkDirectly(Npc_EventStarter_000)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)]
entrypoint: TalkDirectly(Npc_EventStarter_001)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: None

Actor: Npc_EventStarter[Reward(Npc_EventStarter)]
entrypoint: Reward(Npc_EventStarter)
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventTriggerNPCChangePosture', 'EventNPCTurnToTarget', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerTalk']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

void Ready_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="ForestHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_02_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_02_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_02_IsAfter_Step02_Exp'}) {

                call After_Complete({'InstanceName': 'ForestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'ChallengeName': 'PhotoSpot_Challenge_02'})

            } else {

                call Reward({'InstanceName': 'ForestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'ChallengeName': 'PhotoSpot_Challenge_02'})

            }
        } else {

            call Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_02', 'InstanceName': 'ForestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathWestHatago_002")})

        }
    } else {

        call Ready({'ChallengeName': 'PhotoSpot_Challenge_02', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'InstanceName': 'ForestHatago'})

    }
}

void Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTriggerParticipateEvent()
    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_06', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsAlignAnchorPos': True, 'IsTurnToAnchorRot': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Event409:
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_01', 'Target': 5, 'PosOffset': [0.0, 1.2000000476837158, 0.0]})
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})

        call CameraSet_Enter()

        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'ChallengeName', 'IgnoreShowedTarget': False}) {
            Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_09', 'ChoiceLabel1': 9001, 'ChoiceLabel2': 9002, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                Event24:
                Npc_EventStarter[TalkDirectly(Npc_EventStarter_000)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_04', 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[TalkDirectly(Npc_EventStarter_000)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_07', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event54:
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
                GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'ChallengeName': 'ChallengeName', 'StepName': 'Step01', 'IsWaitEnd': True, 'WithFigureTarget': False})
                Event40:
                GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
                switch GameSystemActor.EventQueryAlbumSelectPictureUIInput() {
                  case 0:
                    GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'}) {
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_19', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_08', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_26', 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_14', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_08', 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                        GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': False})

                        call UmayadoCheck()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01', 'Value': False})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTriggerNPCChangePosture({'IsPlayCurrentAS': True, 'Posture': 0})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

                        fork {

                            fork {
                                Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_02', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
                                Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
                                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            } {
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'PhotoChallenge', 'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'InstanceName', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            }

                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.1899999976158142, 0.0, 4.869999885559082], 'AtVector': [0.03999999910593033, -0.07000000029802322, 0.9800000190734863], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TwnObj_StableHostelFrame_A_01', 'Actor1InstanceName': 'InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        } {
                            SoundSystemActor.EventStartSound({'IsWaitEnd': True, 'TimeoutFrame': 0, 'SLinkKey': 'DrawAndDecoratePicture'})
                        }

                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                        fork {
                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        } {
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'PhotoChallenge_Link_Look', 'KeepTalkWait': True, 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.5, 0.0], 'OffsetBase': 0})
                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        }

                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_04', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_07', 'IsAnimeDriven': True, 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_38', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

                        call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

                        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
                            Event403:
                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_40', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                                call Reward2()

                                Event476:
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 15}) {
                                  case 0:
                                    Event23:
                                    if GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
                                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_05', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_36', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': True})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Value': False, 'Index': -1})

                                    call StepChange_ToComplete()

                                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                                  case [1, 2]:
                                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_20', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {

                                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

                                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Value': True})
                                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                        if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {

                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Cook_I_05_ReadyMade_Bundle_A'})

                                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_2'})
                                            goto Event23
                                        } else {
                                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'})
                                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_25', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                            Event703:
                                            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': True})
                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                                            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_01', 'Value': False})

                                            call StepChange_ToStep02()

                                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                                        }
                                    } else {
                                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'})
                                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_27', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event703
                                    }
                                }
                            } else {
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_39', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event703
                            }
                        } else
                        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
                            goto Event403
                        } else
                        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
                            goto Event403
                        } else
                        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
                            goto Event403
                        } else
                        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
                            goto Event403
                        } else
                        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
                            goto Event403
                        } else {
                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_18', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                                call Reward1()

                                goto Event476
                            } else {
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_35', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event703
                            }
                        }
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'})
                        goto Event40
                    }
                  case 1:
                    GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    switch Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                        Event516:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1}) {
                            Event320:
                            GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                            goto Event40
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': True})
                            Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_06', 'ChoiceLabel1': 9004, 'ChoiceLabel2': 9005, 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event320
                        }
                      case 1:
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event516
                      case 2:
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event516
                    }
                  case 2:
                    GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
                    Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_11', 'ChoiceNumber': 2, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event54
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'}) {
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_15', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter[TalkDirectly(Npc_EventStarter_001)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_16', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01', 'Value': False})

                    call StepChange_ReadyToStep01_Special()

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else {
                Event14:
                Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_05', 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Owned_Large01_Horse'}) {
                    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Com_Photo_01_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': True, 'IsNotOpenIfSkipedMostRecent': False})
                }
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
                    Event48:

                    call StepChange_ReadyToStep01_Special()

                } else
                if !Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event48
            }
        } else {
            Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_03', 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event14
        }
    } else {
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventTriggerTalk({'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_06'})
        Npc_EventStarter[Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        goto Event409
    }
}

void Ready() {
    Npc_EventStarter[Ready(Npc_EventStarter)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_EventStarter[Ready(Npc_EventStarter)].EventTriggerParticipateEvent()
    Npc_EventStarter[Ready(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
    Npc_EventStarter[Ready(Npc_EventStarter)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !Npc_EventStarter[Ready(Npc_EventStarter)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter[Ready(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsAlignAnchorPos': True, 'IsTurnToAnchorRot': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Event751:
        Npc_EventStarter[Ready(Npc_EventStarter)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_01', 'Target': 5, 'PosOffset': [0.0, 1.2000000476837158, 0.0]})
        Npc_EventStarter[Ready(Npc_EventStarter)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_EventStarter[Ready(Npc_EventStarter)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})

        call CameraSet_Enter()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk01', 'Index': -1}) {
            Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event586:
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_FaronHatago_001_Talk01'}) {
                    Event588:
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Com_Photo_01_01', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event15:
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_01', 'ChangeMstxtForActor': True, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event811:
                if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Owned_Large01_Horse'}) {
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Com_Photo_01_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'ChallengeName', 'IgnoreShowedTarget': False}) {
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_02', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9001, 'ChoiceLabel2': 9003, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        goto Event54
                    } else {
                        Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call StepChange_ReadyToStep01_Special()

                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
                    Event375:

                    call StepChange_ReadyToStep01()

                } else
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event375
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HyruleDepthHatago'})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago005_Talk01', 'Index': -1}) {
                goto Event588
            } else {
                goto Event15
            }
            goto Event811
        } else {
            Npc_EventStarter[Ready(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk01', 'Index': -1, 'Value': True})
            goto Event586
        }
    } else {
        Npc_EventStarter[Ready(Npc_EventStarter)].EventTriggerTalk({'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_01', 'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False, 'EndDialogOption': 2})
        Npc_EventStarter[Ready(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        goto Event751
    }
}

void After_Complete() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerParticipateEvent()
    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !Npc_EventStarter[After_Complete(Npc_EventStarter)].EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter[After_Complete(Npc_EventStarter)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_107', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            Event394:
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_01', 'Target': 5, 'PosOffset': [0.0, 1.2000000476837158, 0.0]})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})

            call CameraSet_Enter()

            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_01_Thank', 'Index': -1}) {
                    Event502:
                    if !Npc_EventStarter[After_Complete(Npc_EventStarter)].EventQueryIsOnRecentTalkFlag()
                    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk02', 'Index': -1}) {
                        Event490:
                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_12', 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_96', 'IsNotOpenIfSkipedMostRecent': False})
                            Event429:
                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
                            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
                            GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'StepName': 'Step01', 'IsWaitEnd': True, 'ChallengeName': 'ChallengeName', 'WithFigureTarget': False})
                            Event5:
                            GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
                            switch GameSystemActor.EventQueryAlbumSelectPictureUIInput() {
                              case 0:
                                GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_99', 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': False})

                                    call UmayadoCheck()

                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                                    fork {
                                        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_02', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
                                        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
                                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                    } {
                                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'PhotoChallenge', 'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'InstanceName', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                    }

                                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.1899999976158142, 0.0, 4.869999885559082], 'AtVector': [0.03999999910593033, -0.07000000029802322, 0.9800000190734863], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TwnObj_StableHostelFrame_A_01', 'Actor1InstanceName': 'InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_30', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': True})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Value': False, 'Index': -1})
                                } else {
                                    GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                                    goto Event5
                                }
                              case 1:
                                GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                switch Npc_EventStarter[After_Complete(Npc_EventStarter)].EventQueryAvoidDuplicationRandomChoice3() {
                                  case 0:
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                                    Event58:
                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1}) {
                                        Event2:
                                        GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                                        goto Event5
                                    } else {
                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': True})
                                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9004, 'ChoiceLabel2': 9005, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_06', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event2
                                    }
                                  case 1:
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event58
                                  case 2:
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event58
                                }
                              case 2:
                                GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
                                Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_95', 'ChoiceLabel1': 1, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event429
                                } else {
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_100', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': True})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Value': False, 'Index': -1})
                                }
                            }
                        } else {
                            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_108', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk02', 'Index': -1, 'Value': True})
                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerForceSetRecentTalkFlag({'value': True})
                        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_10', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event490
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_01_Thank', 'Index': -1, 'Value': True})
                    Event387:
                    Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_Thank', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event490
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_02_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_02_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_03_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_03_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_04_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_04_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_05_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_05_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_06_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_06_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_07_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_07_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_08_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_08_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_10_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_10_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_11_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_11_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_12_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_12_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_13_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_13_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_14_Thank', 'Index': -1}) {
                    goto Event502
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_14_Thank', 'Index': -1, 'Value': True})
                    goto Event387
                }
            }
        } else {
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerTalk({'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_107'})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            goto Event394
        }
    } else {
        Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTriggerForceSetRecentTalkFlag({'value': True})
        if !Npc_EventStarter[After_Complete(Npc_EventStarter)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_103', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            goto Event394
        } else {
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_103', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter[After_Complete(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            goto Event394
        }
    }
}

void CameraSet() {
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'ActorName', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'TwnObj_StableHostelFrame_A_01', 'PosVector': [4.480000019073486, 0.15000000596046448, 7.28000020980835], 'AtVector': [4.460000038146973, 0.10000000149011612, 7.510000228881836], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'Actor1InstanceName', 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor2ActorName': 'Player', 'MoveTime': 60})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'PhotoChallenge_Link_03', 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PhotoChallenge_Link_01', 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 3.0, 'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void TalkDirectly() {
    goto Event24
}

void UmayadoCheck() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        Event146:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'NewHyruleWestHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event146
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        Event163:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'ForestHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event163
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        Event162:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'NorthHatelHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event162
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        Event159:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'HyruleDepthHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event159
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        Event156:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'RiverSideHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event156
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        Event152:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'HutagoHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event152
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        Event161:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'TabantaBridgeHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event161
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        Event153:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'DeathMountainHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event153
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {
        Event154:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'GerudoHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_GerudoCanyonHatago001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event154
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        Event158:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'LakesideHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event158
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        Event160:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'HeightHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event160
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        Event157:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'EastHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event157
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        Event148:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'SouthHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event148
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
        Event155:
        GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'SnowfieldHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event155
    }
}

void CameraSet_Enter() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_HyruleWestHatago005', 'Actor1InstanceName': 'NewHyruleWestHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_DeathWestHatago_002', 'Actor1InstanceName': 'ForestHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_NorthHatelHatago006', 'Actor1InstanceName': 'NorthHatelHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_HyruleDepthHatago005', 'Actor1InstanceName': 'HyruleDepthHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {

        call CameraSet({'ActorName': 'Npc_RiverSideHatago003', 'Actor1InstanceName': 'RiverSideHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {

        call CameraSet({'ActorName': 'Npc_HutagoHatago_001', 'Actor1InstanceName': 'HutagoHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {

        call CameraSet({'ActorName': 'Npc_TabantaBridgeHatago006', 'Actor1InstanceName': 'TabantaBridgeHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {

        call CameraSet({'ActorName': 'Npc_DeathEastHatago_001', 'Actor1InstanceName': 'DeathMountainHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {

        call CameraSet({'ActorName': 'Npc_GerudoCanyonHatago001', 'Actor1InstanceName': 'GerudoHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {

        call CameraSet({'ActorName': 'Npc_LakeSideHatago004', 'Actor1InstanceName': 'LakesideHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {

        call CameraSet({'ActorName': 'Npc_FaronHatago_001', 'Actor1InstanceName': 'HeightHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_TamourHatago005', 'Actor1InstanceName': 'EastHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_TamourPlainHatago_004', 'Actor1InstanceName': 'SouthHatago'})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {

        call CameraSet({'ActorName': 'Npc_TabantaHatago004', 'Actor1InstanceName': 'SnowfieldHatago'})

    }
}

void Talk_Direclty_Maritta() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_01_IsAfter_Step01_Exp'}) {

        call Reward({'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'InstanceName': 'NewHyruleWestHatago', 'ChallengeName': 'PhotoSpot_Challenge_01'})

    } else {

        call TalkDirectly({'InstanceName': 'NewHyruleWestHatago', 'ChallengeName': 'PhotoSpot_Challenge_01', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleWestHatago005")})

    }
}

void Talk_Direclty_Forest() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_02_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'ForestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'ChallengeName': 'PhotoSpot_Challenge_02'})

    } else {

        call TalkDirectly({'InstanceName': 'ForestHatago', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'ChallengeName': 'PhotoSpot_Challenge_02'})

    }
}

void Talk_Direclty_NorthHatel() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_03_IsAfter_Step01_Exp'}) {

        call Reward({'Npc_EventStarter': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'InstanceName': 'NorthHatelHatago', 'ChallengeName': 'PhotoSpot_Challenge_03'})

    } else {

        call TalkDirectly({'InstanceName': 'NorthHatelHatago', 'ChallengeName': 'PhotoSpot_Challenge_03', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_NorthHatelHatago006")})

    }
}

void Talk_Direclty_HyruleDepth() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'HyruleDepthHatago', 'ChallengeName': 'PhotoSpot_Challenge_04', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

    } else {

        call TalkDirectly({'InstanceName': 'HyruleDepthHatago', 'ChallengeName': 'PhotoSpot_Challenge_04', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

    }
}

void Talk_Direclty_RiverSide() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_05_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'RiverSideHatago', 'ChallengeName': 'PhotoSpot_Challenge_05', 'Npc_EventStarter': ActorIdentifier(name="Npc_RiverSideHatago003")})

    } else {

        call TalkDirectly({'InstanceName': 'RiverSideHatago', 'ChallengeName': 'PhotoSpot_Challenge_05', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_RiverSideHatago003"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_RiverSideHatago003")})

    }
}

void Talk_Direclty_Hutago() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_06_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'HutagoHatago', 'ChallengeName': 'PhotoSpot_Challenge_06', 'Npc_EventStarter': ActorIdentifier(name="Npc_HutagoHatago_001")})

    } else {

        call TalkDirectly({'InstanceName': 'HutagoHatago', 'ChallengeName': 'PhotoSpot_Challenge_06', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HutagoHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HutagoHatago_001")})

    }
}

void Talk_Direclty_Tabanta() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_07_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'TabantaBridgeHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_07'})

    } else {

        call TalkDirectly({'InstanceName': 'TabantaBridgeHatago', 'ChallengeName': 'PhotoSpot_Challenge_07', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaBridgeHatago006")})

    }
}

void Talk_Direclty_DeathMountain() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_08_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'DeathMountainHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'ChallengeName': 'PhotoSpot_Challenge_08'})

    } else {

        call TalkDirectly({'InstanceName': 'DeathMountainHatago', 'ChallengeName': 'PhotoSpot_Challenge_08', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathEastHatago_001")})

    }
}

void Talk_Direclty_LakeSide() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_10_IsAfter_Step01_Exp'}) {

        call Reward({'ChallengeName': 'PhotoSpot_Challenge_10', 'InstanceName': 'LakesideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_LakeSideHatago004")})

    } else {

        call TalkDirectly({'InstanceName': 'LakesideHatago', 'ChallengeName': 'PhotoSpot_Challenge_10', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_LakeSideHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_LakeSideHatago004")})

    }
}

void Talk_Direclty_Height() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsAfter_Step01_Exp'}) {

        call Reward({'ChallengeName': 'PhotoSpot_Challenge_11', 'InstanceName': 'HeightHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_FaronHatago_001")})

    } else {

        call TalkDirectly({'InstanceName': 'HeightHatago', 'ChallengeName': 'PhotoSpot_Challenge_11', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_FaronHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_FaronHatago_001")})

    }
}

void Talk_Direclty_East() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_12_IsAfter_Step01_Exp'}) {

        call Reward({'InstanceName': 'EastHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_12'})

    } else {

        call TalkDirectly({'InstanceName': 'EastHatago', 'ChallengeName': 'PhotoSpot_Challenge_12', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TamourHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourHatago005")})

    }
}

void Talk_Direclty_South() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_13_IsAfter_Step01_Exp'}) {

        call Reward({'ChallengeName': 'PhotoSpot_Challenge_13', 'InstanceName': 'SouthHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourPlainHatago_004")})

    } else {

        call TalkDirectly({'InstanceName': 'SouthHatago', 'ChallengeName': 'PhotoSpot_Challenge_13', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourPlainHatago_004")})

    }
}

void Talk_Direclty_Snowfield() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_14_IsAfter_Step01_Exp'}) {

        call Reward({'ChallengeName': 'PhotoSpot_Challenge_14', 'InstanceName': 'SnowfieldHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaHatago004")})

    } else {

        call TalkDirectly({'InstanceName': 'SnowfieldHatago', 'ChallengeName': 'PhotoSpot_Challenge_14', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TabantaHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaHatago004")})

    }
}

void StepChange_ReadyToStep01() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_01', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_03', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_04', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_05', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_06', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_07', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_08', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_10', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_11', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_12', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_13', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_14', 'IsWaitEnd': True})
    }
}

void StepChange_ReadyToStep01_Special() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_01_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_01', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_02_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_02', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_03_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_03', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_04', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_05_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_05', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_06_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_06', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_07_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_07', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_08_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_08', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_10_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_10', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_11', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_12_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_12', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_13_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_13', 'IsWaitEnd': True})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_14_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_14', 'IsWaitEnd': True})
    }
}

void StepChange_ToComplete() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        Event348:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_01', 'StepName': 'Complete', 'IsWaitEnd': True})
        Event223:
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event348
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        Event352:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_02', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event352
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        Event353:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_03', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event353
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        Event354:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_04', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event354
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        Event355:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_05', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event355
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        Event356:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_06', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event356
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        Event357:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_07', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event357
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        Event358:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_08', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event358
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {
        Event351:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_GerudoCanyonHatago001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event351
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        Event350:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_10', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event350
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        Event360:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_11', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event360
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        Event349:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_12', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event349
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        Event359:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_13', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event359
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
        Event361:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_14', 'StepName': 'Complete', 'IsWaitEnd': True})
        goto Event223
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event361
    }
}

void NotReady() {
    FldObj_AttentionPoster_A_01.EventTriggerBecomeSpeaker()
    TwnObj_StableHostelFrame_A_01.EventTriggerParticipateEvent()

    fork {

        call InitTalk.InitTalkBookExceptCameraOnEvent({'Arg_Greeting': 3, 'Self': ActorIdentifier(name="FldObj_AttentionPoster_A_01")})

    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    }

    Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'Direction': 0.0, 'InstanceName': ''})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
}

void Reward1() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        Event687:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_01', 'Index': -1}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_Mushroom_K'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_01', 'Index': -1, 'Value': True})
                Event473:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 1})
            } else {
                Event472:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_01'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event687
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        Event732:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_02'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Material_03', 'MaterialActorName2': 'Item_PlantGet_M', 'MaterialActorName3': 'Item_Material_02'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_02', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event732
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        Event733:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_04'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_04', 'MaterialActorName2': 'Item_Material_06', 'MaterialActorName3': 'Item_Material_01', 'MaterialActorName4': 'Item_Material_07'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_04', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event733
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        Event734:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_05'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_InsectGet_Z', 'MaterialActorName2': 'Item_Material_02'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_05', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event734
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        Event735:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_06'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Material_07', 'MaterialActorName2': 'Item_Material_01', 'MaterialActorName4': 'Item_Material_06', 'MaterialActorName5': 'Item_Fruit_A', 'MaterialActorName3': 'Item_Fruit_E'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_06', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event735
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        Event737:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_10'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_FishGet_G', 'MaterialActorName3': 'Item_InsectGet_O'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_10', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event737
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        Event738:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_11'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Material_07', 'MaterialActorName2': 'Item_Material_01', 'MaterialActorName3': 'BeeHome', 'MaterialActorName4': 'Item_Material_04', 'MaterialActorName5': 'Item_Material_05'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_11', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event738
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        Event739:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_12'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Material_03', 'MaterialActorName2': 'Item_Meat_01', 'MaterialActorName3': 'Item_Ore_H'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_12', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event739
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        Event740:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_13'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName2': 'Item_Material_06', 'MaterialActorName1': 'Item_Meat_02', 'MaterialActorName3': 'Item_Material_07', 'MaterialActorName4': 'Item_Material_05'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_13', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event740
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
        Event741:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_14'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Material_07', 'MaterialActorName2': 'Item_Material_06', 'MaterialActorName3': 'Item_Meat_01', 'MaterialActorName4': 'Item_Material_05', 'MaterialActorName5': 'Item_Fruit_I'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_14', 'Index': -1, 'Value': True})
                goto Event473
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event741
    }
}

void Reward2() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        Event745:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_03'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Enemy_106', 'MaterialActorName2': 'Animal_Insect_I'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_03', 'Index': -1, 'Value': True})
                Event686:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 1})
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event745
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        Event649:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_07'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Animal_Insect_S', 'MaterialActorName2': 'Item_Enemy_77'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_07', 'Index': -1, 'Value': True})
                goto Event686
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event649
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        Event648:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_Reward_08'}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Enemy_77', 'MaterialActorName1': 'Animal_Insect_X'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_08', 'Index': -1, 'Value': True})
                goto Event686
            } else {
                goto Event472
            }
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event648
    }
}

void StepChange_ToStep02() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NewHyruleWestHatago', 'ActorName': 'EventRequestActor'}) {
        Event364:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_01', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event364
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'ForestHatago', 'ActorName': 'EventRequestActor'}) {
        Event368:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_02', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event368
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
        Event369:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_03', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event369
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'HyruleDepthHatago', 'ActorName': 'EventRequestActor'}) {
        Event370:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_04', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event370
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'RiverSideHatago'}) {
        Event371:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_05', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event371
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HutagoHatago'}) {
        Event372:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_06', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event372
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
        Event373:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_07', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event373
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
        Event374:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_08', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event374
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'GerudoHatago'}) {
        Event367:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_GerudoCanyonHatago001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event367
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'LakesideHatago'}) {
        Event366:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_10', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event366
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'HeightHatago'}) {
        Event619:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_11', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event619
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'EastHatago', 'ActorName': 'EventRequestActor'}) {
        Event365:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_12', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event365
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SouthHatago', 'ActorName': 'EventRequestActor'}) {
        Event618:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_13', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event618
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'SnowfieldHatago', 'ActorName': 'EventRequestActor'}) {
        Event620:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_14', 'StepName': 'Step02', 'IsWaitEnd': True})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        goto Event620
    }
}

void Reward() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_EventStarter[Reward(Npc_EventStarter)].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Index': -1}) {
        Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_32', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
        Event668:
        Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'}) {
            Event702:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Index': -1}) {
                Event713:
                if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Cook_I_05_ReadyMade_Bundle_A'})

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_2'})
                    Event746:
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_37', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_36', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_01', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Value': False, 'Index': -1})

                    call StepChange_ToComplete()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'})
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_25', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Event655:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_01', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Value': False, 'Index': -1})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Value': True})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event713
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_27', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event655
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'}) {
            goto Event702
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': 'NorthHatelHatago', 'ActorName': 'EventRequestActor'}) {
            Event716:

            call Reward2()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetReward1_01', 'Index': -1}) {
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_39', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event655
            } else {
                Event708:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 15}) {
                  case 0:
                    goto Event746
                  case [1, 2]:
                    Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_20', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event702
                }
            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
            goto Event716
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'TabantaBridgeHatago'}) {
            goto Event716
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
            goto Event716
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor', 'InstanceName': 'DeathMountainHatago'}) {
            goto Event716
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
            goto Event716
        } else {

            call Reward1()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetReward1_01', 'Index': -1}) {
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_35', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event655
            } else {
                goto Event708
            }
        }
    } else {
        Npc_EventStarter[Reward(Npc_EventStarter)].EventTriggerNPCChangePosture({'Posture': 0, 'IsWaitEnd': True, 'IsPlayCurrentAS': False})
        Npc_EventStarter[Reward(Npc_EventStarter)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !Npc_EventStarter[Reward(Npc_EventStarter)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
            Npc_EventStarter[Reward(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_32', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter[Reward(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            Event55:
            Npc_EventStarter[Reward(Npc_EventStarter)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_01', 'Target': 5, 'PosOffset': [0.0, 1.2000000476837158, 0.0]})
            Npc_EventStarter[Reward(Npc_EventStarter)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_EventStarter[Reward(Npc_EventStarter)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})

            call CameraSet_Enter()

            goto Event668
        } else {
            Npc_EventStarter[Reward(Npc_EventStarter)].EventTriggerTalk({'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_32'})
            Npc_EventStarter[Reward(Npc_EventStarter)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'PhotoChallenge_Master', 'ASName': '', 'IsWaitEnd': True, 'DesiredGear': 3, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
            goto Event55
        }
    }
}
