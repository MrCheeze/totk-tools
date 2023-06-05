-------- EventFlow: Circuit_Uotori_MiniGame --------

Actor: SpObj_ControlStick_A_02[Circuit_Uotori]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerRecordControlStickMatrix', 'EventWarpToHomeMatrix']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryWarpToRecordedPosWithCombinedActor', 'EventQueryWarpToSafeSpaceWithCombinedActor', 'EventQueryCheckDotZAndTargetDir', 'EventQueryIsExistSafePosNearControlStick']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage032[Uotori]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[UotoriGoal]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave', 'EventResetGimmick', 'EventTriggerEnterGameSafetySection', 'EventTriggerLeaveGameSafetySection']
queries: ['EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventTriggerParticipateEvent', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetActor', 'EventPlayerRideControlStick', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToGameDataSafePos', 'EventPlayerStopInAir', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStart', 'EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventShowFinish', 'EventExecuteRollbackChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori05]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori06]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori07]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori08]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori09]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori10]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori11]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori13]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori15]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori16]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori17]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori18]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Uotori19]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void MiniGame_Ready_Npc_HatenoVillage032_Uotori_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'}) {
            Event315:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Uotori_MiniGame:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'}) {
            goto Event315
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'}) {
            goto Event315
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'}) {
            goto Event315
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'}) {
            goto Event315
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'}) {
            goto Event315
        } else
        if Npc_HatenoVillage032[Uotori].EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Uotori_MiniGame:Near_0001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void MiniGame_Ready_Npc_HatenoVillage032_Uotori_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck'}) {

        call RaceCheckSelect()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ResortPlan_ClearTalk', 'Index': -1}) {

        call RewardCheck()

        if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !Npc_HatenoVillage032[Uotori].EventQueryIsOnRecentTalkFlag() {
                Event605:

                call ClothCheckBoatReady()

            } else {

                call WeatherTalk()

            }
            Event14:
            Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0028', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
            Event15:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Event354:
                if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0036', 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isBoatInsideArea'}) {
                    if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
                        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0087', 'ChoiceNumber': 4, 'ChoiceLabel1': 1, 'ChoiceLabel2': 14, 'ChoiceLabel3': 2, 'ChoiceLabel4': 13, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Index': -1, 'Value': 0})

                            call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0014', 'GameDataName_CourseID': 'Circuit_Uotori_CourseA', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0015', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseC_Playing', 'TimerLimit': 3600})

                          case 1:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 1, 'Index': -1})

                            call CourseChange({'TimerLimit': 3600, 'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0080', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0081', 'GameDataName_CourseID': 'Circuit_Uotori_CourseB', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseC_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseA_Playing'})

                          case 2:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 2, 'Index': -1})

                            call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0016', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0017', 'TimerLimit': 4500, 'GameDataName_CourseID': 'Circuit_Uotori_CourseC', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseB_Playing', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseC_Playing'})

                          case 3:
                            Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0098', 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseC_Playing'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'})
                            goto Event15
                        }
                    } else {
                        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0069', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0055', 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 1:

                call RaceCheckEntry()

              case 2:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseC_Playing'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_HatenoVillage032[Uotori].EventQueryIsOnRecentTalkFlag() {

            call ClothCheck()

        } else {

            call WeatherTalk()

        }
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': True, 'ChoiceLabel2': 5, 'ChoiceLabel1': 6, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0028', 'IsNotOpenIfSkipedMostRecent': False})
        Event496:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call StartCheckNG()

          case 1:

            call RaceCheckEntry()

          case 2:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Event11:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_ClearTalk'})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0047', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0061', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {

                call StartCheckOK()

            } else {

                call StartCheckNG()

            }
          case 1:

            call RaceCheckEntry()

          case 2:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void MiniGame_Playing_Npc_HatenoVillage032_Uotori_Talk() {

    call ReleaseHandle_Circuit_Uotori_MiniGame()

}

void MiniGame_Playing_Npc_HatenoVillage032_Uotori_EachFrame() {
    Event418:
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_Circuit_Uotori_MiniGame', 'Value': 'Playing', 'Index': -1}) {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 5, 'ActorFileName': ''}) {
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Playing'})
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                ChallengeSystemActor.EventTriggerUnshowTimerUI()
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'CircuitUotori_TimeOver', 'Value': True})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'TimeOver', 'ChallengeName': 'Circuit_Uotori_MiniGame'})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_GrabHandle', 'Value': True})
                Event84:
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event418
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_GrabHandle', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ReleaseHandle', 'Value': True})
        }
        goto Event84
    }
}

