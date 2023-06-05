-------- EventFlow: Circuit_FaronWoods_MiniGame --------

Actor: Kibako_Contain_HorseRace[HorseRace]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventTriggerRequestChemicalRequestExtinguish', 'EventHorseRaceObjectWarpToStarterLinkAnchor', 'EventSetHorseRacePhysics', 'EventResetHorseRacePhysics']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': False, 'IsGrounding': True, 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Npc_FaronWoods010
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSelectSchedule', 'EventWarpOwnedHorse', 'EventTriggerRequestNpcTurnToPlayerInHorseRace', 'EventDeleteHorseRaceObjectReferencedByNPC']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryCheckCalcHorseRaceObjectReferencedByNPC']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataFloat']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataFloat', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventResetGimmick', 'EventOpenRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventCloseMessageDialog', 'EventEventFadeOut', 'EventWait', 'EventTriggerRequestAutoSave', 'EventWaitForActorPresence']
queries: ['EventQueryTalkChoice3', 'EventQueryCheckIsWildHorseAssociated', 'EventQueryIsLastRiddenAnimalOwnedHorse', 'EventQueryTalkChoice2', 'EventQueryHasRuppe', 'EventQueryCheckIsOwnedHorseAssociated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait', 'EventSuspend', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerProgressChallengeStep', 'EventTriggerResetMiniGameScore', 'EventTriggerShowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerMiniGameCalcElapsedTime']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventHorseEquipHorseTack', 'EventHorseConnectCouplerTo', 'EventHorseDisconnectCouplerFrom', 'EventWaitState', 'EventTriggerSetHorseTackNameToGameData', 'EventHorseEquipHorseTackFromGameData', 'EventTriggerRequestRideMe', 'EventResetChemicalStateNeutral']
queries: ['EventQueryHorsePower', 'EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace]
entrypoint: None()
actions: ['EventWarpToHomeMatrixWithCombinedActor', 'EventGoOffstageForUser', 'EventTriggerRequestChemicalRequestExtinguish', 'EventHorseRaceObjectWarpToStarterLinkAnchorWithCombinedActor', 'EventSetHorseRacePhysics', 'EventResetHorseRacePhysics']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerSetNpcVoiceFarMode', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodStick_A_LL_01_HorseRace[HorseRace]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerRequestChemicalRequestExtinguish', 'EventDoNothing']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

void Ready_Npc_FaronWoods010_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})


    call HorseWait()

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': False}) {
      case [0, 1, 4, 5, 8]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_RegisteredAssociation', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'}) {
                if !Npc_FaronWoods010.EventQueryIsOnRecentTalkFlag() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime'}) {
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_1200', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_1100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Event111:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call CheckBeforeStartGame()

                      case 1:
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_86', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoalFirstRace'}) {
                            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_89', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_1200', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call CheckBeforeStartGame()

                        } else {
                            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                      case 2:
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime'}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_1000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_1000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event111
            } else
            if !Npc_FaronWoods010.EventQueryHaveTalked() {
                if !Player.EventQueryCheckPlayerState({'State': 4}) {
                    Event481:
                    if Npc_FaronWoods010.EventQueryIsOnRecentTalkFlag() {
                        Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_11_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel3': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event10:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call CheckBeforeStartGame()

                      case 1:
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call CheckBeforeStartGame()

                        } else {
                            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                      case 2:
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
                    Event229:
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_41', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'GameRomHorseSaddle_07', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_42', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel3': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_43', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event10
                    } else {
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_66', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
                  case [0, 1, 2, 3, 8, 9, 10]:
                    goto Event229
                  case [4, 5, 6, 7]:
                    goto Event481
                }
            } else {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_10', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_10_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel3': 3, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_10_01', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event10
            }
        } else
        if !Npc_FaronWoods010.EventQueryHaveTalked() {
            if Npc_FaronWoods010.EventQueryIsOnRecentTalkFlag() {
                Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_11_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_3203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_10', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_3202', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 6, 7]:

        call RainTalk()

    }
}

