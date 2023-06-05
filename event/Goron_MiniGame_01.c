-------- EventFlow: Goron_MiniGame_01 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventResetGimmick', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventRequestSoulSageLightOrb']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerResetMiniGameScore', 'EventTriggerShowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerRollbackChallengeStep', 'EventTriggerEnableShowRecordUpdate', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerUnequip', 'EventTriggerParticipateEvent', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Gaman01[MiniGame]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Gaman02[MiniGame]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: FldObj_DeathMtArtifactTrain_B_01_MiniGame
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Gaman03[MiniGame]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Gaman01[ExplainTrain(Npc_Gaman)]
entrypoint: ExplainTrain(Npc_Gaman)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Gaman01[Retire(Npc_Gaman)]
entrypoint: Retire(Npc_Gaman)
actions: ['EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)]
entrypoint: PlayerOutOfArea(Npc_Gaman)
actions: ['EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: Npc_Gaman01[ExplainTrain_Talk(Npc_Gaman)]
entrypoint: ExplainTrain_Talk(Npc_Gaman)
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Gaman01[OutOfAreaInPlaying(Npc_Gaman)]
entrypoint: OutOfAreaInPlaying(Npc_Gaman)
actions: ['EventTriggerBecomeSpeaker', 'EventNPCTurnToObjectGreeting', 'EventTalk']
queries: []
params: None

void Ready_Npc_Gaman01_MiniGame_Talk() {

    call PushTrainPause()


    call Ready_Talk()


    call EraseTrainPause()

}

void Playing_Npc_Gaman01_MiniGame_EachFrame() {
    Event324:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_01_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Goron_MiniGame_01'}) {
            Event9:
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                Event13:
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Finish', 'ChallengeName': ''})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Goron_MiniGame_HitAllTargets', 'Index': -1}) {
                goto Event13
            } else {
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event324
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Goron_MiniGame_Tutorial_01'}) {
        goto Event9
    }
}

void ResetMiniGame_Common() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Value': False, 'Index': -1})

    call SetPlayerStartPos()


    call ResetGamanState()

    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'Goron_MiniGame_ResultScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})

    call TrainWarp()

    GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
}

void Craft_Npc_Gaman01_MiniGame_Talk() {

    call PushTrainPause()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 1005, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk13', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event133:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call ExplainCourse()

        Event137:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 1003, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk36', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event133
      case 1:

        call ExplainTrain({'InstanceName': 'MiniGame', 'ActorName': 'Npc_Gaman01', 'Npc_Gaman': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk31'})

        goto Event137
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call EraseTrainPause()

    }
}

void Finish_Npc_Gaman01_MiniGame_StepStart() {

    call PushTrainPause()


    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'Goron_MiniGame_01_BestScore', 'Operator': 2, 'GameDataA': 'Goron_MiniGame_ResultScore'}) {

        call SoundStopTrainBgm_Goal()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        Event166:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call ResetMiniGame()


        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Spearker1InstanceName': 'MiniGame', 'Spearker2InstanceName': 'MiniGame', 'Actor1': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'Actor2': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'Spearker1ActorName': 'Npc_Gaman01', 'Spearker2ActorName': 'Npc_Gaman02'})

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SoundStartInGameBgm()

        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'Goron_MiniGame_01_PassingScore', 'Operator': 3, 'GameDataA': 'Goron_MiniGame_ResultScore'}) {

            call CheckBestScore()

            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk54', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk69', 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_ArrowBundle_A_01'})

            Event180:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_HitAllTargets', 'Value': False})
            ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Goron_MiniGame_01', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False})
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk58', 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call RetryPoint()

            } else {
                Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk73', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call EraseTrainPause()

        } else {
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk14', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk54', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event180
        }
    } else {

        call SoundStopTrainBgm_Goal()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        goto Event166
    }
}

void Retire_Npc_Gaman01_MiniGame_StepStart() {

    call PushTrainPause()


    call Retire({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman01'})

    Event51:
    ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Goron_MiniGame_01', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_SouthMine_PlayerOutOfArea', 'Value': False})
    Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk58', 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call RetryPoint()

    } else {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk73', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call EraseTrainPause()

}

