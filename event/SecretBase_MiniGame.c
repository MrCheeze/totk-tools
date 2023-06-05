-------- EventFlow: SecretBase_MiniGame --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice4', 'EventQueryHasRuppe', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerResetMiniGameScore', 'EventTriggerMiniGameTimerStop', 'EventShowFinish', 'EventTriggerUnshowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerEnableShowRecordUpdate', 'EventTriggerMiniGameIntBestScoreSetting', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerGetOff', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_Azito001
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Enemy_Army_Manager_007
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerArmyManagerRequestRetreat', 'EventTriggerArmyManagerRequestCreate', 'EventArmyManagerWaitUntilCreateFinish', 'EventTriggerArmyManagerActivate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Assassin_Middle_Azito001_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Assassin_Middle_Azito001_Talk'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3RewardKeep'}) {
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Armor_115_Head', 'Num': 1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_44', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3RewardKeep', 'Value': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Armor_115_Head'})

                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_45', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_40', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event132:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_04', 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event135:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event148:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                            Event7:

                            call MiniGameStart()

                        } else
                        if !GameSystemActor.EventQueryHasRuppe({'Value': 100}) {
                            GameSystemActor.EventTriggerIncreaseRupee({'Value': -100})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            Event19:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            goto Event7
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        }
                    } else {
                        goto Event19
                    }
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_36', 'IsNotOpenIfSkipedMostRecent': False})
                    Event26:

                    call AskAgain()

                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event132
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event129:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event135
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event136:
                        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 4, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 4, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            goto Event148
                          case 1:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event26
                          case 2:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event26
                          case 3:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        }
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_07', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event136
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event136
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Clear_Exam_GerudoCanyon_Adventure'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_Exam_GerudoCanyon_Adventure'}) {
                Event99:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event129
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Talked_Exam_GerudoCanyon_Adventure', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_35', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_19_2', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event129
            }
        } else {
            goto Event99
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Assassin_Middle_Azito001_Talk'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Clear_Exam_GerudoCanyon_Adventure'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_00_2', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        EventCamera.EventTriggerCameraSavePoint()
        Npc_Assassin_Middle_Azito001.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'TwnObj_City_GerudoThunderHelmet_A_02', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'TwnObj_City_GerudoThunderHelmet_A_02', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-3560.47998046875, 456.6099853515625, 1334.260009765625], 'AtVector': [-3560.360107421875, 454.95001220703125, 1336.4100341796875], 'Actor1ActorName': '', 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        Npc_Assassin_Middle_Azito001.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Assassin_Middle_Azito001'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_06', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event136
    }
}

void Ready_Npc_Assassin_Middle_Azito001_Near() {
    Event0:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/SecretBase_MiniGame:Near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Play_Npc_Assassin_Middle_Azito001_EachFrame() {
    Event260:
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_SecretBase_MiniGame', 'Value': 'Play'}) {
        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'AssassinSecretBase_MiniGameTimeOver', 'Value': True})

            call MiniGameEnd()

        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_Score', 'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord'})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                        Event10:
                        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                        goto Event260
                    } else
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 9}) {
                      case 0:
                        goto Event10
                      case [1, 2]:
                        Event152:

                        call MiniGameEnd()

                    }
                } else
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 6}) {
                  case 0:
                    goto Event10
                  case [1, 2]:
                    goto Event152
                }
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 3}) {
              case 0:
                goto Event10
              case [1, 2]:
                goto Event152
            }
        }
    }
}

void Retry_Npc_Assassin_Middle_Azito001_Talk() {
    goto Event1
}

void Retry_Npc_Assassin_Middle_Azito001_Near() {
    goto Event0
}

void TimeOver_Npc_Assassin_Middle_Azito001_StepStart() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga'}) {
        Event59:

        call Common.AirStartUP_Player()

        Player.EventTriggerParticipateEvent()
        Npc_Assassin_Middle_Azito001.EventTriggerParticipateEvent()
        Enemy_Army_Manager_007.EventTriggerParticipateEvent()
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'SecretBase_MiniGame_CurrentRecord', 'GameDataB': 'SecretBase_MiniGame_BestRecord', 'Operator': 2}) {
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_Score', 'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord'})
                ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'SecretBase_MiniGame_BestRecord'})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                    Event251:

                    call Sound_StopBgm()

                    ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
                    Event213:

                    fork {
                        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } {
                        Enemy_Army_Manager_007.EventTriggerArmyManagerRequestRetreat()
                    }

                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoAzito_Battle2', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CloseDoor', 'Value': False})
                    Player.EventTriggerPlayerGetOff()
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_Assassin_Middle_Azito001.EventAIScheduleWarpToAnchor({'InstanceName': '', 'AnchorType': 0, 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3566.0, 457.94000244140625, 1329.199951171875], 'AtVector': [-3561.2099609375, 455.0, 1333.510009765625], 'EnableCameraAlpha': False})
                    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_MiniGameEnd', 'IsWaitEnd': True, 'UseDemoWait': True})
                    Npc_Assassin_Middle_Azito001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Player.EventPlayerUnequip({'IsWaitEnd': True})
                    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
                    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

                    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    call Result()

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AssassinSecretBase_MiniGameTimeOver'}) {
                    Event254:

                    call Sound_StopBgm()

                    goto Event213
                } else {
                    goto Event251
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                Event252:

                call Sound_StopBgm()

                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
                goto Event213
            } else {
                goto Event254
            }
        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_Score', 'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord'})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord', 'DstGameDataName': 'SecretBase_MiniGame_BestRecord', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AssassinSecretBase_MiniGameTimeOver'}) {
                goto Event254
            } else {
                goto Event252
            }
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga', 'CheckHead': False})
    && !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
        goto Event59
    } else {

        call AssassinSecretBase.RoomNG3()

    }
}

