-------- EventFlow: CollectObject_MiniGame --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerUnshowMiniGameScoreNum', 'EventShowFinish', 'EventExecuteProgressChallengeStep', 'EventTriggerShortenCreateRadiusExceptMiasmaSwarm']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventWaitStableNumDisplay']
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
queries: ['EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum', 'EventQueryCompareGameDataFloat']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerTalk', 'EventGoOffstageForUser', 'EventTriggerPlayerRequestFallLiftActor', 'EventPlayerUnequip', 'EventTriggerPlayerRequestKeepLifting', 'EventTriggerParticipateEvent', 'EventPlayerStopInAir', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_Horse_B[Horse_NotPlayingMiniGame]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09]
entrypoint: None()
actions: ['EventTriggerDeleteThisDoll', 'EventTriggerRemoveAllBonds', 'EventTriggerSetDestinationAnchorToBlowingAway', 'EventTriggerPushPauseMask', 'EventTriggerWarpToNearAnchor', 'EventTriggerErasePauseMask']
queries: ['EventQueryGerudoDollIsOnWagon', 'EventQueryIsStableWithoutBond', 'EventQueryGerudoDollIsNotInPlayableArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain041[Ground]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventNPCTurnToObjectGreeting', 'EventAIScheduleWarpToAnchor', 'EventDisableRecentTalkFlag', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: ['EventQueryOwningObjectPlayerInterference', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventStartSound']
queries: []
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
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Ready_Npc_MiniGame_CollectObject_Near() {
    if !Npc_HighMountain041[Ground].EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_3'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_1', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MiniGame_CollectObject_Talk() {
    if Player.EventQueryCheckPlayerState({'State': 26}) {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

    if !Npc_HighMountain041[Ground].EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk023', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        Event110:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk018', 'IsNotOpenIfSkipedMostRecent': False})
            Event187:
            if !Npc_HighMountain041[Ground].EventQueryIsOnRecentTalkFlag() {
                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk022', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk021', 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {

                call BlowingAway()

                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObjject_MiniGame_IsWokeUpTwice', 'Index': -1}) {
                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_3_1', 'IsNotOpenIfSkipedMostRecent': False})
                    Event20:
                    EventCamera.EventTriggerCameraSavePoint()

                    call Camera_OverlookSctteredDools()

                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk04_0_1', 'IsNotOpenIfSkipedMostRecent': False})
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1, 4, 5, 8]:
                        Event287:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedFirstTake'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedSecondTake'}) {
                                    Event284:
                                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_4', 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_5', 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk061_6', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
                                Event93:
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call LupeePay()

                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                                        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_02', 'IsNotOpenIfSkipedMostRecent': False})
                                    } else {
                                        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_00', 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                    call SoundStopInGameBgm()

                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                    Npc_HighMountain041[Ground].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

                                    call Camera_BeforePlaying()


                                    call WarpDollsIfNotPlayableArea_Ground()

                                    ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': True})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                                    call MiniGameStart()

                                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'CollectObject_MiniGame', 'IsWaitEnd': True, 'StepName': 'Playing'})
                                } else {
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_1', 'IsNotOpenIfSkipedMostRecent': False})

                                    call CleanUpByNpc()

                                }
                            } else {
                                goto Event284
                            }
                        } else {
                            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk05_1', 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_0', 'IsNotOpenIfSkipedMostRecent': False})

                                call Camera_LookWagon()

                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_1', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain041', 'InstanceName': 'Ground', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk06_2', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_0', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_1', 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk07_2', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event93
                            } else {
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                                Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk19', 'IsNotOpenIfSkipedMostRecent': False})

                                call CleanUpByNpc()

                            }
                        }
                      case [2, 3, 6, 7]:
                        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk04_1', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event287
                    }
                } else
                if !Npc_HighMountain041[Ground].EventQueryIsOnRecentTalkFlag() {
                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_1_1', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'CollectObjject_MiniGame_IsWokeUpTwice'})
                    goto Event20
                } else {
                    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk03_0_1', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event20
                }
            } else {
                Npc_HighMountain041[Ground].EventDisableRecentTalkFlag({'IsWaitEnd': True})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
          case [2, 3, 4]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk019', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event187
          case [5, 6, 7]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk020', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event187
        }
    } else {
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk010', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk012', 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk013', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event106:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk015', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event110
          case [2, 3, 4]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk016', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event106
          case [5, 6, 7]:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk017', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event106
        }
    }
}