void TimeOver_Npc_HatenoVillage032_Uotori_StepStart() {

    call Common.AirStartUP_Player()

    Player.EventPlayerOnStopMode({'StopAnm': False})
    Player.EventPlayerStopInAir({'EnableCalcAnm': False, 'IsWaitEnd': True})
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call SoundStopRaceBgmWithFue()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call ChallengeReset()

}

void CourseReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CheckPointAllClear'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_DoorOpen'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseA'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseC'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseB'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_GrabHandle', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ReleaseHandle', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_isBoatInsideArea'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck', 'Value': False})
}

void CourseOut_Circuit_Uotori() {
    Player.EventPlayerOnStopMode({'StopAnm': False})
    Player.EventPlayerStopInAir({'EnableCalcAnm': False, 'IsWaitEnd': True})

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call SoundStopRaceBgmWithFue()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event59:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Player.EventPlayerOffStopMode()
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Link_TimeOver_Warp_Uotori', 'UseDemoWait': True})
    Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'PosVector': [2973.60009765625, 109.73999786376953, 3688.25], 'AtVector': [2976.5400390625, 108.8499984741211, 3690.10009765625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    call CheckPoint_AddEvent()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseC_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'})

    call CourseReset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'CircuitUotori_TimeOver'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Playing'})

    call WarpCheck()


    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0031', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 21, 'IsNotOpenIfSkipedMostRecent': False})

    call RetryCheck({'Giveup_Msg': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0048'})

}

void FinaleEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0064', 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Link_TimeOver_Warp_Uotori', 'UseDemoWait': True})
    Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    fork {
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'PosVector': [2973.60009765625, 109.73999786376953, 3688.25], 'AtVector': [2976.5400390625, 108.8499984741211, 3690.10009765625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    call CheckPoint_AddEvent()


    call CourseReset()


    call WarpCheck()


    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'}) {

        call CourseA_Clear()

        Event169:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0021', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})

            call RetryCheck({'Giveup_Msg': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0096'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'}) {

        call CourseB_Clear()

        goto Event169
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC_Playing'}) {

        call CourseC_Clear()

        goto Event169
    }
}

void Goal() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CheckPointAllClear'}) {
        SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()

        call TimeUpdateCheck()


        call Circuit_Ichikara_MiniGame.SoundStopRaceBgm_Goal()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'}) {
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        } else {
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Playing'})

        call FinaleEvent()

    }
}

void BondDoneEvent_Circuit_Uotori() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call CheckPoint_AddEvent()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck'}) {

        call RaceCheckSelect()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ResortPlan_ClearTalk', 'Index': -1}) {

        call RewardCheck()

        if !Npc_HatenoVillage032[Uotori].EventQueryIsOnRecentTalkFlag() {
            goto Event605
        } else {

            call WeatherTalk()

        }
        goto Event14
    } else {
        goto Event11
    }
}

void CheckPoint_AddEvent() {
    FldObj_CircuitCheckPoint_A_01[Uotori01].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori02].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori03].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori04].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori05].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori06].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[UotoriGoal].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori07].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori08].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori09].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori10].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori11].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori13].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori15].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori16].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori17].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori18].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Uotori19].EventTriggerParticipateEvent()
}

