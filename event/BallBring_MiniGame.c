-------- EventFlow: BallBring_MiniGame --------

Actor: Npc_MiniGame_Golf
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventOpenRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor', 'EventResetGimmick', 'EventTriggerEnterGameSafetySection', 'EventTriggerLeaveGameSafetySection']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryHasRuppe', 'EventQueryTalkChoice4', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataFloat', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataFloat', 'EventQueryIsGameDataBool', 'EventQueryCompareGameDataFloat', 'EventQueryIsGameDataInt', 'EventQueryMiniGameBallBringDisappearReason', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemovePouchContentAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerProgressChallengeStep', 'EventTriggerResetMiniGameScore', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerUnshowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerRollbackChallengeStep', 'EventTriggerEnableShowFloatRecordUpdate', 'EventTriggerMiniGameFloatBestScoreSetting', 'EventExecuteRollbackChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerHorseGetOff', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerStopInAir', 'EventPlayerWait', 'EventPlayerTalk', 'EventPlayerClimbOff', 'EventTriggerPlayerRequestKeepLifting', 'EventTriggerPlayerRequestFallLiftActor', 'EventPlayerWarpToStarterLinkAnchor']
queries: ['EventQueryCheckPlayerState', 'EventQueryEquipWeaponAttachmentActor', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: WoodBall_Golf
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor', 'EventQuerySpecialPowerReceiverIsCombinedSelf']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_MiniGame_Golf_Near() {
    Npc_MiniGame_Golf.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/BallBring_MiniGame:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_MiniGame_Golf.EventQueryIsOnRecentTalkFlag() {
        Event9:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk03', 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

            call LupeePay()

        } else {
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {

        call Greeting()

        if !Npc_MiniGame_Golf.EventQueryHaveTalked() {
            goto Event9
        } else {
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event9
        }
    }
}

void Craft_Npc_MiniGame_Golf_Near() {
    Npc_MiniGame_Golf.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/BallBring_MiniGame:Near11', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Craft_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk11', 'ChoiceLabel2': 4, 'ChoiceLabel1': 3, 'ChoiceNumber': 4, 'ChoiceLabel3': 8, 'ChoiceLabel4': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event11:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Bring_Ready()

      case 1:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
          case [0, 1]:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event136:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel1': 3, 'ChoiceNumber': 4, 'ChoiceLabel3': 8, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event11
          case 2:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event136
        }
      case 2:
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        GameSystemActor.EventTriggerIncreaseRupee({'Value': 20})
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MiniGame_Golf.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_MiniGame_Golf.EventTriggerRequestLookAtTheFront()
        switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
          case [0, 1, 2, 3, 5, 6]:
            Event283:

            call BallCheckFlag()

            if WoodBall_Golf.EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'IsEnableFailDelete': False, 'BasePos': [-3115.593994140625, 24.890689849853516, -618.62451171875], 'IsEnableHitPlayer': True}) in [0, 1] {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                WoodBall_Golf.EventTriggerErasePauseMask()
                GameSystemActor.EventResetGimmick({'Option': 0, 'IsWaitEnd': True, 'IsResetCamera': False})
                ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'BallBring_MiniGame', 'IsIgnoreChallengeProgressUI': False})
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameSystemActor.EventTriggerLeaveGameSafetySection()
                GameSystemActor.EventTriggerRequestAutoSave()
            }
          case 4:
            PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
            goto Event283
        }
      case 3:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        WoodBall_Golf.EventTriggerErasePauseMask()
    }
}

void Playing_Npc_MiniGame_Golf_EachFrame() {
    Event523:
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_BallBring_MiniGame', 'Value': 'Playing', 'Index': -1}) {
        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_Craft_Exp'})
            && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_Playing_Exp'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'Value': True, 'GameDataName': 'BallBring_MiniGame_TimeOver'})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'TimeOver', 'ChallengeName': 'BallBring_MiniGame'})
            }
        } else {
            GameDataActor.EventTriggerCopyGameDataFloat({'DstGameDataIndex': -1, 'SrcGameDataIndex': -1, 'SrcGameDataName': 'BallBring_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_Float'})
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event523
        }
    }
}