void Ready_Npc_FaronWoods010_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 8]:
        Npc_FaronWoods010.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Near_0001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
      case [2, 3, 6, 7]:
        Npc_FaronWoods010.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Near_0010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void CheckBeforeStartGame() {
    if !Player.EventQueryCheckPlayerState({'State': 4}) {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
        switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 50.0, 'IsRidden': False}) {
          case [0, 1, 6, 7]:
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'GameRomHorseSaddle_07', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

                call LupeePay()

            } else {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_66', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [2, 4, 5]:
            Event154:
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_65', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
      case [0, 2, 8, 10]:
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_50', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [1, 3, 9]:
        goto Event154
      case [4, 5, 6]:
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_60', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Rule_FirstTime() {

    fork {
        Npc_FaronWoods010.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_81', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_82', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_83', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 40, 'PosVector': [456.239990234375, 164.1199951171875, 3468.18994140625], 'AtVector': [451.739990234375, 163.94000244140625, 3474.590087890625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'PosVector': [392.25, 166.88999938964844, 3555.070068359375], 'AtVector': [386.25, 166.2899932861328, 3550.1201171875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'PosVector': [337.6300048828125, 165.94000244140625, 3516.449951171875], 'AtVector': [335.17999267578125, 165.27000427246094, 3508.9599609375], 'TargetFovy': 50.0, 'MoveTime': 35, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'EndRecelerateRate': 0.10000000149011612, 'PosVector': [325.989990234375, 163.9499969482422, 3463.3798828125], 'AtVector': [321.4599914550781, 163.64999389648438, 3455.510009765625], 'TargetFovy': 50.0, 'MoveTime': 35, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': False, 'PosVector': [292.9599914550781, 162.61000061035156, 3416.610107421875], 'AtVector': [296.7200012207031, 162.27999877929688, 3406.570068359375], 'TargetFovy': 50.0, 'EndRecelerateRate': 0.0, 'MoveTime': 35, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [309.45001220703125, 162.08999633789062, 3364.43994140625], 'AtVector': [319.79998779296875, 161.6699981689453, 3361.6298828125], 'TargetFovy': 50.0, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'MoveTime': 45, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [411.32000732421875, 162.97000122070312, 3339.800048828125], 'AtVector': [416.7099914550781, 162.72000122070312, 3345.389892578125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'PosVector': [462.6000061035156, 161.42999267578125, 3388.85009765625], 'AtVector': [461.5, 161.1199951171875, 3394.52001953125], 'TargetFovy': 50.150001525878906, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 60, 'PosVector': [448.92999267578125, 158.9199981689453, 3461.72998046875], 'AtVector': [446.1000061035156, 156.27999877929688, 3471.820068359375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    fork {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_84', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_86', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoalFirstRace'}) {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_89', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }

}

void LupeePay() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_70', 'ChoiceLabel1': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_72', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            if Player.EventQueryCheckPlayerState({'State': 0}) {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_74', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call SoundStopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Game', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Circuit_FaronWoods_MiniGame'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_CreateCheckPoint'})
            LastRiddenAnimal_ForEvent.EventTriggerSetHorseTackNameToGameData({'HorseTackType': 2, 'GameDataKey': 'MiniGame_HorseRace_LastEquippedSaddle'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call WaitForCreateObject()

            EventSystemActor.EventTransition({'EventName': 'Prepare_Wagon_Kibako', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_71', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Game_Npc_FaronWoods010_Talk() {
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'HorseRace_GiveUpEvent'})
}

void Game_Npc_FaronWoods010_EachFrame() {
    Event315:
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Game', 'GameDataName': 'Step_Circuit_FaronWoods_MiniGame', 'Index': -1}) {
        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying'})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUp', 'Value': True})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'TimeOver', 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True})
            Event173:
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event315
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
            goto Event173
        } else {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_FallOff'})
            goto Event173
        }
    }
}

