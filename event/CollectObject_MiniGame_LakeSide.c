-------- EventFlow: CollectObject_MiniGame_LakeSide --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerUnshowTimerUI', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerRollbackChallengeStep', 'EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerStop', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventShowFinish', 'EventExecuteProgressChallengeStep', 'EventTriggerShortenCreateRadiusExceptMiasmaSwarm']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventWaitStableNumDisplay']
queries: ['EventQueryTalkChoice2', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerAddOrSubGameDataFloat', 'EventTriggerSetGameDataFloat']
queries: ['EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataEnum', 'EventQueryCompareGameDataFloat']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventGoOffstageForUser', 'EventPlayerTalk', 'EventPlayerUnequip', 'EventTriggerPlayerRequestFallLiftActor', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Animal_Horse_B[Horse_NotPlayingMiniGame]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain041[LakeSide]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToObjectGreeting', 'EventDisableRecentTalkFlag', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: ['EventQueryOwningObjectPlayerInterference', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09]
entrypoint: None()
actions: ['EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerDeleteThisDoll', 'EventTriggerWarpToNearAnchor']
queries: ['EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventGoOffstageCouplerWithCombinedActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame]
entrypoint: None()
actions: ['EventTriggerSetVelToBlowingAway', 'EventTriggerSetHitObject', 'EventTriggerSpecialPowerReceiverSetIgnoreAllSpecialPower']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: Harness_Coupler[Coupler_ForCollectObject]
entrypoint: None()
actions: ['EventTriggerSetVelToBlowingAway']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void LupeePay() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
    } else {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_2', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_HighMountain041[LakeSide].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_HighMountain041[LakeSide].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

        call CollectObject_MiniGame.RecreateAllWagonDolls()

        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void MiniGame_CollectObject_LakeSide_PlayerOutOfArea() {

    call CollectObject_MiniGame.PoseCheck()


    call CollectObject_MiniGame.PauseGoods()

    Npc_HighMountain041[LakeSide].EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 1, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    if Player.EventQueryCheckPlayerState({'State': 29}) {
        Player.EventTriggerPlayerRequestFallLiftActor()
    }
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_InFrontOfSecondActivity', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call WarpDollsIfNotPlayableArea_LakeSide()


    call Camera_Action2_Talk()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk31', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Event40:
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_3', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk19', 'IsNotOpenIfSkipedMostRecent': False})

            call CollectObject_MiniGame.SoundStopMingameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call CollectObject_MiniGame.ResetGimmickSet()

            Npc_HighMountain041[LakeSide].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_HighMountain041[LakeSide].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_1', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

            call NpcTurnToHorse()

            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Ready', 'ChallengeName': 'CollectObject_MiniGame_LakeSide', 'IsWaitEnd': True})
        } else {
            Event42:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_1', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        goto Event42
    }
}

void MiniGame_CollectObject_LakeSide_OwningObjectInterferedByPlayer() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsScattered', 'Index': -1}) {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch Npc_HighMountain041[LakeSide].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 7]:
        Event230:

        call Common.AirStartUP_Player()

        Event312:
        Npc_HighMountain041[LakeSide].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk52', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call CollectObject_MiniGame.ResetGimmickSet()

        Npc_HighMountain041[LakeSide].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_HighMountain041[LakeSide].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})

        call Camera_Action1_Talk()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk53', 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        Npc_HighMountain041[LakeSide].EventDisableRecentTalkFlag({'IsWaitEnd': True})
      case 5:

        call Common.CancelLiftByOwned()

        goto Event312
      case [6, 8, 9]:

        call MiniGame_CollectObject_LakeSide_Burn()

    }
}