void AskAgain() {
    goto Event129
}

void MiniGameStart() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoAzito_Battle2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'AssassinSecretBase_MiniGameTimeOver', 'Value': False})

    call Sound_StopInGameBgm()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Enemy_Army_Manager_007.EventTriggerArmyManagerRequestCreate()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_MiniGame_CloseDoor'})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'AnchorInstanceName': 'ActorDeleteAnchor', 'Radius': 23.0, 'Height': 23.0, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-3578.1201171875, 443.6300048828125, 1342.260009765625], 'AtVector': [-3575.75, 443.2699890136719, 1341.949951171875], 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_MiniGameStart', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Assassin_Middle_Azito001.EventAIScheduleWarpToAnchor({'InstanceName': '', 'AnchorType': 2, 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Enemy_Army_Manager_007.EventArmyManagerWaitUntilCreateFinish({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerResetMiniGameScore()

    call Common.EventTriggerShowReadyGoWithCountIn()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Enemy_Army_Manager_007.EventTriggerArmyManagerActivate()
    ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IsFinishedFirstTake': 'SecretBase_MiniGame_FirstTake', 'IntBestScore': 'SecretBase_MiniGame_BestRecord'})
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1800})
    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

    call Sound_StartBgm()

    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 4})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SecretBase_MiniGame', 'StepName': 'Play', 'IsWaitEnd': True})
}

void MiniGameEnd() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SecretBase_MiniGame', 'StepName': 'TimeOver'})
}

void BestRecord() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'SecretBase_MiniGame_CurrentRecord', 'GameDataB': 'SecretBase_MiniGame_BestRecord', 'Operator': 2}) {
            Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord', 'DstGameDataName': 'SecretBase_MiniGame_BestRecord', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SecretBase_MiniGame_FirstTake', 'Index': -1, 'Value': True})
    }
}

void Reward() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 0}) {
      case [0, 1]:

        call BestRecord()

        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 3}) {
          case 0:
            Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call BestRecord()

            Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Event70:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call BestRecord()

                Event75:
                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                    Event143:

                    call Rank1Reward()

                }
            } else {
                Event188:
                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_37', 'IsNotOpenIfSkipedMostRecent': False})

                call BestRecordNoTalk()

                goto Event75
            }
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 6}) {
              case 0:
                goto Event70
              case 1:
                Event196:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call BestRecord()

                        Event76:
                        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                                Event165:

                                call Rank2Reward()

                            }
                        } else {
                            goto Event143
                        }
                    } else {
                        Event189:
                        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_38', 'IsNotOpenIfSkipedMostRecent': False})

                        call BestRecordNoTalk()

                        goto Event76
                    }
                } else {
                    goto Event188
                }
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CurrentRecord', 'Value': 9}) {
                  case 0:
                    goto Event196
                  case [1, 2]:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
                                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call BestRecord()

                                Event77:
                                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward'}) {
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward'}) {
                                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {

                                            call Rank3Reward()

                                        }
                                    } else {
                                        goto Event165
                                    }
                                } else {
                                    goto Event143
                                }
                            } else {
                                Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})

                                call BestRecordNoTalk()

                                goto Event77
                            }
                        } else {
                            goto Event189
                        }
                    } else {
                        goto Event188
                    }
                }
            }
        }
    }
}

void OutField() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_Azito001.EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        fork {
            Npc_Assassin_Middle_Azito001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        }


        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkSurprise', 'ClothWarpMode': 0})
        } {
            Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        Event120:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-3578.1201171875, 443.6300048828125, 1342.260009765625], 'AtVector': [-3575.75, 443.2699890136719, 1341.949951171875], 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_MiniGameStart', 'IsWaitEnd': True, 'UseDemoWait': True})
        Npc_Assassin_Middle_Azito001.EventAIScheduleWarpToAnchor({'InstanceName': '', 'AnchorType': 2, 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    } else {

        fork {
            Npc_Assassin_Middle_Azito001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }


        fork {
            Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        goto Event120
    }
}

void GameCancel() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_06', 'IsUseSuspendFade': True})

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoAzito_Battle2', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_CloseDoor', 'Value': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SecretBase_MiniGame_FirstTake', 'Index': -1, 'Value': True})
    }
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SecretBase_MiniGame', 'IsWaitEnd': True, 'ChallengeStep': 'Retry'})
}

void Result() {

    call Reward()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3RewardKeep'}) {
        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
        Event192:
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SecretBase_MiniGame', 'IsWaitEnd': True, 'ChallengeStep': 'Retry'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward'}) {
        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event192
}

void Rank1Reward() {
    Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank1Reward', 'Value': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_06'})

    Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Rank2Reward() {
    Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank2Reward', 'Value': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_HiddenScroll_00'})

    Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Rank3Reward() {
    Npc_Assassin_Middle_Azito001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SecretBase_MiniGame:Talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Armor_115_Head', 'Num': 1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_Rank3Reward', 'Value': True})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Armor_115_Head'})

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_MiniGame_Rank3RewardKeep'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void BestRecordNoTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_MiniGame_FirstTake'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'SecretBase_MiniGame_CurrentRecord', 'GameDataB': 'SecretBase_MiniGame_BestRecord', 'Operator': 2}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'SecretBase_MiniGame_CurrentRecord', 'DstGameDataName': 'SecretBase_MiniGame_BestRecord', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SecretBase_MiniGame_FirstTake', 'Index': -1, 'Value': True})
    }
}

void Sound_StartBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_06'})
}

void Sound_StopBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'WithPlayableEvent': True, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Minigame_06'})
}

void Sound_StopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False, 'FadeType': 1})
}