void MiniGameReset() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void MiniGame_HorseRace_CourseOut() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'TargetFovy': 40.0, 'PosVector': [-1.1799999475479126, 2.9200000762939453, 6.889999866485596], 'AtVector': [-0.009999999776482582, 0.6899999976158142, 0.5899999737739563], 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_200', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_201', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void MiniGame_HorseRace_DropEverything() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'TargetFovy': 40.0, 'PosVector': [-1.1799999475479126, 2.9200000762939453, 6.889999866485596], 'AtVector': [-0.009999999776482582, 0.6899999976158142, 0.5899999737739563], 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_400', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_401', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void Result() {
    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Hebra_SkyRingChallenge.SoundStartInGameBgm()

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_501', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call ScoreCheck()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_GoalFirstRace', 'Index': -1, 'Value': True})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void RainTalk() {
    if !Npc_FaronWoods010.EventQueryHaveTalked() {
        if Npc_FaronWoods010.EventQueryIsOnRecentTalkFlag() {
            Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_11_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'}) {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_3200', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_3100', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_FaronWoods010.EventTalk({'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_10', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_3000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void TimeOver_Npc_FaronWoods010_StepStart() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'PosVector': [0.14000000059604645, 3.3499999046325684, -7.369999885559082], 'AtVector': [0.23999999463558197, -0.23000000417232513, -1.6100000143051147], 'TargetFovy': 50.0, 'MoveTime': 0})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_300', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_301', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void Retry_AfterGoal() {
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_800', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 10.0, 'IsRidden': False}) {
          case [0, 1, 6, 7]:
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_810', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Retry', 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'IsIgnoreChallengeProgressUI': True})

            call LupeePay_AfterGame()

          case [2, 3, 4, 5]:
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event293:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call DeleteCourseActors()

            LastRiddenAnimal_ForEvent.EventHorseEquipHorseTackFromGameData({'HorseTackType': 2, 'GameDataKey': 'MiniGame_HorseRace_LastEquippedSaddle', 'IsWaitEnd': True})
            Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 1, 'EnableArrivalState': False})
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_OverReturnToField_Link', 'UseDemoWait': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [493.5199890136719, 155.16000366210938, 3446.659912109375], 'AtVector': [500.3699951171875, 154.3800048828125, 3447.31005859375], 'TargetFovy': 55.0, 'MoveTime': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'StepName': 'Retry', 'IsIgnoreChallengeProgressUI': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call ExitGame()

        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_820', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event293
    }
}

void MiniGame_HorseRace_FallOff() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'PosVector': [4.429999828338623, 3.140000104904175, -5.449999809265137], 'AtVector': [0.3100000023841858, 1.2000000476837158, -0.41999998688697815], 'TargetFovy': 40.0, 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_420', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_421', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void Horserace_Goal() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying', 'Value': False})

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call HorseWait()


    call TotalFlagReset()


    call TimeCheck()


    call SoundStopRaceBgm_Goal()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'}) {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
    } else {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    }
    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_500', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset_Goal()

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call Result()


    call Retry_AfterGoal()

}

void TimeCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_RecordtheTime'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_HorseRace_ResultMinute', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMinute'}) {
            Event412:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'})
            Event45:
            ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerMinute': 'MiniGame_HorseRace_ResultMinute', 'ElapsedTimerSecond': 'MiniGame_HorseRace_ResultSecond', 'ElapsedTimerMilliSecond': 'MiniGame_HorseRace_ResultMiliSecond', 'LimitTimerValue': 'MiniGame_HorseRace_TimeLimit', 'ElapsedTimerValue': 'MiniGame_HorseRace_ResultFlame'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'MiniGame_HorseRace_ResultMinute', 'GameDataA': 'MiniGame_TimerMinute'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_HorseRace_ResultSecond', 'Operator': 4, 'GameDataA': 'MiniGame_TimerSecond'}) {
                goto Event412
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'MiniGame_HorseRace_ResultSecond', 'GameDataA': 'MiniGame_TimerSecond'})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_HorseRace_ResultMiliSecond', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond'}) {
                goto Event412
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_RecordtheTime', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'})
        goto Event45
    }
}