void BlowingAway() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsScattered', 'Value': True, 'Index': -1})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk02', 'ASName': 'TalkSurprised', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Animal_Horse_B', 'Actor1InstanceName': 'Horse_NotPlayingMiniGame', 'PosVector': [-5.699999809265137, 0.7799999713897705, 4.110000133514404], 'AtVector': [-2.4000000953674316, 1.5800000429153442, 1.600000023841858], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'AttackBack'})
            Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

            call ParticipateEventAndBlowingAway()

        }

    } {
        if Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventTriggerPlayerGetOff()
        }
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        LastRiddenAnimal_ForEvent.EventGoOffstageCouplerWithCombinedActor({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsVisibleHorse': True})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void CleanUpByNpc() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[LakeSide].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_HighMountain041[LakeSide].EventPlayAS({'ASName': 'Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

    call CollectObject_MiniGame.RecreateAllWagonDolls()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_1', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

    call NpcTurnToHorse()

}

void MiniGame_CollectObject_LakeSide_OwningObjectMoved() {
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Ready', 'GameDataName': 'Step_CollectObject_MiniGame_LakeSide'}) {
        goto Event230
    }
}

void Ready_Npc_MiniGame_CollectObject_LakeSide_Near() {
    if !Npc_HighMountain041[LakeSide].EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_3'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_1', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MiniGame_CollectObject_LakeSide_Talk() {
    if Player.EventQueryCheckPlayerState({'State': 26}) {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

    if !Npc_HighMountain041[LakeSide].EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk023', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        Event163:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk018', 'IsNotOpenIfSkipedMostRecent': False})
            Event172:
            if !Npc_HighMountain041[LakeSide].EventQueryIsOnRecentTalkFlag() {
                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk022', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk021', 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {

                call BlowingAway()

                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObjject_MiniGame_IsWokeUpTwice', 'Index': -1}) {
                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_3_1', 'IsNotOpenIfSkipedMostRecent': False})
                    Event159:
                    EventCamera.EventTriggerCameraSavePoint()

                    call Camera_OverlookSctteredDools()

                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk04_0_1', 'IsNotOpenIfSkipedMostRecent': False})
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1, 4, 5, 8]:
                        Event290:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedFirstTake'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedSecondTake'}) {
                                    Event127:
                                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_4', 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_5', 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_6', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
                                Event53:
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call LupeePay()

                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                                        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_02', 'IsNotOpenIfSkipedMostRecent': False})
                                    } else {
                                        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_00', 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                    call CollectObject_MiniGame.SoundStopInGameBgm()

                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                    Npc_HighMountain041[LakeSide].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

                                    call Camera_BeforePlaying()


                                    call WarpDollsIfNotPlayableArea_LakeSide()

                                    ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': True})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                                    call MiniGameStart()

                                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'CollectObject_MiniGame_LakeSide', 'IsWaitEnd': True})
                                } else {
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_1', 'IsNotOpenIfSkipedMostRecent': False})

                                    call CleanUpByNpc()

                                }
                            } else {
                                goto Event127
                            }
                        } else {
                            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk05_1', 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_0', 'IsNotOpenIfSkipedMostRecent': False})

                                call Camera_LookWagon()

                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_1', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain041', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'LakeSide'})
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_2', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_0', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_1', 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_2', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event53
                            } else {
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk19', 'IsNotOpenIfSkipedMostRecent': False})

                                call CleanUpByNpc()

                            }
                        }
                      case [2, 3, 6, 7]:
                        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk04_1', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event290
                    }
                } else
                if !Npc_HighMountain041[LakeSide].EventQueryIsOnRecentTalkFlag() {
                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_1_1', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'CollectObjject_MiniGame_IsWokeUpTwice'})
                    goto Event159
                } else {
                    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_0_1', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event159
                }
            } else {
                Npc_HighMountain041[LakeSide].EventDisableRecentTalkFlag({'IsWaitEnd': True})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
          case [2, 3, 4]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk019', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event172
          case [5, 6, 7]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk020', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event172
        }
    } else {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk010', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk012', 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk013', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event162:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk015', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event163
          case [2, 3, 4]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk016', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event162
          case [5, 6, 7]:
            Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk017', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event162
        }
    }
}