void Goron_MiniGame_01_StartCheck() {

    call StartCheck()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Playing', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Goron_MiniGame_01', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
}

void Goron_MiniGame_01_TrainOutOfArea() {

    call PushTrainPause()


    call Common.AirStartUP_Player()


    call InitTalk.InitTalkOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame")})

    Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'InstanceName': '', 'PosOffset': [0.0, 1.0, 0.0], 'FaceControlType': 1, 'IsReleaseThreaten': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk37', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call TrainWarp()


    call SetPlayerStartPos()


    call ResetGamanState()


    call Camera_LookAtNPC({'GamanName': 'Npc_Gaman01'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame")})

    Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        Npc_Gaman03[MiniGame].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk38', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call EraseTrainPause()

}

void ExplainTrain() {
    FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerParticipateEvent()
    Npc_Gaman01[ExplainTrain(Npc_Gaman)].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventTriggerCameraSavePoint()

    call Camera_LookAtTrain({'GamanName': 'ActorName'})


    call ExplainTrain_Talk({'Npc_Gaman': 'Npc_Gaman', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'MessageId': 'MessageId'})

}

void Ready_Npc_Gaman01_MiniGame_Near() {
    Npc_Gaman01[MiniGame].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Goron_MiniGame_01:Near01', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void NotUseTrain() {

    call PushTrainPause()


    call InitTalk.InitTalkNoTurn()

    FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerParticipateEvent()
    Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 0, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    switch Npc_Gaman01[MiniGame].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 5, 7, 8, 9]:
        Event95:

        call EraseTrainPause()

      case [1, 2, 3, 4, 6]:
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event95
    }
}