void PlayerReset() {
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})

    call DisconnectCoupler()


    call TemporaryTakeOffObject()

    Npc_FaronWoods010.EventWarpOwnedHorse({'InstanceName': 'HorseRace_PostRaceTalk_HorseOnly'})

    fork {
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_PostRaceTalk_Link', 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_FaronWoods010', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'HorseRace_PostRaceTalk_Blinka', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 0, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call ReCreateForLogic()

    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})

    call CancelChemical()


    call PhysicsReset()


    call TemporaryTakeOffObject()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [440.04998779296875, 156.08999633789062, 3473.72998046875], 'AtVector': [444.82000732421875, 155.75999450683594, 3472.2900390625], 'TargetFovy': 40.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void ScoreCheck() {
    switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'MiniGame_TimerValue', 'Value': 2700.0}) {
      case 0:
        switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'MiniGame_TimerValue', 'Value': 1800.0}) {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime', 'Index': -1}) {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_2200', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_510', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'})
            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoalFirstRace'}) {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_534', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_704', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime', 'Index': -1}) {

                call HorseInnMaster.Point_GetFlow({'AddPoint': 3, 'DecrementPoint': -3})

            } else {

                call HorseInnMaster.Point_GetFlow({'AddPoint': 3, 'DecrementPoint': -3})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime'})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_GoodScore_FirstTime', 'Index': -1}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_701', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call HorseInnMaster.Point_GetFlow({'AddPoint': 2, 'DecrementPoint': -2})

                } else {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_705', 'IsNotOpenIfSkipedMostRecent': False})

                    call HorseInnMaster.Point_GetFlow({'AddPoint': 3, 'DecrementPoint': -3})

                }
            }
          case [1, 2]:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime', 'Index': -1}) {
                Event225:
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_703', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_GoodScore_FirstTime', 'Index': -1}) {

                    call HorseInnMaster.Point_GetFlow({'AddPoint': 2, 'DecrementPoint': -2})

                } else {

                    call HorseInnMaster.Point_GetFlow({'AddPoint': 2, 'DecrementPoint': -2})

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_GoodScore_FirstTime'})
                    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime', 'Index': -1}) {
                        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_702', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

                    }
                }
            } else
            switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'MiniGame_TimerValue', 'Value': 2100.0}) {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoodScoreA_FirstTime'}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_520', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_614', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_GoodScoreA_FirstTime'})
                Event357:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoalFirstRace'}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_534', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event225
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'MiniGame_TimerValue', 'Value': 2400.0}) {
                  case 0:
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_522', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event357
                  case [1, 2]:
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_523', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event357
                }
            }
        }
      case [1, 2]:
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_530', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoalFirstRace'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate'}) {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_533', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event99:
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_700', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_615', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event99
        }
    }
}

void FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_CourseOut'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUp'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_DropEverything'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_FallOff'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint3'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint4'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint5'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint6'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint7'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint8'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint9'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint10'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPointALL'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CheckPoint_1to9'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void LupeePay_AfterGame() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_70', 'ChoiceLabel1': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_72', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call SoundStopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call CancelChemical()

            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Game', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Circuit_FaronWoods_MiniGame'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_CreateCheckPoint'})
            LastRiddenAnimal_ForEvent.EventTriggerRequestRideMe({'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventSystemActor.EventTransition({'EventName': 'Prepare_Wagon_Kibako', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_71', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event392:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call Circuit_Ichikara_MiniGame.SoundStartDuckBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call DeleteCourseActors()

            LastRiddenAnimal_ForEvent.EventHorseEquipHorseTackFromGameData({'HorseTackType': 2, 'GameDataKey': 'MiniGame_HorseRace_LastEquippedSaddle', 'IsWaitEnd': True})
            Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 1, 'EnableArrivalState': False})
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_OverReturnToField_Link', 'UseDemoWait': True})
            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [493.5199890136719, 155.16000366210938, 3446.659912109375], 'AtVector': [500.3699951171875, 154.3800048828125, 3447.31005859375], 'TargetFovy': 55.0, 'MoveTime': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Event395:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Retry', 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'IsIgnoreChallengeProgressUI': False})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call ExitGame()

            } else {
                Npc_FaronWoods010.EventWarpOwnedHorse({'InstanceName': 'HorseRace_OverReturnToField_HorseOnly'})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.8899999856948853, -5.369999885559082], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                goto Event395
            }
        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event392
    }
}