void Playing_Npc_MiniGame_Golf_Near() {
    Npc_MiniGame_Golf.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/BallBring_MiniGame:Near21', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Playing_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk21', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 15, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk24', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call SoundStopMingameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call BreakGame()


            call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
              case [0, 1]:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_FirstTake'})
                Event255:
                GameSystemActor.EventTriggerRequestAutoSave()
                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'BallBring_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
              case 2:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_CourseB_FirstTake'})
                goto Event255
            }
        } else {
            Event42:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
            WoodBall_Golf.EventTriggerErasePauseMask()
        }
    } else {
        goto Event42
    }
}

void Bring_Ready() {

    call SoundStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DesignateMatrixActor', 'Radius': 0.5, 'Length': 2.0, 'AnchorInstanceName': 'BallBring_Sweeper_1st'}) {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'BallBring_Sweeper_2nd', 'Length': 2.0, 'Radius': 0.5}) {
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'UseDemoWait': True, 'Position': [-3115.826904296875, 24.139509201049805, -606.2852172851562]})
        } else {
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'UseDemoWait': True, 'Position': [-3116.074951171875, 24.47784996032715, -610.4873046875]})
        }
        Event73:
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.4300000071525574, 1.7999999523162842, -5.28000020980835], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'BallBring_MiniGame'})
        GameSystemActor.EventTriggerLeaveGameSafetySection()

        call BallCheckFlag()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BallBring_MiniGame_BallDisappear'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_BallCleanup', 'Value': False})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 250, 'GameDataName': 'BallBring_MiniGame_CourseA_ThresholdScore'})
        EventCamera.EventTriggerCameraSavePoint()
        Npc_MiniGame_Golf.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
          case [0, 1]:
            switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'Value': 0.0, 'GameDataName': 'BallBring_MiniGame_BestScore'}) {
              case [0, 1]:
                Event17:
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                ChallengeSystemActor.EventTriggerResetMiniGameScore()
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
                  case [0, 1]:
                    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 900})

                    call Common.EventTriggerShowReadyGoWithCountIn()

                    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                    call SoundStartMingameBgm()

                    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 3})
                    ChallengeSystemActor.EventTriggerEnableShowFloatRecordUpdate({'IsFinishedFirstTake': 'BallBring_MiniGame_FirstTake', 'FloatBestScore': 'BallBring_MiniGame_BestScore'})
                    WoodBall_Golf.EventTriggerErasePauseMask()
                  case 2:
                    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1800})

                    call Common.EventTriggerShowReadyGoWithCountIn()

                    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                    call SoundStartMingameBgm()

                    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 3})
                    ChallengeSystemActor.EventTriggerEnableShowFloatRecordUpdate({'FloatBestScore': 'BallBring_MiniGame_CourseB_BestScore', 'IsFinishedFirstTake': 'BallBring_MiniGame_CourseB_FirstTake'})
                    WoodBall_Golf.EventTriggerErasePauseMask()
                }
              case 2:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseA_Clear'}) {
                    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk208', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk208_01', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event17
            }
          case 2:
            switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'Value': 0.0, 'GameDataName': 'BallBring_MiniGame_CourseB_BestScore'}) {
              case [0, 1]:
                goto Event17
              case 2:
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk209', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event17
            }
        }
    } else {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3116.280029296875, 24.6287899017334, -612.4963989257812], 'UseDemoWait': True})
        goto Event73
    }
}