void CourseChange() {

    call CheckPoint_AddEvent()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Circuit_Ichikara_MiniGame.SoundStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    switch SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryCheckDotZAndTargetDir({'TargetDir': [0.8799999952316284, 0.0, 0.46000000834465027]}) {
      case 0:
        Event419:
        SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerRecordControlStickMatrix()
        if SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToSafeSpaceWithCombinedActor({'BaseRot': [-3.0, 20.0, -2.5], 'IsEnableFailDelete': False, 'BasePos': [2974.0, 106.0, 3726.800048828125], 'StartHeightOffset': 20.0, 'EndHeightOffset': -5.0, 'IsEnableHitPlayer': True}) in [0, 1] {
            Event132:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName_CourseID'}) {

                call CourseReset()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName_CourseID'})
                Event177:
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Circuit_Uotori_MiniGame'})
                if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
                    if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                        Event421:
                        if SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToRecordedPosWithCombinedActor({'EndHeightOffset': -5.0, 'StartHeightOffset': 10.0, 'IsSafeCheck': False, 'IsEnableHitPlayer': True}) in [0, 1] {
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                            Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'SpObj_ControlStick_A_02', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.0, -1.0], 'InstanceName': 'Circuit_Uotori', 'UseDemoWait': True})
                            Event653:
                            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                            SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                            EventCamera.EventTriggerCameraSavePoint()
                            Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseDesc', 'IsNotOpenIfSkipedMostRecent': False})
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                            call Common.EventTriggerShowReadyGoWithCountIn()


                            call Circuit_Ichikara_MiniGame.SoundStartRaceBgm()

                            ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 'TimerLimit'})
                            SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerErasePauseMask()
                            SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerRecordControlStickMatrix()
                            Player.EventPlayerRideControlStick({'ActorName': 'SpObj_ControlStick_A_02', 'InstanceName': 'Circuit_Uotori', 'IsWaitEnd': True})
                            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
                            ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_Playing'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataNamePlayingCourseID'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GameDataNameNotPlayingCourseID_01'})
                            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'GameDataNameNotPlayingCourseID_02'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_DoorOpen', 'Value': True})
                            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 5.0})
                        }
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                        Player.EventPlayerWarpToGameDataSafePos({'SafePosGameDataVector3': 'SafePos_ForPlayerWarp', 'TargetPosGameDataVector3': 'TargetPos_ForPlayerWarp', 'IsWaitEnd': True, 'UseDemoWait': True})
                        goto Event653
                    }
                } else
                goto Event421
            } else {

                call CourseReset()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseSwitch', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName_CourseID'})
                SoundSystemActor.EventStartSound({'SLinkKey': 'CheckPointOn', 'IsWaitEnd': True, 'TimeoutFrame': 0})
                goto Event177
            }
        }
      case [1, 2]:
        switch SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryCheckDotZAndTargetDir({'TargetDir': [-0.46000000834465027, 0.0, 0.8799999952316284]}) {
          case [0, 1]:
            goto Event419
          case 2:
            goto Event132
        }
    }
}

void WeatherTalk() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': False}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ChallengeReset() {
    goto Event59
}

void ReleaseHandle_Circuit_Uotori_MiniGame() {

    call Common.AirStartUP_Player()

    Player.EventPlayerOnStopMode({'StopAnm': False})
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call SoundStopRaceBgmWithFue()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0065', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event59
}

void CourseA_Clear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA_isFirstPlayed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event287:
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'SpObj_EnergyBank_Capsule_A_01'})
            && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_RoastFish_09'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01'})

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0077', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_RoastFish_09'})

                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0066', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_RoastFish_09'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_RoastFish_09'})

                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0078', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_CourseA_isFirstPlayed'})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0071', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event287
    }
}

void CourseB_Clear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB_isFirstPlayed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event259:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_EnergyBank_Capsule_A_01'})
            && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_03'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01_Bundle_A'})

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0077', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName3': 'Item_PlantGet_A'})


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0062', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_03'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName3': 'Item_PlantGet_A'})

                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_CourseB_isFirstPlayed'})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0076', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event259
    }
}

void DataReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'CircuitUotori_TimeOver'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_CourseC_Playing'})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Circuit_Uotori_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void RewardCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'SpObj_EnergyBank_Capsule_A_01'})
        && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_RoastFish_09'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01'})


            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_RoastFish_09'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0066', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'}) {
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_EnergyBank_Capsule_A_01'})
        && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_03'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01_Bundle_A'})


            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName3': 'Item_PlantGet_A'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0062', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'}) {
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 5, 'Actor': 'SpObj_EnergyBank_Capsule_A_01'})
        && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_09'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01_Bundle_B'})


            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_InsectGet_O', 'MaterialActorName2': 'Item_InsectGet_O', 'MaterialActorName3': 'Item_InsectGet_O', 'MaterialActorName4': 'Item_Ore_H'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0068', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {

        call CheckNoUpdateReward()

    }
}