void HorseRace_GiveUpEvent() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call HorseWait()

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_101', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_103', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call SoundStopRaceBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call MiniGameReset()


            call PlayerReset_GiveUp()


            call DeleteCourseActors()

            LastRiddenAnimal_ForEvent.EventHorseEquipHorseTackFromGameData({'HorseTackType': 2, 'GameDataKey': 'MiniGame_HorseRace_LastEquippedSaddle', 'IsWaitEnd': True})
            Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 1, 'EnableArrivalState': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerWait({'IsWaitEnd': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 0.2199999988079071, -6.820000171661377], 'AtVector': [0.0, -0.5, 0.009999999776482582], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Retry', 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'IsIgnoreChallengeProgressUI': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call ExitGame()

        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_102', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_104', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    }
}

void TotalFlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeUpdate', 'Value': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void ExitGame() {
    GameSystemActor.EventTriggerRequestAutoSave()
}

void MiniGame_HorseRace_HarnessDisconnected() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'TargetFovy': 40.0, 'PosVector': [-1.1799999475479126, 2.9200000762939453, 6.889999866485596], 'AtVector': [-0.009999999776482582, 0.6899999976158142, 0.5899999737739563], 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_451', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_452', 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void PurgeEnemies() {
    GameSystemActor.EventResetGimmick({'Option': 0, 'IsWaitEnd': True, 'IsResetCamera': False})
}

void MiniGame_HorseRace_BoxSmashed() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'TargetFovy': 40.0, 'PosVector': [-1.1799999475479126, 2.9200000762939453, 6.889999866485596], 'AtVector': [-0.009999999776482582, 0.6899999976158142, 0.5899999737739563], 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_453', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_454', 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void MiniGame_HorseRace_WagonBroken() {

    call RaceEndToFailure()


    call RaceEndToFailure_FixedCamera({'TargetFovy': 40.0, 'PosVector': [-1.1799999475479126, 2.9200000762939453, 6.889999866485596], 'AtVector': [-0.009999999776482582, 0.6899999976158142, 0.5899999737739563], 'MoveTime': 20})

    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_455', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGameReset()


    call PlayerReset()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_FaronWoods010")})

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_456', 'IsNotOpenIfSkipedMostRecent': False})

    call Retry_AfterFailure()

}

void DeleteCourseActors() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_CreateCheckPoint'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Game_Npc_FaronWoods010_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_CheckPoint_1to9'}) {
        Npc_FaronWoods010.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Near_0011', 'NotOverriddenByInterestBalloon': True})
        Npc_FaronWoods010.EventTriggerRequestNpcTurnToPlayerInHorseRace()
    }
}