void Playing_Npc_MiniGame_CollectObject_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_0', 'IsNotOpenIfSkipedMostRecent': False})
    Event75:
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_3', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk19', 'IsNotOpenIfSkipedMostRecent': False})

            call SoundStopMingameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call ResetGimmickSet()

            Npc_HighMountain041[Ground].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_HighMountain041[Ground].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_1', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

            call NpcTurnToHorse()

            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Ready', 'ChallengeName': 'CollectObject_MiniGame', 'IsWaitEnd': True})
        } else {
            Event77:
            Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_1', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        goto Event77
    }
}

void TimeOver_Npc_MiniGame_CollectObject_StepStart() {
    if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {

        call WaitStableIfTimeOver()

    }

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum', 'Operator': 3, 'GameDataA': 'CollectObject_MiniGame_CurrentScore_SunaDoll'}) {

        call SoundStopMingameBgm_Finished()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
        Event36:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'CollectObject_MiniGame_FrameCountForClear', 'Value': 0.0, 'Index': -1})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_HighMountain041[Ground].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call Camera_AfterPlaying()

        ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MiniGameFinish()

    } else {

        call SoundStopMingameBgmWithFue()

        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk10', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event36
    }
}

void Playing_Npc_MiniGame_CollectObject_EachFrame() {
    Event329:
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Playing', 'GameDataName': 'Step_CollectObject_MiniGame', 'Index': -1}) {
        AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSetHitObject()
        AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSpecialPowerReceiverSetIgnoreAllSpecialPower()

        call DeleteGerudoDollBond()

        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            Event393:
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'SrcGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'TimeOver', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'CollectObject_MiniGame'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.IsPlayerUltraHandGrabbing', 'Index': -1}) {
            Event125:
            GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'CollectObject_MiniGame_FrameCountForClear', 'Value': 0.0, 'Index': -1})
            Event26:
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event329
        } else
        if !Player.EventQueryCheckPlayerState({'State': 29}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'Operator': 4, 'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum'}) {
                goto Event125
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
                    Event392:

                    call PauseGoods()

                    goto Event393
                } else {
                    goto Event26
                }
            } else {
                goto Event392
            }
        } else {
            goto Event125
        }
    }
}

void LupeePay() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk08_2', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_HighMountain041[Ground].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_HighMountain041[Ground].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

        call RecreateAllWagonDolls()

        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': True, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void MiniGame_CollectObject_PlayerOutOfArea() {

    call PoseCheck()


    call PauseGoods()

    Npc_HighMountain041[Ground].EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 1, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    if Player.EventQueryCheckPlayerState({'State': 29}) {
        Player.EventTriggerPlayerRequestFallLiftActor()
    }
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_InFrontOfSecondActivity', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call DeletePauseGoods()


    call WarpDollsIfNotPlayableArea_Ground()


    call Camera_Action1_Talk2()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk31', 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event75
}

void BlowingAway() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsScattered', 'Value': True, 'Index': -1})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_HighMountain041[Ground].EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk02', 'ASName': 'TalkSurprised', 'EndDialogOption': 2, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1540.22998046875, 213.0, -1789.760009765625], 'AtVector': [-1543.010009765625, 213.8000030517578, -1792.8299560546875], 'TargetFovy': 40.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'ASName': 'AttackBack'})
            Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

            call ParticipateEventAndBlowingAway()

        }

    } {
        if Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventTriggerPlayerGetOff()
        }
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        LastRiddenAnimal_ForEvent.EventGoOffstageCouplerWithCombinedActor({'IsVisibleHorse': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Animal_Horse_B[Horse_NotPlayingMiniGame].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void MiniGame_CollectObject_OwningObjectInterferedByPlayer() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsScattered', 'Index': -1}) {
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch Npc_HighMountain041[Ground].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 7]:
        Event49:

        call Common.AirStartUP_Player()

        Event112:
        Npc_HighMountain041[Ground].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk52', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call ResetGimmickSet()

        Npc_HighMountain041[Ground].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_HighMountain041[Ground].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})

        call Camera_Action1_Talk()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk53', 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

        call NpcTurnToHorse()

        Npc_HighMountain041[Ground].EventDisableRecentTalkFlag({'IsWaitEnd': True})
      case 5:

        call Common.CancelLiftByOwned()

        goto Event112
      case [6, 8, 9]:

        call MiniGame_CollectObject_Burn()

    }
}

