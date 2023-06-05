-------- EventFlow: FirstskyislandReturns --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_20
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventResetGimmick', 'EventWait', 'EventCloseMessageDialog', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundStartSound', 'EventStartBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundLocator_SkyBell
entrypoint: None()
actions: ['EventSkyBellCalled', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void InitGame() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'FirstSkyIslandReturns_StartPos', 'IsWaitEnd': True, 'UseDemoWait': True})
    Npc_EventStarter.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstskyislandReturns_IsAfter_BeforeGame_Exp'}) {

        fork {

            call OnStartCamera()

        } {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 1, 'InstanceName': '', 'ActorName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': False, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

    } else {

        fork {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': False, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

    }

    call InitGameFlags()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FirstSkyIslandReturns_OnDisplayHiddenIsland'})

    call ChangeTimeAt7()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FirstSkyIslandReturns_InGame'})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SkyBell', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_FirstskyislandReturns_Island_Up', 'IsIgnoreDucking': False})

    call Vibration()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundLocator_SkyBell.EventSkyBellCalled({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstskyislandReturns_IsAfter_BeforeGame_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0047', 'ChoiceNumber': 2, 'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0049', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraAtGameStart()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event99:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event99
        }
    } else {

        call LookBack()

        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0049', 'IsNotOpenIfSkipedMostRecent': False})

        call CameraAtGameStart()

        goto Event99
    }
}

void WarpToGolemPos() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    Event49:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'FirstSkyIslandReturns_PlayerPosInFrontOfGolem', 'UseDemoWait': True, 'NotChangeRot': False})
    Npc_Zonau_Golem_Servant_FirstIsland_20.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    call InitGameFlags()

    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_20', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_Zonau_Golem_Servant_FirstIsland_20.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void InitGameFlags() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FirstSkyIslandReturns_InGame'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FirstSkyIslandReturns_OnDisplayHiddenIsland', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FirstSkyIslandReturns_ActivateCandle1'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FirstSkyIslandReturns_ActivateCandle2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FirstSkyIslandReturns_ActivateCandle3'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void Completed_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0015', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventTriggerCameraSavePoint()

        fork {

            call LookAtFirstIslandFromFar()

        } {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }


        call ReturnCamera()

        Event79:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        goto Event79
    }
}

void Ready_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'MessageID': 'EventFlowMsg/FirstskyislandReturns:Near_0001', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0005', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'FirstskyislandReturns', 'StepName': 'BeforeGame', 'IsWaitEnd': True})
}