void PhysicsSetting() {
    switch LastRiddenAnimal_ForEvent.EventQueryHorsePower() {
      case [1, 2]:
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 0.75, 'Mass': 250.0, 'IsWaitEnd': True})
        Kibako_Contain_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 1.0, 'Mass': 750.0, 'IsWaitEnd': True})
      case 3:
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 0.800000011920929, 'Mass': 300.0, 'IsWaitEnd': True})
        Kibako_Contain_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 1.0, 'Mass': 750.0, 'IsWaitEnd': True})
      case 4:
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 1.0, 'Mass': 1000.0, 'IsWaitEnd': True})
        Kibako_Contain_HorseRace[HorseRace].EventSetHorseRacePhysics({'Mass': 750.0, 'FrictionScale': 2.0, 'IsWaitEnd': True})
      case 5:
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 1.25, 'Mass': 1500.0, 'IsWaitEnd': True})
        Kibako_Contain_HorseRace[HorseRace].EventSetHorseRacePhysics({'FrictionScale': 2.0, 'Mass': 750.0, 'IsWaitEnd': True})
    }
}

void PhysicsReset() {
    AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventResetHorseRacePhysics({'IsWaitEnd': True})
    Kibako_Contain_HorseRace[HorseRace].EventResetHorseRacePhysics({'IsWaitEnd': True})
}

void SoundStartRaceBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'BGMName': 'BGM_Minigame_02', 'IsReleaseDucking': True})
}

void SoundStopRaceBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
}

void SoundStopRaceBgm_Goal() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': False})
}

void PlayerReset_Goal() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})

    call DisconnectCoupler()


    call TemporaryTakeOffObject()


    fork {

        call MountHorseIfPossible()

        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_PostGoalTalk_Link', 'UseDemoWait': True})
    } {
        Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'InstanceName': 'HorseRace_PostGoalTalk_Blinka', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 0, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call ReCreateForLogic()

    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})

    call CancelChemical()


    call PhysicsReset()


    call TemporaryTakeOffObject()

    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_PostGoalTalk_Link', 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [448.3699951171875, 156.57000732421875, 3475.800048828125], 'AtVector': [444.8399963378906, 156.3000030517578, 3472.27001953125], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void ReCreateForLogic() {
    Npc_FaronWoods010.EventDeleteHorseRaceObjectReferencedByNPC({'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call WaitForCreateObject()

    EventRequestActor.EventTriggerSetEventBool({'Bool': False})
}

void SoundStopRaceBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'TimeoutFrame': 60, 'SLinkKey': 'Dm_Minigame_Retire', 'IsWaitEnd': True})
}

void PlayerReset_GiveUp() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})

    call DisconnectCoupler()


    call PhysicsReset()


    call CancelChemical()

    AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventHorseRaceObjectWarpToStarterLinkAnchorWithCombinedActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_TempWagonWarpPoint', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Kibako_Contain_HorseRace[HorseRace].EventHorseRaceObjectWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_TempWagonWarpPoint', 'PositionOffset': [0.0, 0.5, 0.0], 'IsWaitEnd': True, 'YAngle': 0.0})
    AsbObj_WoodStick_A_LL_01_HorseRace[HorseRace].EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Kibako_Contain_HorseRace[HorseRace].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void TemporaryTakeOffObject() {
    if !Npc_FaronWoods010.EventQueryCheckCalcHorseRaceObjectReferencedByNPC({'ActorName': 'Kibako_Contain_HorseRace', 'InstanceName': 'HorseRace'}) {
        Kibako_Contain_HorseRace[HorseRace].EventHorseRaceObjectWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_TempWagonWarpPoint', 'PositionOffset': [0.0, 0.5, 0.0], 'IsWaitEnd': True, 'YAngle': 0.0})
    }
    if !Npc_FaronWoods010.EventQueryCheckCalcHorseRaceObjectReferencedByNPC({'InstanceName': 'HorseRace', 'ActorName': 'AsbObj_WoodSquare_A_M_01_HorseRace'}) {
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventHorseRaceObjectWarpToStarterLinkAnchorWithCombinedActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_TempWagonWarpPoint', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }
    if !Npc_FaronWoods010.EventQueryCheckCalcHorseRaceObjectReferencedByNPC({'ActorName': 'Kibako_Contain_HorseRace', 'InstanceName': 'HorseRace'}) {
        Kibako_Contain_HorseRace[HorseRace].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }
    if !Npc_FaronWoods010.EventQueryCheckCalcHorseRaceObjectReferencedByNPC({'InstanceName': 'HorseRace', 'ActorName': 'AsbObj_WoodStick_A_LL_01_HorseRace'}) {
        AsbObj_WoodStick_A_LL_01_HorseRace[HorseRace].EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }
    if !Npc_FaronWoods010.EventQueryCheckCalcHorseRaceObjectReferencedByNPC({'InstanceName': 'HorseRace', 'ActorName': 'AsbObj_WoodSquare_A_M_01_HorseRace'}) {
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }
}

void DisconnectCoupler() {
    LastRiddenAnimal_ForEvent.EventHorseDisconnectCouplerFrom({'IsWaitEnd': True, 'IsWaitForComplete': True})
}

void CancelChemical() {

    fork {
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventTriggerRequestChemicalRequestExtinguish({'IsRequestToAllCombinedActors': False})
        Kibako_Contain_HorseRace[HorseRace].EventTriggerRequestChemicalRequestExtinguish({'IsRequestToAllCombinedActors': False})
        AsbObj_WoodStick_A_LL_01_HorseRace[HorseRace].EventTriggerRequestChemicalRequestExtinguish({'IsRequestToAllCombinedActors': False})
    } {
        LastRiddenAnimal_ForEvent.EventResetChemicalStateNeutral({'IsWaitEnd': True})
    }

}

void RaceEndToFailure() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying'})

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call HorseWait()


    call SoundStopRaceBgmWithFue()

    Player.EventTriggerParticipateEvent()
    Npc_FaronWoods010.EventTriggerParticipateEvent()
}