void CleanUpByNpc() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[Ground].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_HighMountain041[Ground].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

    call RecreateAllWagonDolls()

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_1', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

    call NpcTurnToHorse()

}

void ParticipateEventAndBlowingAway() {
    AsbObj_WagonSteeringCollectObject_A_01[Wagon_Steering_NotPlayingMiniGame].EventTriggerSetVelToBlowingAway({'AddVelocity': [0.0, 6.0, 0.0]})
    Harness_Coupler[Coupler_ForCollectObject].EventTriggerSetVelToBlowingAway({'AddVelocity': [0.0, 6.0, 0.0]})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway00', 'Angle': 80.0})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway01', 'Angle': 70.0})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway02', 'Angle': 70.0})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway03', 'Angle': 70.0})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway04', 'Angle': 70.0})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway05', 'Angle': 70.0})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway06', 'Angle': 70.0})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway07', 'Angle': 70.0})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway08', 'Angle': 70.0})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerSetDestinationAnchorToBlowingAway({'BasicParamNameOfAnchor': 'DollForBlowAway09', 'Angle': 65.0})
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

void Playing_Npc_HighMountain041_Ground_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/CollectObject_MiniGame:Balloon0_2', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void MiniGame_CollectObject_OwningObjectMoved() {
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CollectObject_MiniGame', 'Index': -1, 'Value': 'Ready'}) {
        goto Event49
    }
}

void MiniGame_CollectObject_Burn() {
    Event450:

    call PoseCheck()


    call PauseGoods()

    Npc_HighMountain041[Ground].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CollectObject_MiniGame', 'Index': -1, 'Value': 'Playing'}) {

        call SoundStopMingameBgmWithFue()

    } else {

        call SoundStopInGameBgm()

    }
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk52', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetGimmickSetAndUnshowMiniGameUI()

    ChallengeSystemActor.EventTriggerShortenCreateRadiusExceptMiasmaSwarm({'IsEnable': False})
    Npc_HighMountain041[Ground].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_HighMountain041[Ground].EventNPCTurnToTarget({'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Camera_Action1_Talk()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk53', 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CollectObject_MiniGame', 'Index': -1, 'Value': 'Playing'}) {
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk57', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})

    call NpcTurnToHorse()

    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CollectObject_MiniGame', 'Index': -1, 'Value': 'Playing'}) {
        Npc_HighMountain041[Ground].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    }
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Ready', 'ChallengeName': 'CollectObject_MiniGame', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True})
}

void RecreateAllWagonDolls() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsScattered', 'Value': False, 'Index': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsRequestedRespawn', 'Value': True, 'Index': -1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_IsRequestedRespawn', 'Value': False, 'Index': -1})
}

void Camera_LookWagon() {
    Npc_HighMountain041[Ground].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2InstanceName': 'Wagon_Steering_NotPlayingMiniGame', 'Actor1ActorName': 'Npc_HighMountain041', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 0, 'PosVector': [-1542.0009765625, 214.6092071533203, -1792.5799560546875], 'AtVector': [-1544.802001953125, 214.27740478515625, -1793.469970703125], 'MoveTime': 30, 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor2ActorName': 'AsbObj_WagonSteeringCollectObject_A_01'})
}

void Camera_OverlookSctteredDools() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-1538.949951171875, 215.57000732421875, -1793.469970703125], 'AtVector': [-1546.0999755859375, 214.0, -1801.949951171875], 'TargetFovy': 50.0, 'MoveTime': 30, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void DeleteGerudoDollBond() {
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerRemoveAllBonds()
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventQueryGerudoDollIsOnWagon() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerRemoveAllBonds()
    }
}