void Playing_Npc_MiniGame_CollectObject_LakeSide_EachFrame() {
    Event256:
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Playing', 'GameDataName': 'Step_CollectObject_MiniGame_LakeSide', 'Index': -1}) {
        AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSetHitObject()
        AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSpecialPowerReceiverSetIgnoreAllSpecialPower()

        call CollectObject_MiniGame.DeleteGerudoDollBond()

        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            Event140:
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'SrcGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'TimeOver', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'CollectObject_MiniGame_LakeSide'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.IsPlayerUltraHandGrabbing', 'Index': -1}) {
            Event204:
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event256
        } else
        if !Player.EventQueryCheckPlayerState({'State': 29}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'Operator': 4, 'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum'}) {
                GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'CollectObject_MiniGame_FrameCountForClear', 'Value': 0.0, 'Index': -1})
                goto Event204
            } else
            if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 4, 'GameDataB': 'CollectObject_MiniGame_ConstFrameCountValueForClear', 'GameDataA': 'CollectObject_MiniGame_FrameCountForClear'}) {
                GameDataActor.EventTriggerAddOrSubGameDataFloat({'Value': 1.0, 'GameDataName': 'CollectObject_MiniGame_FrameCountForClear', 'Index': -1})
                if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventQueryIsStableWithoutBond()
                && !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventQueryIsStableWithoutBond()
                && !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'CollectObject_MiniGame_FrameCountForClear', 'Operator': 2, 'GameDataB': 'CollectObject_MiniGame_ConstFrameCountValueForClearMin'}) {
                    Event107:

                    call CollectObject_MiniGame.PauseGoods()

                    goto Event140
                } else {
                    goto Event204
                }
            } else {
                goto Event107
            }
        } else {
            goto Event204
        }
    }
}

void Playing_Npc_MiniGame_CollectObject_LakeSide_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_0', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event40
}

void TimeOver_Npc_MiniGame_CollectObject_LakeSide_StepStart() {
    if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {

        call CollectObject_MiniGame.WaitStableIfTimeOver()

    }

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataA': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum'}) {

        call CollectObject_MiniGame.SoundStopMingameBgm_Finished()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
        Event37:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'CollectObject_MiniGame_FrameCountForClear', 'Value': 0.0, 'Index': -1})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_HighMountain041[LakeSide].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call Camera_AfterPlaying()

        ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MiniGameFinish()

    } else {

        call CollectObject_MiniGame.SoundStopMingameBgmWithFue()

        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk10', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event37
    }
}

void ParticipateEventAndBlowingAway() {
    AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSetVelToBlowingAway({'AddVelocity': [0.0, 7.0, 0.0]})
    Harness_Coupler[Coupler_ForCollectObject].EventTriggerSetVelToBlowingAway({'AddVelocity': [0.0, 7.0, 0.0]})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway00_LakeSide'})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway01_LakeSide'})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway02_LakeSide'})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway03_LakeSide'})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway04_LakeSide'})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway05_LakeSide'})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway06_LakeSide'})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway07_LakeSide'})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway08_LakeSide'})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerSetDestinationAnchorToBlowingAway({'Angle': 80.0, 'BasicParamNameOfAnchor': 'DollForBlowAway09_LakeSide'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerDeleteThisDoll()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerDeleteThisDoll()
}

void MiniGame_CollectObject_LakeSide_Burn() {
    Event348:

    call CollectObject_MiniGame.PoseCheck()


    call CollectObject_MiniGame.PauseGoods()

    Npc_HighMountain041[LakeSide].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_CollectObject_MiniGame_LakeSide'}) {

        call CollectObject_MiniGame.SoundStopMingameBgmWithFue()

    } else {

        call CollectObject_MiniGame.SoundStopInGameBgm()

    }
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk52', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CollectObject_MiniGame.ResetGimmickSetAndUnshowMiniGameUI()

    ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
    Npc_HighMountain041[LakeSide].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Camera_Action1_Talk()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk53', 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_CollectObject_MiniGame_LakeSide'}) {
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk57', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

    call NpcTurnToHorse()

    if GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_CollectObject_MiniGame_LakeSide'}) {
        Npc_HighMountain041[LakeSide].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    }
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'CollectObject_MiniGame_LakeSide', 'StepName': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Camera_LookWagon() {
    Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'Actor1ActorName': 'Npc_HighMountain041', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [1049.530029296875, 117.4000015258789, 1147.699951171875], 'AtVector': [1050.6199951171875, 117.06999969482422, 1144.969970703125], 'TargetFovy': 40.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor2ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
}