void Retry_AfterFailure() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_PlayedRace', 'Index': -1, 'Value': True})

    call FlagReset()


    call Hebra_SkyRingChallenge.SoundStartInGameBgm()

    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_450', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 10.0, 'IsRidden': False}) {
          case [0, 1, 6, 7]:

            call LupeePay_AfterGame()

          case [2, 3, 4, 5]:
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event699:

            call Circuit_Ichikara_MiniGame.SoundStartDuckBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call DeleteCourseActors()

            LastRiddenAnimal_ForEvent.EventHorseEquipHorseTackFromGameData({'HorseTackType': 2, 'GameDataKey': 'MiniGame_HorseRace_LastEquippedSaddle', 'IsWaitEnd': True})
            Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 1, 'EnableArrivalState': False})
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRace_OverReturnToField_Link', 'UseDemoWait': True})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerWait({'IsWaitEnd': False})
            Npc_FaronWoods010.EventWarpOwnedHorse({'InstanceName': 'HorseRace_OverReturnToField_HorseOnly'})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.8899999856948853, -5.369999885559082], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Retry', 'ChallengeName': 'Circuit_FaronWoods_MiniGame', 'IsIgnoreChallengeProgressUI': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call ExitGame()

        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_830', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event699
    }
}

void Prepare_Wagon_Kibako() {

    call Check_MiniChallenge()

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'}) {

        fork {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_73', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_Circuit_FaronWoods_Minigame_Prepare_First', 'IsIgnoreDucking': False})
        }

    }

    fork {

        call PhysicsSetting()


        call WaitForCreateObject()

        AsbObj_WoodStick_A_LL_01_HorseRace[HorseRace].EventDoNothing({'IsWaitEnd': True})

        call DisconnectCoupler()

        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRaceStartPoint', 'UseDemoWait': True})
        AsbObj_WoodSquare_A_M_01_HorseRace[HorseRace].EventWarpToHomeMatrixWithCombinedActor({'IsWaitEnd': True})
        Kibako_Contain_HorseRace[HorseRace].EventWarpToHomeMatrix({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseEquipHorseTack({'HorseTack': 2, 'Actor': 'GameRomHorseSaddle_07', 'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseConnectCouplerTo({'IsWaitEnd': True, 'TargetActorInstanceName': 'HorseRace', 'TargetActorName': 'AsbObj_WoodSquare_A_M_01_HorseRace', 'AliasEntity': 0, 'PivotPosLocal': [0.0, 0.0, 1.899999976158142]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Kibako_Contain_HorseRace[HorseRace].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'AsbObj_WoodSquare_A_M_01_HorseRace', 'InstanceName': 'HorseRace', 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.10000000149011612, -0.4729999899864197]})
    } {
        Npc_FaronWoods010.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_FaronWoods010.EventTriggerAIScheduleSelectSchedule()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_FaronWoods010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    call PurgeEnemies()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'LongShiftRange': 0.0, 'MoveTime': 1, 'PosVector': [448.92999267578125, 158.9199981689453, 3461.72998046875], 'AtVector': [446.1000061035156, 156.27999877929688, 3471.820068359375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_Circuit_FaronWoods_Minigame_Prepare_First', 'GroupName': '', 'FadeFrame': -1})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'}) {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_90', 'ChoiceLabel1': 2, 'ChoiceLabel2': 7, 'ChoiceDefaultNo': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event253:

            call Rule_FirstTime()

            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_87', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event133:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime'}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_95', 'IsNotOpenIfSkipedMostRecent': False})
                    Event86:
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 10, 'PosVector': [448.8500061035156, 156.92999267578125, 3461.469970703125], 'AtVector': [446.0799865722656, 155.99000549316406, 3471.820068359375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    Player.EventTriggerPlayerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 6, 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1})
                    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                    call FlagReset()

                    ChallengeSystemActor.EventTriggerResetMiniGameScore()

                    call Common.EventTriggerShowReadyGoWithCountIn()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_isnowPlaying', 'Value': True})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 5})
                    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 5400})
                    GameDataActor.EventTriggerSetGameDataFloat({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_TimeLimit', 'Value': 5400.0})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                    call SoundStartRaceBgm()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_PlayedRace'})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_GoodScore_FirstTime'}) {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_89', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_88', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event86
            } else {
                goto Event253
            }
        } else {
            Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_91', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_ExcellentScore_FirstTime'}) {
                Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_92', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event133
        }
    } else {
        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_80', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event44:

        call Rule_FirstTime()

        Npc_FaronWoods010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_FaronWoods_MiniGame:Talk_87', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event133
        } else {
            goto Event44
        }
    }
}