void TimeOver_Npc_MiniGame_Golf_StepStart() {

    call Quit_If_InvalidStep_TimeUp()


    call PoseCheck()

    Npc_MiniGame_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
      case [0, 1]:
        if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 2, 'GameDataA': 'BallBring_MiniGame_Score', 'GameDataB': 'BallBring_MiniGame_BestScore'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_FirstTake'}) {
            Event402:

            call SoundStopMingameBgm_Finished()

            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
            Event45:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()

            call BreakGame()


            call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


            call BestRecord()

        } else {
            Event404:

            call SoundStopMingameBgm_Finished()

            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            goto Event45
        }
      case 2:
        if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 2, 'GameDataA': 'BallBring_MiniGame_Score', 'GameDataB': 'BallBring_MiniGame_CourseB_BestScore'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseB_FirstTake'}) {
            goto Event402
        } else {
            goto Event404
        }
    }
}

void VanishBall() {

    call Quit_If_InvalidStep_VanishBall()


    call PoseCheck()

    Npc_MiniGame_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case 0:
        Event133:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk102', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event403:

        call SoundStopMingameBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MiniGame_Golf.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()

        call BreakGame_NoBall()


        call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

        switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
          case [0, 1, 2, 3, 4, 5]:
            Event501:

            call BestRecord()

          case 6:

            call BreakGame_OverCollision()

            goto Event501
        }
      case [1, 5]:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk103', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event403
      case 2:
        if !WoodBall_Golf.EventQuerySpecialPowerReceiverIsCombinedSelf() {
            WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        }
        goto Event133
      case 3:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk104', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event403
      case 4:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk105', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event403
      case 6:
        Npc_MiniGame_Golf.EventTalk({'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk110', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event403
    }
}

void Retry_Npc_MiniGame_Golf_Near() {
    Npc_MiniGame_Golf.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/BallBring_MiniGame:Near41', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Retry_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseA_Clear'}) {

        call Greeting()

        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk41', 'ChoiceNumber': 4, 'ChoiceLabel4': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event169:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0})
            Event173:
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

            call LupeePay()

          case 1:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 1})
            goto Event173
          case 2:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk42', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceLabel3': 4, 'ChoiceLabel4': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event169
          case 3:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {

        call Greeting()

        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk41', 'ChoiceLabel2': 4, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event95:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

            call LupeePay()

          case 1:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event95
          case 2:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void BestRecord() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 2, 'GameDataA': 'BallBring_MiniGame_Score', 'GameDataB': 'BallBring_MiniGame_BestScore'}) {
                GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'BallBring_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_Float'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                ChallengeSystemActor.EventTriggerMiniGameFloatBestScoreSetting({'FloatBestScore': 'BallBring_MiniGame_BestScore'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event108:
                switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 50.0}) {
                  case 0:
                    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event418:

                    call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseA_Clear'}) {
                        Event358:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 1, 'Index': -1}) {
                          case [0, 2]:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk207', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceLabel3': 4, 'ChoiceLabel4': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event231:
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:
                                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 0})
                                Event235:
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

                                call LupeePay_Retry()

                              case 1:
                                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseType', 'Value': 1})
                                goto Event235
                              case 2:
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk42', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceLabel3': 4, 'ChoiceLabel4': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event231
                              case 3:
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventTriggerRequestAutoSave()
                                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'BallBring_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                            }
                          case 1:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk207', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceLabel3': 4, 'ChoiceLabel4': 2, 'NotPlayLipSyncAnim': False, 'ChoiceDefaultNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event231
                        }
                    } else {
                        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk207', 'ChoiceLabel1': 14, 'ChoiceLabel3': 2, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event198:
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

                            call LupeePay_Retry()

                          case 1:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk42', 'ChoiceLabel1': 14, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event198
                          case 2:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventTriggerRequestAutoSave()
                            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'BallBring_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                        }
                    }
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 150.0}) {
                      case 0:
                        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk47', 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

                        goto Event418
                      case [1, 2]:
                        switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 250.0}) {
                          case 0:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

                            goto Event418
                          case [1, 2]:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})


                            call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseA_Clear'}) {
                                goto Event358
                            } else {
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk201', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BallBring_MiniGame_CourseA_Clear', 'Value': True, 'Index': -1})
                                goto Event358
                            }
                        }
                    }
                }
            } else {
                Event104:
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event108
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_FirstTake'})
            GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'BallBring_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_Float'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            ChallengeSystemActor.EventTriggerMiniGameFloatBestScoreSetting({'FloatBestScore': 'BallBring_MiniGame_BestScore'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event104
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_CourseB_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 2, 'GameDataA': 'BallBring_MiniGame_Score', 'GameDataB': 'BallBring_MiniGame_CourseB_BestScore'}) {
                GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'BallBring_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_Float'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                ChallengeSystemActor.EventTriggerMiniGameFloatBestScoreSetting({'FloatBestScore': 'BallBring_MiniGame_CourseB_BestScore'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event195:
                switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 300.0}) {
                  case 0:
                    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk204', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event420:

                    call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                    goto Event358
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 500.0}) {
                      case 0:
                        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk205', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

                        goto Event420
                      case [1, 2]:
                        switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 700.0}) {
                          case 0:
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk210', 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                            goto Event420
                          case [1, 2]:
                            switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BallBring_MiniGame_Score', 'Value': 850.0}) {
                              case 0:
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk206', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event271:
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

                                goto Event420
                              case [1, 2]:
                                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk211', 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_GetGold'}) {
                                    goto Event271
                                } else {
                                    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk212', 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BallBring_MiniGame_GetGold', 'Value': True, 'Index': -1})
                                    goto Event420
                                }
                            }
                        }
                    }
                }
            } else {
                Event205:
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event195
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_CourseB_FirstTake'})
            GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'BallBring_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_Float'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            ChallengeSystemActor.EventTriggerMiniGameFloatBestScoreSetting({'FloatBestScore': 'BallBring_MiniGame_CourseB_BestScore'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event205
        }
    }
}