void ReturnReady_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FirstskyislandReturns:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void ReturnReady_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0046', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0039', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event51:
    Npc_EventStarter.EventTalk({'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0012', 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstskyislandReturns_IsAfter_BeforeGame_Exp'}) {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0050', 'IsNotOpenIfSkipedMostRecent': False})
            Event12:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'InGameWhenActiveTorchNumIs0', 'ChallengeName': 'FirstskyislandReturns', 'IsWaitEnd': True})

            call InitGame()

        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtFront()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0048', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event12
        }
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LookAt3Torches() {

    fork {

        fork {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': 'FirstSkyIslandReturns_CandlePos3', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0020', 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'EndRecelerateRate': 0.25, 'MoveTime': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'PosVector': [7.650000095367432, 5.659999847412109, -16.450000762939453], 'AtVector': [-57.400001525878906, -12.260000228881836, 89.12999725341797], 'TargetFovy': 40.779998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

        fork {
            Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'FirstSkyIslandReturns_CandlePos3'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'EndRecelerateRate': 0.25, 'MoveTime': 180, 'IsWaitEnd': True, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'PosVector': [-65.0999984741211, 0.5699999928474426, 77.43000030517578], 'AtVector': [-71.45999908447266, -1.9299999475479126, 90.05000305175781], 'TargetFovy': 40.779998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void ReturnCamera() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 2, 'CollisionInterpolateSkip': False, 'MoveFrame': 0, 'EnableCameraAlpha': False})
}

void LookAtFirstIslandFromFar() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_GolemPos', 'PosVector': [362.70001220703125, -66.68000030517578, 190.36000061035156], 'AtVector': [-4.820000171661377, -15.369999885559082, 43.04999923706055], 'TargetFovy': 42.779998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.30000001192092896, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_GolemPos', 'PosVector': [255.32000732421875, 58.0, -219.38999938964844], 'AtVector': [41.36000061035156, -58.20000076293945, 257.70001220703125], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 1560, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void ChangeTimeAt7() {

    fork {
        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 7, 'TimeMin': 0})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 2})
    } {
        GameSystemActor[Sound].EventWait({'Frames': 30, 'IsWaitEnd': True})
        SoundSystemActor.EventStartBgm({'BGMName': 'BGM_Camp', 'IsWaitEnd': True, 'TimeoutFrame': 0})
    }

    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void TimeOvered() {

    call Common.AirStartUP_Player()

    SoundLocator_SkyBell.EventSoundStartSound({'SLinkKey': 'SkyBell', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event59:

    call WarpToGolemPos()

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'FirstskyislandReturns', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'ReturnReady', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
}

void CourseOut() {

    call Common.AirStartUP_Player()

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event59
}

void InGame_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0022', 'ChoiceNumber': 3, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'ChoiceLabel3': 5, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0049', 'IsNotOpenIfSkipedMostRecent': False})

        call CameraAtGameStart()

        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call WarpToGolemPos()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'FirstskyislandReturns', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'ReturnReady', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LookAtShrineOfTimeFromFar() {

    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_GolemPos', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0042', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

        fork {
            Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_GolemPos'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'PosVector': [-9.9399995803833, 15.079999923706055, -72.37999725341797], 'AtVector': [-0.6299999952316284, 2.009999990463257, -7.110000133514404], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

    }

}

void Grounded() {

    call Common.AirStartUP_Player()

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event59
}

void Goal() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_20")})

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call WarpToGolemPosOnClear()

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    fork {

        call LookAtFirstIslandFromFar()

    } {
        Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    call ReturnCamera()

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_SubstituteCloth_04', 'IsSuccess': True})

    Npc_Zonau_Golem_Servant_FirstIsland_20.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'FirstskyislandReturns', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void BeforeGame_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FirstskyislandReturns:Near_0003', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void BeforeGame_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FirstSkyIslandReturns_HeardAboutGame', 'Index': -1}) {
        goto Event51
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0009', 'ChoiceLabel1': 20, 'ChoiceLabel2': 21, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0049', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FirstSkyIslandReturns_HeardAboutGame'})
            goto Event51
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FirstskyislandReturns:Talk_0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void LookAtFront() {

    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

        fork {
            Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 60, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'TargetFovy': 43.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 12.109999656677246, -4.989999771118164], 'AtVector': [0.0, 11.75, 12.770000457763672], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    }

}

void LookBack() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 60, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'PosVector': [2.9100000858306885, 1.659999966621399, -10.720000267028809], 'AtVector': [0.3799999952316284, 1.659999966621399, -6.059999942779541], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    }

}

void WarpToGolemPosOnClear() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    goto Event49
}

void CameraAtGameStart() {
    EventCamera.EventTriggerCameraSavePoint()

    call LookAt3Torches()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_GolemPos', 'PosVector': [-5.110000133514404, 18.350000381469727, 61.060001373291016], 'AtVector': [-4.519999980926514, 16.510000228881836, 66.06999969482422], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call LookAtShrineOfTimeFromFar()


    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_LookAtChangeView', 'PosVector': [3.559999942779541, 3.2699999809265137, -12.119999885559082], 'AtVector': [1.899999976158142, 2.819999933242798, -8.9399995803833], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void OnStartCamera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'FirstSkyIslandReturns_GolemPos', 'PosVector': [0.9900000095367432, 16.56999969482422, 63.22999954223633], 'AtVector': [0.23999999463558197, 16.510000228881836, 63.900001525878906], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Vibration() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call VibrationCommon.OnetimeMiddle()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call VibrationCommon.ContinuousMiddle()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call VibrationCommon.OnetimeLarge()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call VibrationCommon.ContinuousMiddle()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
}