void RaceCheck() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 13, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0089', 'IsNotOpenIfSkipedMostRecent': False})

    call Circuit_Ichikara_MiniGame.SoundStartDuckBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'UotoriCircuit_MiniGame'})

    call CheckPoint_AddEvent()


    call CourseReset()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseSwitch', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataNameCourseID'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_RaceCheck'})
    SoundSystemActor.EventStartSound({'SLinkKey': 'CheckPointOn', 'IsWaitEnd': True, 'TimeoutFrame': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0085', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0084', 'IsNotOpenIfSkipedMostRecent': False})
}

void CourseC_Clear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC_isFirstPlayed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event392:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 5, 'Actor': 'SpObj_EnergyBank_Capsule_A_01'})
            && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_09'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_EnergyBank_Capsule_A_01_Bundle_B'})

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0077', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_InsectGet_O', 'MaterialActorName2': 'Item_InsectGet_O', 'MaterialActorName3': 'Item_InsectGet_O', 'MaterialActorName4': 'Item_Ore_H'})

                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0068', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0056', 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_09'}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_InsectGet_O', 'MaterialActorName2': 'Item_InsectGet_O', 'MaterialActorName3': 'Item_InsectGet_O', 'MaterialActorName4': 'Item_Ore_H'})

                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()


                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_CourseC_isFirstPlayed'})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event392
    }
}

void RaceCheckTalk_Circuit_Uotori() {
    Player.EventPlayerOnStopMode({'StopAnm': False})
    Player.EventPlayerStopInAir({'EnableCalcAnm': False, 'IsWaitEnd': True})

    call Common.AirStartUP_Player()

    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0093', 'ChoiceNumber': 2, 'ChoiceLabel1': 16, 'ChoiceLabel2': 19, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0094', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Link_TimeOver_Warp_Uotori', 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'KeepTalkWait': True, 'OffsetBase': 0})
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0084', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerOffStopMode()
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0099', 'IsNotOpenIfSkipedMostRecent': False})

        call Circuit_Ichikara_MiniGame.SoundStartDuckBgm()


        call CheckPoint_AddEvent()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call CourseReset()

        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0091', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck', 'Value': False})
        GameSystemActor.EventTriggerLeaveGameSafetySection()
        SoundSystemActor.EventStartSound({'SLinkKey': 'CheckPointOn', 'IsWaitEnd': True, 'TimeoutFrame': 0})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0100', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerOffStopMode()
    }
}

void RaceCheckSelect() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0086', 'ChoiceNumber': 4, 'ChoiceLabel4': 15, 'ChoiceLabel2': 17, 'ChoiceLabel3': 12, 'ChoiceLabel1': 20, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0036', 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isBoatInsideArea'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA'}) {
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Index': -1, 'Value': 0})

                    call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0014', 'GameDataName_CourseID': 'Circuit_Uotori_CourseA', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0015', 'TimerLimit': 3600, 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseC_Playing'})

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB'}) {
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 1, 'Index': -1})

                    call CourseChange({'TimerLimit': 3600, 'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0080', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0081', 'GameDataName_CourseID': 'Circuit_Uotori_CourseB', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseC_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseA_Playing'})

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC'}) {
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 2, 'Index': -1})

                    call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0016', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0017', 'TimerLimit': 4500, 'GameDataName_CourseID': 'Circuit_Uotori_CourseC', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseB_Playing', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseC_Playing'})

                }
            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0055', 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call StartCheckNG()

        }
      case 1:

        call RaceCheckEntry()

      case 2:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0090', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call Circuit_Ichikara_MiniGame.SoundStartDuckBgm()


        call CheckPoint_AddEvent()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call CourseReset()

        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0091', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck', 'Value': False})
        GameSystemActor.EventTriggerLeaveGameSafetySection()
        SoundSystemActor.EventStartSound({'SLinkKey': 'CheckPointOn', 'IsWaitEnd': True, 'TimeoutFrame': 0})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0097', 'IsNotOpenIfSkipedMostRecent': False})
      case 3:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0092', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void StartCheckOK() {
    goto Event354
}