void ExplainCourse() {

    call ExplainCourseNotReturnCamera()

    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': False})

    fork {
        Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Gaman01', 'InstanceName': 'MiniGame', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void StartCheck() {

    call PushTrainPause()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame")})


    call Set_ActTrainerWait()

    Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk04', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SoundStopInGameBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': True})

        call Camera_AtStart()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call Common.EventTriggerShowReadyGoWithCountIn()

        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1800})
        ChallengeSystemActor.EventTriggerResetMiniGameScore()
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Goron_MiniGame_ResultScore', 'Value': 0, 'Index': -1})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()

        call SoundStartTrainBgm()

        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
        ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 0})
        ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IntBestScore': 'Goron_MiniGame_01_BestScore', 'IsFinishedFirstTake': 'Goron_Minigame_01_IsFinishedFirstTake'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_HitAllTargets', 'Value': False})

        call EraseTrainPause()

    } else {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call SetPlayerStartPos()


        call ResetGamanState()

        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Gaman01', 'InstanceName': 'MiniGame', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call EraseTrainPause()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Retire() {

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call SoundStopTrainBgmWithFue()

    Npc_Gaman01[Retire(Npc_Gaman)].EventTriggerBecomeSpeaker()
    Npc_Gaman01[Retire(Npc_Gaman)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Gaman01[Retire(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetMiniGame_Common()

    Npc_Gaman01[Retire(Npc_Gaman)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Camera_LookAtNPC({'GamanName': 'GamanName'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call SoundStartInGameBgm()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': 'Npc_Gaman'})

    Npc_Gaman01[Retire(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk77', 'IsNotOpenIfSkipedMostRecent': False})
}

void CheckBestScore() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'Goron_MiniGame_01_BestScore', 'Operator': 2, 'GameDataA': 'Goron_MiniGame_ResultScore'}) {
        GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'Goron_MiniGame_01_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Goron_MiniGame_ResultScore'})
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
        Event53:
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk67', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_HitAllTargets'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataB': 'Goron_MiniGame_01_PassingScore2', 'GameDataA': 'Goron_MiniGame_ResultScore'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataB': 'Goron_MiniGame_01_PassingScore', 'GameDataA': 'Goron_MiniGame_ResultScore'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_HitAllTargets'}) {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event53
    } else
    if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataB': 'Goron_MiniGame_01_PassingScore2', 'GameDataA': 'Goron_MiniGame_ResultScore'}) {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk25', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event53
}

void PlayerOutOfArea() {

    call Common.AirStartUP_Player()


    call PushTrainPause()

    Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventTriggerBecomeSpeaker()
    Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk72', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk83', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk73', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call EraseTrainPause()

    } else {
        Npc_Gaman01[PlayerOutOfArea(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk74', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call SetPlayerStartPos()


        call ResetGamanState()


        call Camera_LookAtNPC({'GamanName': 'GamanName'})

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call EraseTrainPause()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Goron_MiniGame_01_PlayerOutOfArea() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_01_IsAfter_Craft_Exp'}) {
        ChallengeSystemActor.EventTriggerRollbackChallengeStep({'ChallengeName': 'Goron_MiniGame_01', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'PlayerOut', 'IsIgnoreChallengeProgressUI': False})

        call OutOfAreaInPlaying({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman01'})


        call AfterRetire()

    } else {

        call PlayerOutOfArea({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman01'})

        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Goron_MiniGame_01', 'ChallengeStep': 'Ready', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void RetryPoint() {
    Event67:
    Npc_Gaman01[MiniGame].EventTalk({'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk44', 'ChoiceNumber': 4, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 12, 'ChoiceLabel4': 11, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 20, 'Index': -1, 'GameDataName': 'Goron_MiniGame_PayedFee'})
            Npc_Gaman01[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk52', 'IsNotOpenIfSkipedMostRecent': False})
            Event130:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Craft', 'ChallengeName': 'Goron_MiniGame_01', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
        } else {
            Event92:
            Npc_Gaman01[MiniGame].EventTalk({'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk45', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        }
      case 1:
        if !GameSystemActor.EventQueryHasRuppe({'Value': 50}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -50})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 50, 'Index': -1, 'GameDataName': 'Goron_MiniGame_PayedFee'})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_ArrowBundle_A_02'})

            Npc_Gaman01[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk53', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Gaman01[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk42', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event130
        } else {
            goto Event92
        }
      case 2:

        call Explain_All()


        call MainTalk()

      case 3:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk47', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk68', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void ExplainCourseNotReturnCamera() {
    FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerParticipateEvent()
    Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'FaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'MiniGame_01_CameraPos', 'Target': 5})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'MiniGame_01_CameraPos', 'Target': 5})
    EventCamera.EventTriggerCameraSavePoint()

    call Camera_LookStartPosFromNPC()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': True})
    Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_LookAtCourse({'Gaman': 'Npc_Gaman01'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_01_IsCompleted_Exp'}) {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk81', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk71', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ExplainTrain_Talk() {
    Npc_Gaman01[ExplainTrain_Talk(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gaman01[ExplainTrain_Talk(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    fork {
        Npc_Gaman01[ExplainTrain_Talk(Npc_Gaman)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void ResetMiniGame() {

    call ResetMiniGame_Common()

    Npc_Gaman01[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Camera_LookAtNPC({'GamanName': 'Npc_Gaman01'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void SoundStartTrainBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_01'})
}

void SoundStopTrainBgm_Goal() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_01', 'IsUseSuspendFade': False})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
}

void MainTalk() {
    Event152:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk49', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman01[MiniGame].EventTalk({'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk48', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event67
}

void Explain_All() {

    call ExplainCourseNotReturnCamera()


    call Camera_LookAtTrain({'GamanName': 'Npc_Gaman01'})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': False})

    call ExplainTrain_Talk({'InstanceName': 'MiniGame', 'ActorName': 'Npc_Gaman01', 'Npc_Gaman': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame"), 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk31'})

}

void Set_ActTrainerWait() {
    Npc_Gaman01[MiniGame].EventPlayAS({'Partial': '', 'ASName': 'Act_Trainer_Wait', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_Gaman02[MiniGame].EventPlayAS({'ASName': 'Act_Trainer_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        Npc_Gaman03[MiniGame].EventPlayAS({'ASName': 'Act_Trainer_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }
}

void TrainWarp() {
    if !FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventQueryWarpToSafeSpaceWithCombinedActor({'IsEnableFailDelete': True, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'BasePos': [1847.5, 428.0, -2076.5], 'StartHeightOffset': 3.0, 'IsEnableHitPlayer': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Carry_FailedWarp', 'Value': False})
        Event327:
        GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Carry_FailedWarp'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 1})
        goto Event327
    }
}

void Camera_AtStart() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DesignateMatrixActor', 'AtVector': [0.0, 4.0, 0.0], 'PosVector': [0.0, 6.0, 12.0], 'Actor1InstanceName': 'MiniGame_01_CameraPos', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': 'MiniGame_01_CameraPos', 'ActorName': 'DesignateMatrixActor', 'TurnFaceControlType': 0})
}

void SoundStopTrainBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_01', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Minigame_Retire', 'TimeoutFrame': 60, 'IsWaitEnd': True})
}

void ResetPlayerState() {
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventTriggerParticipateEvent()
    }
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void OutOfAreaInPlaying() {

    call PushTrainPause()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Goron_MiniGame_SouthMine_PlayerOutOfArea', 'Value': True})

    call Common.AirStartUP_Player()

    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call SoundStopTrainBgmWithFue()

    Npc_Gaman01[OutOfAreaInPlaying(Npc_Gaman)].EventTriggerBecomeSpeaker()
    Npc_Gaman01[OutOfAreaInPlaying(Npc_Gaman)].EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 1, 'IsWaitEnd': True})
    Npc_Gaman01[OutOfAreaInPlaying(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk22', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetMiniGame_Common()


    call Camera_LookAtNPC({'GamanName': 'GamanName'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': 'Npc_Gaman'})

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call SoundStartInGameBgm()

    Npc_Gaman01[OutOfAreaInPlaying(Npc_Gaman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk27', 'IsNotOpenIfSkipedMostRecent': False})

    call EraseTrainPause()

}

void SetPlayerStartPos() {

    call ResetPlayerState()

    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'StartPos_Goron_MiniGame_SouthMine', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void ResetGamanState() {
    Npc_Gaman01[MiniGame].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
    Npc_Gaman01[MiniGame].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Gaman02[MiniGame].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
    Npc_Gaman02[MiniGame].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        Event30:

        call Set_ActTrainerWait()

    } else {
        Npc_Gaman03[MiniGame].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Gaman03[MiniGame].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        goto Event30
    }
}

void Camera_LookAtNPC() {
    Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': 'MiniGame', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'GamanName', 'OffsetBase': 0})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorInstanceName': 'MiniGame', 'TargetOffset': [0.0, 2.0, 0.0], 'MoveTime': 0, 'IsWaitEnd': True, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LookAtVectorY': 1, 'TargetActorName': 'GamanName', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void SoundStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void AfterRetire() {

    call PushTrainPause()

    goto Event51
}

void Camera_LookStartPosFromNPC() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2InstanceName': 'MiniGame_01_CameraPos', 'Actor1InstanceName': 'MiniGame', 'Actor2ActorName': 'DesignateMatrixActor', 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'Actor1ActorName': 'Obj_GoronTruckStopBar_A_02', 'PosVector': [-9.529999732971191, 7.070000171661377, 11.350000381469727], 'AtVector': [-0.6000000238418579, 4.0, 2.25], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVectorSetType': 4, 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookAtTrain() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 30, 'Actor1InstanceName': 'MiniGame', 'Actor2ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, 2.0, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 6.0, 6.0], 'Actor1ActorName': 'GamanName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookAtCourse() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'MiniGame', 'AtVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor2InstanceName': 'Goron_MiniGame_CourseCamera', 'PosVector': [0.0, 6.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DesignateMatrixActor', 'Actor1ActorName': 'Gaman', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Ready_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_InMiniGame02'}) {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk76', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_Gaman01[MiniGame].EventQueryIsOnRecentTalkFlag() {
        Npc_Gaman01[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman01[MiniGame].EventTalk({'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk70', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event152
}

void PushTrainPause() {
    FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Carry_FailedWarp', 'Value': False})
}

void EraseTrainPause() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
        FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerErasePauseMask()
    }
}