void DistantBall() {

    call PoseCheck()

    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_BallDisappear'}) {
        Event386:
        switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
          case [0, 1, 2, 5, 6]:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk107', 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk108', 'IsNotOpenIfSkipedMostRecent': False})

            call SetAgain()

            WoodBall_Golf.EventTriggerErasePauseMask()

            call SetAgain_B()

          case 4:
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk109', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk101', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_OutArea', 'Value': False})
        WoodBall_Golf.EventTriggerErasePauseMask()
    }
}

void LupeePay_Retry() {
    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk06', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'GameDataName': 'BallBring_MiniGame_TimeOver', 'Value': False})
            Event227:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'BallBring_MiniGame', 'StepName': 'Craft'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
            GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'BallBring_MiniGame_Craft'})
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3116.280029296875, 24.6287899017334, -612.4963989257812], 'UseDemoWait': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.4300000071525574, 1.7999999523162842, -5.28000020980835], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

            call BallCheckFlag()

            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Event253:
            GameSystemActor.EventTriggerRequestAutoSave()
            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'BallBring_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    } else {
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        goto Event253
    }
}

void LupeePay() {
    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk06', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            goto Event227
        } else {
            Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event218:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event218
    }
}

void BreakGame() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case [0, 1, 2, 3, 5, 6]:
        Event535:

        call HorseCheck()

        Event89:

        call InitTalk.InitTalkOnEventWithAirPause({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_MiniGame_Golf")})

        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3126.514892578125, 24.384950637817383, -612.5198974609375], 'YAngle': -90.0, 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        if WoodBall_Golf.EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'IsEnableFailDelete': False, 'BasePos': [-3115.593994140625, 24.890689849853516, -618.62451171875], 'IsEnableHitPlayer': True}) in [0, 1] {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_MiniGame_Golf.EventTriggerErasePauseMask()
            WoodBall_Golf.EventTriggerErasePauseMask()
            GameSystemActor.EventResetGimmick({'Option': 0, 'IsWaitEnd': True, 'IsResetCamera': False})
            Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
            Npc_MiniGame_Golf.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [-3125.919921875, 26.040000915527344, -616.969970703125], 'AtVector': [-3128.110107421875, 25.969999313354492, -612.5800170898438], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            Npc_MiniGame_Golf.EventTriggerBecomeSpeaker()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_BallCleanup'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }
      case 4:
        PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
        goto Event535
    }
}