void Camera_OverlookSctteredDools() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [1052.7159423828125, 118.09380340576172, 1147.4110107421875], 'AtVector': [1058.9930419921875, 116.10710144042969, 1147.31494140625], 'CameraCollisionMode': 0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Playing_Npc_HighMountain041_LakeSide_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_2', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void NpcTurnToHorse() {
    Npc_HighMountain041[LakeSide].EventNPCTurnToTarget({'ActorName': 'Animal_Horse_B', 'InstanceName': 'Horse_NotPlayingMiniGame', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [1053.18896484375, 115.0531997680664, 1145.02001953125], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void MiniGame_CollectObject_LakeSide_DollsOutOfArea() {
    goto Event348
}

void Camera_Action1_Talk() {
    EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_HighMountain041', 'Actor1InstanceName': 'LakeSide', 'PosVector': [3.049999952316284, 2.1600000858306885, 4.880000114440918], 'AtVector': [0.0, 1.2200000286102295, 1.440000057220459], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_Action2_Talk() {
    EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_HighMountain041', 'Actor1InstanceName': 'LakeSide', 'PosVector': [2.8399999141693115, 2.1500000953674316, -2.1600000858306885], 'AtVector': [-0.11999999731779099, 1.2799999713897705, 1.5800000429153442], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_BeforePlaying() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.11999999731779099, 2.809999942779541, -4.75], 'AtVector': [0.05999999865889549, 1.7999999523162842, -0.27000001072883606], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_AfterPlaying() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-2.759999990463257, 1.2000000476837158, -1.440000057220459], 'AtVector': [0.8299999833106995, 0.8999999761581421, 1.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void MiniGameStart() {
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_2_0', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_2_1', 'IsNotOpenIfSkipedMostRecent': False})

    call Common.EventTriggerShowReadyGoWithCountIn()


    call CollectObject_MiniGame.SoundStartMingameBgm()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedFirstTake'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 4500})
    } else {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 5400})
    }
    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 6})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void MiniGameFinish() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum', 'Operator': 3, 'GameDataA': 'CollectObject_MiniGame_CurrentScore_SunaDoll'}) {
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'SrcGameDataName': 'CollectObject_MiniGame_MaxGoodsNum'})
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_1', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedFirstTake'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedSecondTake'}) {
                Event214:
                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk12', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

                Event222:
                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

                call CollectObject_MiniGame.RecreateAllWagonDolls()


                call NpcTurnToHorse()

                if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Value': True, 'Index': -1})
                }
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Ready', 'ChallengeName': 'CollectObject_MiniGame_LakeSide', 'IsIgnoreChallengeProgressUI': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                GameSystemActor.EventTriggerRequestAutoSave()
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedSecondTake'})
                Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_3', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event214
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'CollectObject_MiniGame_LakeSide_IsFinishedFirstTake'})
            goto Event214
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'Value': 4}) {
      case [0, 1]:
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_2', 'IsNotOpenIfSkipedMostRecent': False})
        Event215:
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk13', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event222
      case 2:
        Npc_HighMountain041[LakeSide].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_0', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

        goto Event215
    }
}

void WarpDollsIfNotPlayableArea_LakeSide() {
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway00_LakeSide'})
    }
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway01_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway02_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway03_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway04_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway05_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway06_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway07_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway08_LakeSide'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway09_LakeSide'})
    }
}