void RaceCheckEntry() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA'}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0088', 'ChoiceNumber': 3, 'ChoiceLabel3': 13, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event508:

            call RaceCheck({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0080', 'GameDataNameCourseID': 'Circuit_Uotori_CourseB'})

          case 1:
            Event510:

            call RaceCheck({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0016', 'GameDataNameCourseID': 'Circuit_Uotori_CourseC'})

          case 2:
            Event560:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0098', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call choice()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB'}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0088', 'ChoiceLabel1': 7, 'ChoiceNumber': 3, 'ChoiceLabel3': 13, 'ChoiceLabel2': 11, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event490:

            call RaceCheck({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0014', 'GameDataNameCourseID': 'Circuit_Uotori_CourseA'})

          case 1:
            goto Event510
          case 2:
            goto Event560
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC'}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0088', 'ChoiceLabel1': 7, 'ChoiceLabel2': 10, 'ChoiceLabel3': 13, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            goto Event490
          case 1:
            goto Event508
          case 2:
            goto Event560
        }
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0088', 'ChoiceLabel1': 7, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 13, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            goto Event490
          case 1:
            goto Event508
          case 2:
            goto Event510
          case 3:
            goto Event560
        }
    }
}

void StartCheckNG() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0059', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'WorldPos': [2974.800048828125, 110.0, 3702.0], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveTime': 30, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'AtVector': [2975.449951171875, 109.0, 3708.0], 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0060', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})

    fork {
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0095', 'IsNotOpenIfSkipedMostRecent': False})
}

void RetryCheck() {
    GameSystemActor.EventTriggerRequestAutoSave()
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                Event537:
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0037', 'IsNotOpenIfSkipedMostRecent': False})

                call DataReset()

            } else
            switch SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryCheckDotZAndTargetDir({'TargetDir': [0.8799999952316284, 0.0, 0.46000000834465027]}) {
              case 0:
                goto Event537
              case [1, 2]:
                switch SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryCheckDotZAndTargetDir({'TargetDir': [-0.46000000834465027, 0.0, 0.8799999952316284]}) {
                  case 0:
                    goto Event537
                  case [1, 2]:
                    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0067', 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 23, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call DataReset()

                        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Index': -1}) {
                          case 0:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Index': -1, 'Value': 0})

                            call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0014', 'GameDataName_CourseID': 'Circuit_Uotori_CourseA', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0015', 'TimerLimit': 3600, 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseC_Playing'})

                          case 1:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 1, 'Index': -1})

                            call CourseChange({'TimerLimit': 3600, 'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0080', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0081', 'GameDataName_CourseID': 'Circuit_Uotori_CourseB', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseC_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseA_Playing'})

                          case 2:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 2, 'Index': -1})

                            call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0016', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0017', 'TimerLimit': 4500, 'GameDataName_CourseID': 'Circuit_Uotori_CourseC', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseB_Playing', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseC_Playing'})

                        }
                    } else {
                        goto Event537
                    }
                }
            }
        } else {
            goto Event537
        }
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'Giveup_Msg', 'IsNotOpenIfSkipedMostRecent': False})

        call DataReset()

    }
}

void ClothCheck() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': False}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void DoNotTakeItHandle_Circuit_Uotori() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 5, 'ActorFileName': ''}) {
        SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        call DoNotTakeItHandleDialogue_Circuit_Uotori()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event270:
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Link_TimeOver_Warp_Uotori', 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'PosVector': [2973.60009765625, 109.73999786376953, 3688.25], 'AtVector': [2976.5400390625, 108.8499984741211, 3690.10009765625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Event585:
        if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToSafeSpaceWithCombinedActor({'BaseRot': [-3.0, 20.0, -2.5], 'IsEnableFailDelete': False, 'EndHeightOffset': -5.0, 'IsEnableHitPlayer': True, 'StartHeightOffset': 2.0, 'BasePos': [2963.5400390625, 108.0, 3710.81005859375]}) {
                Event527:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player.EventPlayerOffStopMode()
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            } else
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToSafeSpaceWithCombinedActor({'IsEnableFailDelete': False, 'EndHeightOffset': -5.0, 'IsEnableHitPlayer': True, 'BasePos': [2968.02001953125, 108.0, 3720.050048828125], 'BaseRot': [0.0, 20.0, 0.0], 'StartHeightOffset': 5.0}) {
                goto Event527
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_isResetControlStick'})
                GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isResetControlStick', 'Value': False})
                goto Event527
            }
        } else {
            SpObj_ControlStick_A_02[Circuit_Uotori].EventWarpToHomeMatrix({'IsWaitEnd': True})
            goto Event527
        }
    } else
    if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
        SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }

    call DoNotTakeItHandleDialogue_Circuit_Uotori()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        goto Event270
    } else
    goto Event585
}

void DoNotTakeItHandleBuild_Circuit_Uotori() {

    call Common.AirStartUP_Player()


    call DoNotTakeItHandleDialogue_Circuit_Uotori()

}