void WaitForCreateObject() {
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Kibako_Contain_HorseRace', 'InstanceName': 'HorseRace', 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'InstanceName': 'HorseRace', 'IsWaitEnd': True, 'ActorName': 'AsbObj_WoodStick_A_LL_01_HorseRace'})
    GameSystemActor.EventWaitForActorPresence({'InstanceName': 'HorseRace', 'IsWaitEnd': True, 'ActorName': 'AsbObj_WoodSquare_A_M_01_HorseRace'})
}

void MountHorseIfPossible() {
    if !Player.EventQueryCheckPlayerState({'State': 4})
    && GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 50.0, 'IsRidden': False}) in [0, 1, 6, 7] {
        LastRiddenAnimal_ForEvent.EventTriggerRequestRideMe({'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }
}

void RaceEndToFailure_FixedCamera() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': 'PosVector', 'AtVector': 'AtVector', 'TargetFovy': 'TargetFovy', 'MoveTime': 'MoveTime'})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'Actor1ActorName': 'Player', 'PosVector': [4.429999828338623, 3.140000104904175, -5.449999809265137], 'AtVector': [0.3100000023841858, 1.2000000476837158, -0.41999998688697815], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}

void HorseWait() {
    if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
        LastRiddenAnimal_ForEvent.EventWaitState({'IsWaitEnd': True, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': False, 'IsNoMorph': False})
    }
}

void Check_MiniChallenge() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra03_Step02_AlreadyTalktoHyruleDepthHatago001'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra03_LeavetheZone'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra03_Step02_AlreadyTalktoHyruleDepthHatago001', 'Value': False, 'Index': -1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}
