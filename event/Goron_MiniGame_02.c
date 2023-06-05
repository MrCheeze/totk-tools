-------- EventFlow: Goron_MiniGame_02 --------

Actor: Npc_Gaman02[MiniGame]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Gaman01[MiniGame]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerResetMiniGameScore', 'EventTriggerShowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerRollbackChallengeStep', 'EventTriggerMiniGameTimerStop', 'EventTriggerEnableShowRecordUpdate', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataFloat']
queries: ['EventQueryCompareGameDataInt', 'EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataFloat', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: FldObj_DeathMtArtifactTrain_B_01_MiniGame
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Craft_Npc_Gaman02_MiniGame_Talk() {

    call Goron_MiniGame_01.PushTrainPause()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk07', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel4': 7, 'ChoiceNumber': 3, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event55:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call ExplainCourse()

        Event99:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel4': 7, 'ChoiceNumber': 3, 'ChoiceLabel3': 7, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event55
      case 1:

        call Goron_MiniGame_01.ExplainTrain({'InstanceName': 'MiniGame', 'ActorName': 'Npc_Gaman02', 'Npc_Gaman': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk31'})

        goto Event99
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Goron_MiniGame_01.EraseTrainPause()

    }
}

void Playing_Npc_Gaman02_MiniGame_EachFrame() {
    Event176:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Goron_MiniGame_02'}) {
            Event16:
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': '', 'StepName': 'TimeOver'})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'Goron_MiniGame_02_PassingScore', 'Operator': 3}) {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': '', 'StepName': 'Finish'})
            } else {
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event176
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Goron_MiniGame_Tutorial_02'}) {
        goto Event16
    }
}

void Finish_Npc_Gaman02_MiniGame_StepStart() {

    call Goron_MiniGame_01.PushTrainPause()


    call ReportResult()

    Event22:
    if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Goron_MiniGame_02_BestTime', 'Operator': 4}) {
        GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataName': 'MiniGame_TimerValue', 'DstGameDataName': 'Goron_MiniGame_02_BestTime', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk24', 'IsNotOpenIfSkipedMostRecent': False})
        Event38:
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk67', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Goron_MiniGame_02_PassingTime', 'Operator': 2}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

            Event42:
            Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk18', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk52', 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_ArrowBundle_A_01'})

            ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Goron_MiniGame_02', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False})
            Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk58', 'ChoiceLabel1': 12, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call RetryEntry()

            } else {
                Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk73', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Goron_MiniGame_01.EraseTrainPause()

        } else
        if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'Operator': 2, 'GameDataB': 'Goron_MiniGame_02_PassingTime2'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

        } else {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

        }
        goto Event42
    } else
    if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Goron_MiniGame_02_PassingTime', 'Operator': 2}) {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event38
    } else
    if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'Operator': 2, 'GameDataB': 'Goron_MiniGame_02_PassingTime2'}) {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk26', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk27', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event38
}

void ResetMiniGame() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Goron_MiniGame_02_HitAll'})

    call Goron_MiniGame_01.ResetMiniGame_Common()

    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Goron_MiniGame_01.Camera_LookAtNPC({'GamanName': 'Npc_Gaman02'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void TimeOver_Npc_Gaman02_MiniGame_StepStart() {

    call Goron_MiniGame_01.PushTrainPause()


    call TimeOver()

    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'Goron_MiniGame_02_PassingScore', 'Operator': 3}) {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Goron_MiniGame_01.SoundStartInGameBgm()


        call Goron_MiniGame_01.EraseTrainPause()


        call AfterReportResult()

    } else {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk49', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Goron_MiniGame_02', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False})

        call Goron_MiniGame_01.SoundStartInGameBgm()

        Event113:
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk58', 'ChoiceLabel1': 12, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call RetryEntry()

        } else {
            Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk73', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }

        call Goron_MiniGame_01.EraseTrainPause()

    }
}

void Goron_MiniGame_02_StartCheck() {

    call StartCheck()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Playing', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Goron_MiniGame_02', 'IsWaitEnd': True})
}