void DoNotTakeItHandleDialogue_Circuit_Uotori() {
    Player.EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call InitTalk.InitTalkInAir({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotTakeItHandle_Circuit_Uotori_isFirstTalk'})
    && !Npc_HatenoVillage032[Uotori].EventQueryIsOnRecentTalkFlag() {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotTakeItHandle_Circuit_Uotori_isFirstTalk'})
    }
}

void ClothCheckBoatReady() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': False}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0038', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void WarpCheck() {
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerErasePauseMask()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_isResetDeadItems'})
    if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToRecordedPosWithCombinedActor({'StartHeightOffset': 10.0, 'EndHeightOffset': -5.0, 'IsSafeCheck': True, 'IsEnableHitPlayer': True}) {
        Event611:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isResetDeadItems', 'Value': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else
    if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryWarpToSafeSpaceWithCombinedActor({'BasePos': [2963.080078125, 108.0, 3709.9599609375], 'BaseRot': [-3.0, 20.0, -2.5], 'IsEnableFailDelete': False, 'StartHeightOffset': 20.0, 'EndHeightOffset': -5.0, 'IsEnableHitPlayer': True}) {
        goto Event611
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_isResetControlStick'})
        GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isResetControlStick', 'Value': False})
        goto Event611
    }
}

void CheckNoUpdateReward() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_RoastFish_09'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_RoastFish_09'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'})
            Event337:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0078', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_03'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName3': 'Item_PlantGet_A'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'})
            goto Event337
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Cook_D_09'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_InsectGet_O', 'MaterialActorName2': 'Item_InsectGet_O', 'MaterialActorName3': 'Item_InsectGet_O', 'MaterialActorName4': 'Item_Ore_H'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'})
            goto Event337
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    }
}

void choice() {
    goto Event496
}

void SoundStopRaceBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Minigame_Retire', 'TimeoutFrame': 60, 'IsWaitEnd': True})
}

void TimeUpdateCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA_Playing'}) {

        call UpdateRecord({'GameDataName_BestMinute': 'Circuit_Uotori_CourseA_BestTime_L', 'GameDataName_BestSecond': 'Circuit_Uotori_CourseA_BestTime_M', 'GameDataName_BestMilliSecond': 'Circuit_Uotori_CourseA_BestTime_S', 'IsNotFirstClear': 'Circuit_Uotori_CourseA_isFirstPlayed', 'UpdateNewsGameDataName': 'Uotori_Npc_SouthernVillage006_News_03'})

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB_Playing'}) {

        call UpdateRecord({'GameDataName_BestMinute': 'Circuit_Uotori_CourseB_BestTime_L', 'GameDataName_BestSecond': 'Circuit_Uotori_CourseB_BestTime_M', 'GameDataName_BestMilliSecond': 'Circuit_Uotori_CourseB_BestTime_S', 'IsNotFirstClear': 'Circuit_Uotori_CourseB_isFirstPlayed', 'UpdateNewsGameDataName': 'Uotori_Npc_SouthernVillage006_News_04'})

    } else {

        call UpdateRecord({'GameDataName_BestMinute': 'Circuit_Uotori_CourseC_BestTime_L', 'GameDataName_BestSecond': 'Circuit_Uotori_CourseC_BestTime_M', 'GameDataName_BestMilliSecond': 'Circuit_Uotori_CourseC_BestTime_S', 'IsNotFirstClear': 'Circuit_Uotori_CourseC_isFirstPlayed', 'UpdateNewsGameDataName': 'Uotori_Npc_SouthernVillage006_News_11'})

    }
}

void UpdateRecord() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsNotFirstClear'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 3, 'GameDataB': 'GameDataName_BestMinute'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 2, 'GameDataB': 'GameDataName_BestMinute'}) {
                Event679:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Uotori_TimeUpdate'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'UpdateNewsGameDataName'})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerMinute', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'GameDataName_BestMinute'})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerSecond', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'GameDataName_BestSecond'})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'GameDataName_BestMilliSecond'})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'GameDataName_BestSecond'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 2, 'GameDataB': 'GameDataName_BestSecond'}) {
                    goto Event679
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'Operator': 2, 'GameDataB': 'GameDataName_BestMilliSecond'}) {
                    goto Event679
                }
            }
        }
    } else {
        goto Event679
    }
}