void NpcTurnToHorse() {
    Npc_HighMountain041[Ground].EventNPCTurnToTarget({'ActorName': 'Animal_Horse_B', 'InstanceName': 'Horse_NotPlayingMiniGame', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [-1547.2960205078125, 212.2239990234375, -1799.2430419921875], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void PauseGoods() {
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
}

void MiniGame_CollectObject_DollsOutOfArea() {
    goto Event450
}

void Camera_Action1_Talk() {
    EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_HighMountain041', 'Actor1InstanceName': 'Ground', 'PosVector': [3.2699999809265137, 1.75, 4.550000190734863], 'AtVector': [0.07999999821186066, 1.2300000190734863, 1.2899999618530273], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_Action1_Talk2() {
    EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_HighMountain041', 'Actor1InstanceName': 'Ground', 'PosVector': [4.440000057220459, 2.069999933242798, 5.670000076293945], 'AtVector': [0.9800000190734863, 1.2799999713897705, 2.140000104904175], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_BeforePlaying() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.3400000035762787, 3.2100000381469727, -4.650000095367432], 'AtVector': [0.05999999865889549, 1.7999999523162842, 0.1599999964237213], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_AfterPlaying() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-2.759999990463257, 1.2000000476837158, -1.440000057220459], 'AtVector': [0.8299999833106995, 0.8999999761581421, 1.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void MiniGameStart() {
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_2_0', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk09_2_1', 'IsNotOpenIfSkipedMostRecent': False})

    call Common.EventTriggerShowReadyGoWithCountIn()


    call SoundStartMingameBgm()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedFirstTake'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1800})
    } else {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 2700})
    }
    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 6})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void MiniGameFinish() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'CollectObject_MiniGame_MaxGoodsNum', 'GameDataA': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'Operator': 3}) {
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'SrcGameDataName': 'CollectObject_MiniGame_MaxGoodsNum'})
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_1', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedFirstTake'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedSecondTake'}) {
                Event34:
                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk12', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                Event251:
                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk14_2', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})

                call RecreateAllWagonDolls()


                call NpcTurnToHorse()

                if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_FirstTake', 'Value': True, 'Index': -1})
                }
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'CollectObject_MiniGame', 'StepName': 'Ready', 'IsIgnoreChallengeProgressUI': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                GameSystemActor.EventTriggerRequestAutoSave()
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedSecondTake'})
                Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_3', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event34
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CollectObject_MiniGame_Ground_IsFinishedFirstTake', 'Value': True, 'Index': -1})
            goto Event34
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'Value': 4}) {
      case [0, 1]:
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_2', 'IsNotOpenIfSkipedMostRecent': False})
        Event35:
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk13', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event251
      case 2:
        Npc_HighMountain041[Ground].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CollectObject_MiniGame:Talk11_0', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

        goto Event35
    }
}

void WarpDollsIfNotPlayableArea_Ground() {
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway00'})
    }
    if !TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway01'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway02'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway03'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway04'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway05'})
    }
    if !TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway06'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway07'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway08'})
    }
    if !TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventQueryGerudoDollIsNotInPlayableArea() {
        TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerWarpToNearAnchor({'InstanceName': 'DollForBlowAway09'})
    }
}

void SoundStartMingameBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_05'})
}

void SoundStopMingameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_05', 'IsUseSuspendFade': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
}

void SoundStopMingameBgm_Finished() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Minigame_05'})
}

void SoundStopMingameBgmWithFue() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_05', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Minigame_Retire', 'TimeoutFrame': 60, 'IsWaitEnd': True})
}

void WaitStableIfTimeOver() {
    if !Player.EventQueryCheckPlayerState({'State': 29}) {
        Event389:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call PauseGoods()

        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'CollectObject_MiniGame_CurrentScore_SunaDoll', 'SrcGameDataName': 'MiniGame_Score'})
    } else {
        Player.EventTriggerPlayerRequestFallLiftActor()
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        goto Event389
    }
}

void ResetGimmickSet() {
    Event345:
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_CollectObject_FinishPos', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    call RecreateAllWagonDolls()

}

void ResetGimmickSetAndUnshowMiniGameUI() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    goto Event345
}

void DeletePauseGoods() {
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway00].EventTriggerErasePauseMask()
    TwnObj_GerudoDollBlue_A_02_CollectObject[DollForBlowAway01].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway02].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway03].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway04].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway05].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallRed_A_01_CollectObject[DollForBlowAway06].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway07].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway08].EventTriggerErasePauseMask()
    TwnObj_GerudoDollSmallGreen_A_01_CollectObject[DollForBlowAway09].EventTriggerErasePauseMask()
}

void PoseCheck() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else
    if Player.EventQueryCheckPlayerState({'State': 29}) {
        Player.EventTriggerPlayerRequestKeepLifting()
    }
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
}