void Retire_Npc_Gaman02_MiniGame_StepStart() {

    call Goron_MiniGame_01.PushTrainPause()


    call Goron_MiniGame_01.Retire({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman02'})

    Event86:
    ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Goron_MiniGame_02'})
    goto Event113
}

void StartCheck() {

    call Goron_MiniGame_01.PushTrainPause()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame")})

    Npc_Gaman02[MiniGame].EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk06', 'ChoiceLabel1': 3, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk34', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Goron_MiniGame_01.SoundStopInGameBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': True})

        call Goron_MiniGame_01.Camera_AtStart()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call Common.EventTriggerShowReadyGoWithCountIn()

        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 2400})
        ChallengeSystemActor.EventTriggerResetMiniGameScore()
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()

        call Goron_MiniGame_01.SoundStartTrainBgm()

        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
        ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 0})
        ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IntBestScore': 'Goron_Minigame_02_TimeLimit', 'IsFinishedFirstTake': 'Goron_MiniGame_02_EnableShowUpdate'})

        call Goron_MiniGame_01.EraseTrainPause()

    } else {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk32', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Goron_MiniGame_01.SetPlayerStartPos()


        call Goron_MiniGame_01.ResetGamanState()

        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'InstanceName': 'MiniGame', 'ActorName': 'Npc_Gaman02', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

        call Goron_MiniGame_01.Camera_LookAtNPC({'GamanName': 'Npc_Gaman02'})

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Goron_MiniGame_01.EraseTrainPause()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Goron_MiniGame_02_PlayerOutOfArea() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_02_IsAfter_Craft_Exp'}) {
        ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Goron_MiniGame_02', 'IsIgnoreChallengeProgressUI': False, 'ChallengeStep': 'PlayerOut'})

        call Goron_MiniGame_01.OutOfAreaInPlaying({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman02'})


        call AfterRetire()

    } else {

        call Goron_MiniGame_01.PlayerOutOfArea({'Npc_Gaman': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'GamanName': 'Npc_Gaman02'})

        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeStep': 'Ready', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Goron_MiniGame_02', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void Ready_Npc_Gaman02_MiniGame_Talk() {

    call Goron_MiniGame_01.PushTrainPause()


    call Ready_Talk()


    call Goron_MiniGame_01.EraseTrainPause()

}

void ReportResult() {

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Goron_MiniGame_02_BestTime', 'Operator': 4}) {

        call Goron_MiniGame_01.SoundStopTrainBgm_Goal()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        Event4:
        Npc_Gaman02[MiniGame].EventTriggerBecomeSpeaker()
        Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call ResetMiniGame()


        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_Gaman02', 'Spearker1InstanceName': 'MiniGame', 'Spearker2InstanceName': 'MiniGame', 'Spearker2ActorName': 'Npc_Gaman01', 'Actor1': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'Actor2': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame")})

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Goron_MiniGame_01.SoundStartInGameBgm()

    } else {

        call Goron_MiniGame_01.SoundStopTrainBgm_Goal()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        goto Event4
    }
}

void TimeOver() {

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_Gaman02[MiniGame].EventTriggerBecomeSpeaker()
    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Goron_MiniGame_01.SoundStopTrainBgmWithFue()

    Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk09', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetMiniGame()


    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_Gaman02', 'Spearker1InstanceName': 'MiniGame', 'Spearker2InstanceName': 'MiniGame', 'Spearker2ActorName': 'Npc_Gaman01', 'Actor1': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'Actor2': ActorIdentifier(name="Npc_Gaman01", sub_name="MiniGame")})

    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

}

void ExplainCourse() {

    call ExplainCourseNotReturnCamera()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': False})
    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    fork {
        Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'MiniGame', 'IsWaitEnd': True, 'ActorName': 'Npc_Gaman02', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void RetryEntry() {
    Event58:
    Npc_Gaman02[MiniGame].EventTalk({'ChoiceNumber': 4, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel4': 11, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk39', 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 20, 'Index': -1, 'GameDataName': 'Goron_MiniGame_PayedFee'})
            Event129:
            Npc_Gaman02[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk45', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Craft', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Goron_MiniGame_02', 'IsWaitEnd': True})
        } else {
            Event75:
            Npc_Gaman02[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk46', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        }
      case 1:
        if !GameSystemActor.EventQueryHasRuppe({'Value': 50}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -50})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 50, 'Index': -1, 'GameDataName': 'Goron_MiniGame_PayedFee'})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_ArrowBundle_A_02'})

            goto Event129
        } else {
            goto Event75
        }
      case 2:

        call Explain_All()


        call RetryEntry()

      case 3:
        Npc_Gaman02[MiniGame].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk48', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ExplainCourseNotReturnCamera() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': True})
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, -10.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'DesignateMatrixActor', 'FaceControlType': 1, 'InstanceName': 'Goron_MiniGame_CourseCamera'})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, -10.0], 'KeepTalkWait': True, 'OffsetBase': 0, 'TurnFaceControlType': 1, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'Goron_MiniGame_CourseCamera'})

    call Goron_MiniGame_01.Camera_LookAtCourse({'Gaman': 'Npc_Gaman02'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_Tutorial_02_IsCompleted_Exp'}) {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Explain_All() {

    call ExplainCourseNotReturnCamera()

    FldObj_DeathMtArtifactTrain_B_01_MiniGame.EventTriggerParticipateEvent()
    Npc_Gaman02[MiniGame].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_01_MiniGame', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Goron_MiniGame_01.Camera_LookAtTrain({'GamanName': 'Npc_Gaman02'})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron_MiniGame_SetTargets', 'Index': -1, 'Value': False})

    call Goron_MiniGame_01.ExplainTrain_Talk({'InstanceName': 'MiniGame', 'ActorName': 'Npc_Gaman02', 'Npc_Gaman': ActorIdentifier(name="Npc_Gaman02", sub_name="MiniGame"), 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk31'})

}

void AfterRetire() {

    call Goron_MiniGame_01.PushTrainPause()

    goto Event86
}

void Ready_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goron_MiniGame_InMiniGame01'}) {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Goron_MiniGame_01:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_Gaman02[MiniGame].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Goron_MiniGame_02:Talk37', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event58
}

void AfterReportResult() {

    call Goron_MiniGame_01.PushTrainPause()

    goto Event22
}