void Greeting() {
    if Npc_MiniGame_Golf.EventQueryIsOnRecentTalkFlag() {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_MiniGame_Golf.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk44', 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1, 8]:
                Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
              case [2, 3, 4, 5, 6, 7]:
                Npc_MiniGame_Golf.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk46', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [6, 7]:
            Npc_MiniGame_Golf.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk45', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Craft_VanishBall() {

    call Common.AirStartUP_Player()

    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case [0, 1, 2, 5, 6]:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk107', 'IsNotOpenIfSkipedMostRecent': False})
        Event281:

        call SetAgain()


        call SetAgain_B()

      case 3:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk108', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
      case 4:
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk109', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    }
}

void 2nd_DistantBall() {

    call PoseCheck()

    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_BallDisappear'}) {
        goto Event386
    } else {
        Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk106', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_2nd_OutArea', 'Value': False})
        Event355:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MiniGame_Golf.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        if WoodBall_Golf.EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'IsEnableFailDelete': False, 'BasePos': [-3115.593994140625, 24.890689849853516, -618.62451171875], 'IsEnableHitPlayer': True}) in [0, 1] {

            call Distant_BlackOut()

            WoodBall_Golf.EventTriggerErasePauseMask()

            call SetAgain_B()

        }
    }
}

void BallCheckFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_OutArea', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_2nd_OutArea'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_TouchArea', 'Value': False})
}

void DistantPlayer() {

    call Common.AirStartUP_Player()

    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_MiniGame_Golf.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk106_01', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event355
}

void OutOfArea() {

    call PoseCheck()

    Npc_MiniGame_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': True, 'IsCloth': False})
    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/OutOfNoEscapeArea:talk00', 'IsNotOpenIfSkipedMostRecent': False})

    call SoundStopMingameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case [0, 1, 2, 3, 5, 6]:
        Event497:
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                if Player.EventQueryCheckPlayerState({'State': 29}) {
                    Player.EventTriggerPlayerRequestFallLiftActor()
                }
                Event367:

                call OutOfArea_BreakGame()


                call BestRecord()

            } else {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                goto Event367
            }
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
            goto Event367
        }
      case 4:
        PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
        goto Event497
    }
}

void OutOfArea_Craft() {

    call PoseCheck()

    Npc_MiniGame_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': True, 'IsCloth': False})
    WoodBall_Golf.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/OutOfNoEscapeArea:talk00', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 29}) {
                Player.EventTriggerPlayerRequestFallLiftActor()
            }
            Event375:
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3116.280029296875, 24.6287899017334, -612.4963989257812], 'UseDemoWait': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            if WoodBall_Golf.EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'IsEnableFailDelete': False, 'BasePos': [-3115.593994140625, 24.890689849853516, -618.62451171875], 'IsEnableHitPlayer': True}) in [0, 1] {
                Npc_MiniGame_Golf.EventTriggerErasePauseMask()
                WoodBall_Golf.EventTriggerErasePauseMask()
                Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.4300000071525574, 1.7999999523162842, -5.28000020980835], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_BallForceDelete'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
                  case [0, 1, 2, 3, 5, 6]:
                    Event382:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_BallForceDelete', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BallBring_MiniGame_BallRespawn', 'Index': -1, 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BallBring_MiniGame_BallDisappear'})

                    call BallCheckFlag()

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                  case 4:
                    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
                    goto Event382
                }
            }
        } else {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            goto Event375
        }
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event375
    }
}

void SoundStartMingameBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_05'})
}

void SoundStopMingameBgm() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_05', 'IsUseSuspendFade': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
}

void SoundStopMingameBgm_Finished() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Minigame_05'})
}

void PoseCheck() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6})
        && !Player.EventQueryCheckPlayerState({'State': 3}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else
    if Player.EventQueryCheckPlayerState({'State': 29}) {
        Player.EventTriggerPlayerRequestKeepLifting()
    }
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Quit_If_InvalidStep_TimeUp() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_Retry_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_TimeOver_Exp'}) {
            Event521:

            call Common.AirStartUP_Player()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        goto Event521
    }
}

void Quit_If_InvalidStep_VanishBall() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_TimeOver'}) {
        Event510:

        call Common.AirStartUP_Player()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_Craft_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BallBring_MiniGame_IsAfter_Playing_Exp'}) {
            goto Event510
        }
    } else {
        goto Event510
    }
}

void BreakGame_NoBall() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case [0, 1, 2, 3, 5, 6]:
        if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'WoodBall_Golf', 'EquipmentSlot': 0}) {
            Event484:
            PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
            Event548:

            call HorseCheck()


            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_MiniGame_Golf")})

            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3126.514892578125, 24.384950637817383, -612.5198974609375], 'YAngle': -90.0, 'UseDemoWait': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            Npc_MiniGame_Golf.EventTriggerErasePauseMask()
            GameSystemActor.EventResetGimmick({'Option': 0, 'IsWaitEnd': True, 'IsResetCamera': False})
            Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
            Npc_MiniGame_Golf.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [-3125.919921875, 26.040000915527344, -616.969970703125], 'AtVector': [-3128.110107421875, 25.969999313354492, -612.5800170898438], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            Npc_MiniGame_Golf.EventTriggerBecomeSpeaker()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_BallCleanup'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else
        if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'WoodBall_Golf', 'EquipmentSlot': 4}) {
            goto Event484
        }
        goto Event548
      case 4:
        goto Event484
    }
}

void SetAgain() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_MiniGame_Golf.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Event311:

    call OnlyHorseCheck()

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3116.280029296875, 24.6287899017334, -612.4963989257812], 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void SetAgain_B() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.4300000071525574, 1.7999999523162842, -5.28000020980835], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BallBring_MiniGame_BallForceDelete'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    switch GameDataActor.EventQueryMiniGameBallBringDisappearReason({'GdDisappearReason': 'BallBring_MiniGame_BallDisappearReason'}) {
      case [0, 1, 2, 3, 5, 6]:
        Event293:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BallBring_MiniGame_BallForceDelete', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BallBring_MiniGame_BallRespawn', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BallBring_MiniGame_BallDisappear'})

        call BallCheckFlag()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case 4:
        PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'WoodBall_Golf'})
        goto Event293
    }
}

void Distant_BlackOut() {
    goto Event311
}

void BreakGame_OverCollision() {
    Npc_MiniGame_Golf.EventTalk({'MessageId': 'EventFlowMsg/BallBring_MiniGame:Talk111', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void HorseCheck() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        Event528:
        if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Event266:
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BallBring_Horse', 'UseDemoWait': True, 'NotChangeRot': False, 'IsWaitEnd': True})
            Event460:
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 1}) {
            goto Event266
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 5}) {
            goto Event266
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 4}) {
            goto Event460
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 12}) {
            goto Event460
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 10}) {
            goto Event460
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 3}) {
            goto Event460
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 13}) {
            goto Event460
        } else
        if Player.EventQueryCheckPlayerState({'State': 29}) {
            Player.EventTriggerPlayerRequestFallLiftActor()
        }
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
}

void OnlyHorseCheck() {
    goto Event528
}

void OutOfArea_BreakGame() {
    goto Event89
}
