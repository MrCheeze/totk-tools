-------- EventFlow: ZonauReliefSearch --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerSetIsShowSheikahCameraTarget', 'EventExecuteProgressChallengeStep']
queries: ['EventQueryHasTargetPhotograph', 'EventQueryHasChallengeTargetPhotograph', 'EventQueryIsShowSheikahCameraTarget']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitFrameOrInput', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMinusMenu', 'EventShowPhotograph']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_AncientAssistant005
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp002
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCampSoldier_Hylia002
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp012
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp006
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage030
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_AncientAssistant001
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventWait', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Check_HavePicture() {
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_03', 'StepName': 'Step1'}) {
        Event397:
        if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_04', 'StepName': 'Step1'}) {
            Event398:
            if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_05', 'StepName': 'Step1'}) {
                Event399:
                if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_06', 'StepName': 'Step1'}) {
                    Event400:
                    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_07', 'StepName': 'Step1'}) {
                        Event54:
                        if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_08', 'StepName': 'Step1'}) {
                            Event55:
                            if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_09', 'StepName': 'Step1'}) {
                                Event56:
                                if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_10', 'StepName': 'Step1'}) {
                                    Event57:
                                    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_11', 'StepName': 'Step1'}) {
                                        Event58:
                                        if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_12', 'StepName': 'Step1'}) {
                                            Event401:
                                            if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_13', 'StepName': 'Step1'}) {
                                                Event402:
                                                if ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_14', 'StepName': 'Step1'})
                                                && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_14'}) {

                                                    call InTranslation()

                                                    GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_14'})

                                                    call InTranslation2()

                                                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_29', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                                    call Know_Minel()

                                                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_108', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_14', 'StepName': 'Step1'})
                                                    Event211:
                                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZonauReliefSearch_ShowNow'})
                                                    GameSystemActor.EventWaitFrameOrInput({'IsWaitEnd': True, 'Frames': 1})

                                                    call Reward()

                                                }
                                            } else
                                            if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_13'}) {

                                                call InTranslation()

                                                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_13'})

                                                call InTranslation2()

                                                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_28', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                                call Know_Minel()

                                                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_107', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_13', 'StepName': 'Step1'})
                                                goto Event211
                                            } else
                                            goto Event402
                                        } else
                                        if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_12'}) {

                                            call InTranslation()

                                            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_12'})

                                            call InTranslation2()

                                            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                            call Know_Minel()

                                            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_101', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_12', 'StepName': 'Step1'})
                                            goto Event211
                                        } else
                                        goto Event401
                                    } else
                                    if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_11'}) {

                                        call InTranslation()

                                        GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_11'})

                                        call InTranslation2()

                                        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_11', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_27', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_11', 'StepName': 'Step1'})
                                        goto Event211
                                    } else
                                    goto Event58
                                } else
                                if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_10'}) {

                                    call InTranslation()

                                    GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_10'})

                                    call InTranslation2()

                                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_10', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_26', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_10', 'StepName': 'Step1'})
                                    goto Event211
                                } else
                                goto Event57
                            } else
                            if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_09'}) {

                                call InTranslation()

                                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_09'})

                                call InTranslation2()

                                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_09', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call Know_Minel()

                                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_09', 'StepName': 'Step1'})
                                goto Event211
                            } else
                            goto Event56
                        } else
                        if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_08'}) {

                            call InTranslation()

                            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_08'})

                            call InTranslation2()

                            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_08', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_24', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_08', 'StepName': 'Step1'})
                            goto Event211
                        } else
                        goto Event55
                    } else
                    if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_07'}) {

                        call InTranslation()

                        GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_07'})

                        call InTranslation2()

                        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_07', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call Know_Minel()

                        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_19', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_07', 'StepName': 'Step1'})
                        Event256:
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZonauReliefSearch_ShowNow'})
                        GameSystemActor.EventWaitFrameOrInput({'IsWaitEnd': True, 'Frames': 1})

                        call Reward()

                    } else
                    goto Event54
                } else
                if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_06'}) {

                    call InTranslation()

                    GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_06'})

                    call InTranslation2()

                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_06', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_18', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_06', 'StepName': 'Step1'})
                    goto Event256
                } else
                goto Event400
            } else
            if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_05'}) {

                call InTranslation()

                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_05'})

                call InTranslation2()

                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_17', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_05', 'StepName': 'Step1'})
                goto Event256
            } else
            goto Event399
        } else
        if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_04'}) {

            call InTranslation()

            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_04'})

            call InTranslation2()

            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_04', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_16', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_04', 'StepName': 'Step1'})
            goto Event256
        } else
        goto Event398
    } else
    if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_03'}) {

        call InTranslation()

        GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'Obj_Zonau_RockRelief_A_03'})

        call InTranslation2()

        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_03', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerSetIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_03', 'StepName': 'Step1'})
        goto Event256
    } else
    goto Event397
}

void Check_CLEAR() {
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_03', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_04', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_05', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_06', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_07', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_08', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_09', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_10', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_11', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_12', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_13', 'StepName': 'Step1'})
    && !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_14', 'StepName': 'Step1'}) {
        Npc_AncientAssistant005.EventTalk({'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})

        fork {
            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_102', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }


        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_08'})

        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_43', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': ''})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Decorate()

        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RemovedLaboratoryRubble', 'Index': -1}) {

            fork {
                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_40', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'RemovedLaboratoryRubble', 'Value': True})
            } {
                SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_ZonauReliefSearch_CleanRoom', 'TimeoutFrame': 60, 'IsWaitEnd': True})
            }

        }
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_ZonauReliefSearch_HangRelief', 'IsWaitEnd': True, 'TimeoutFrame': 0})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_44', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_103', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'ZonauReliefSearch', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    } else
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'ZonauReliefSearch', 'StepName': 'Step1', 'IgnoreShowedTarget': True}) {
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0006', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_20', 'ChoiceLabel1': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call ToCheck_havePicture()

        } else
        Event177:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZonauReliefSearch_ShowPictureRoom', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZonauReliefSearch_ShowNow'}) {
                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_22', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call Decorate()

                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_ZonauReliefSearch_HangRelief', 'IsWaitEnd': True, 'TimeoutFrame': 0})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_41', 'IsNotOpenIfSkipedMostRecent': False})
                Event182:
                Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_33', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZonauReliefSearch_ShowNow', 'Value': False, 'Index': -1})
            } else {
                goto Event182
            }
        } else {
            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_22', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': ''})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Decorate()

            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RemovedLaboratoryRubble', 'Index': -1}) {

                fork {
                    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_40', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'RemovedLaboratoryRubble', 'Value': True})
                } {
                    SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_ZonauReliefSearch_CleanRoom', 'TimeoutFrame': 60, 'IsWaitEnd': True})
                }

            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_ZonauReliefSearch_HangRelief', 'IsWaitEnd': True, 'TimeoutFrame': 0})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
            EventCamera.EventTriggerCameraSavePoint()
            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_31', 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False})

            fork {
                Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'WorldPos': [1842.2900390625, 223.27000427246094, 952.8800048828125], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'WorldPos': [1842.2900390625, 223.27000427246094, 952.8800048828125], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1833.3199462890625, 225.08999633789062, 956.969970703125], 'AtVector': [1835.81005859375, 225.0, 956.1099853515625], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_32', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})

            fork {
                Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [1842.2900390625, 223.27000427246094, 952.8800048828125], 'Target': 2, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [1842.2900390625, 223.27000427246094, 952.8800048828125], 'Target': 3, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_AncientAssistant005'})
            }

            Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_33', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZonauReliefSearch_ShowPictureRoom', 'Index': -1, 'Value': True})
        }
    } else {
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0006', 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0040', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event177
    }
}

void Check_ZonauReliefSearch() {
    Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Event2:

    call Check_HavePicture()


    call Check_CLEAR()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ZonauReliefSearch_ShowNow', 'Value': False})
}

void Ready_Npc_AncientAssistant003_K1_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})


    call Join()

    EventCamera.EventTriggerCameraSavePoint()
    if !Npc_AncientAssistant005.EventQueryHaveTalked() {
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0084', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0081', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'ActorName': 'Obj_Zonau_RockRelief_A_02', 'Target': 0, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [-279.57000732421875, 125.79000091552734, -60.33000183105469]})
    } {
        Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Obj_Zonau_RockRelief_A_02', 'Target': 0, 'WorldPos': [-279.57000732421875, 125.79000091552734, -60.33000183105469], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Obj_Zonau_RockRelief_A_02', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-275.9599914550781, 126.11000061035156, -63.66999816894531], 'AtVector': [-281.1400146484375, 125.91999816894531, -58.970001220703125], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0026', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_AncientAssistant005'})
    } {
        Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0027', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0082', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0088', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0087', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientAssistant003_K1_RemoveBC', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp012_NotChangePos'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCampSoldier_Hylia002_NotChangePos'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp002_NotChangePos'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'ZonauReliefSearch', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Reach_KakarikoVillage', 'IsWaitEnd': True})
}

void InTranslation() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_21', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        Event87:
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
      case 1:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_36', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        goto Event87
      case 2:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_37', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        goto Event87
    }
}

void Reward() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_23', 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event77:

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'PutRupee_Silver', 'IsSuccess': True})

        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_106', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Num_ZonauReliefSearch', 'Value': -1, 'Index': -1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
      case 1:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_38', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event77
      case 2:
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event77
    }
}

void Ready_Npc_AncientAssistant003_K1_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/ZonauReliefSearch:near_0010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void ToCheck_havePicture() {
    goto Event2
}

void Decorate() {
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_03', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_01_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_04', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_02_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_05', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_03_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_06', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_04_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_07', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_05_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_08', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_06_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_09', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_07_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_10', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_08_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_11', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_09_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_12', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_10_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_13', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_11_Generation', 'Index': -1, 'Value': True})
    }
    if !ChallengeSystemActor.EventQueryIsShowSheikahCameraTarget({'ChallengeName': 'ZonauReliefSearch', 'TargetActorName': 'Obj_Zonau_RockRelief_A_14', 'StepName': 'Step1'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Obj_ResearcherNotes_A_12_Generation', 'Index': -1, 'Value': True})
    }
}

void Step1_Npc_AncientAssistant005_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0004', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0006', 'IsNotOpenIfSkipedMostRecent': False})
    if !Npc_AncientAssistant005.EventQueryIsOnRecentTalkFlag() {
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'ZonauReliefSearch', 'StepName': 'Step1', 'IgnoreShowedTarget': True}) {
            Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0044', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
            Event321:
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Check_ZonauReliefSearch()

            } else {
                Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0029', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0044', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'ZonauReliefSearch', 'StepName': 'Step1', 'IgnoreShowedTarget': True}) {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0040', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event321
    } else {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0040', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step1_Npc_AncientAssistant005_Near() {
    if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_03'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_04'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_05'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_06'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_07'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_08'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_09'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_10'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_11'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_12'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_13'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_14'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/ZonauReliefSearch:near_0008', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/ZonauReliefSearch:near_0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Reach_KakarikoVillage_Npc_AncientAssistant005_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0043', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0053', 'IsNotOpenIfSkipedMostRecent': False})
    Event422:
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0050', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0051', 'IsNotOpenIfSkipedMostRecent': False})
    }
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 0, 'ActorName': '', 'WorldPos': [1835.0040283203125, 221.75880432128906, 954.3529052734375], 'PosOffset': [0.0, 1.5, 0.0]})
    } {
        Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'FaceControlType': 1, 'IsConfront': True, 'Target': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [1835.072998046875, 223.62989807128906, 954.469970703125], 'PosOffset': [0.0, 1.5, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'PosVector': [1837.510009765625, 224.72999572753906, 957.9400024414062], 'AtVector': [1835.1500244140625, 223.74000549316406, 954.5700073242188], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0047', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_AncientAssistant005'})
    } {
        Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0048', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0028', 'IsNotOpenIfSkipedMostRecent': False})
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'ZonauReliefSearch', 'StepName': 'Step1', 'IgnoreShowedTarget': True}) {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0040', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0029', 'ChoiceLabel3': 3, 'ChoiceLabel2': 3, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Check_ZonauReliefSearch()

            Event430:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'ZonauReliefSearch', 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step1', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        } else {
            Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk0030', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0029', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event430
        }
    } else {
        Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0040', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_Camera', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0041', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event430
    }
}

void Reach_KakarikoVillage_Npc_AncientAssistant005_Near() {
    if !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_03'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_04'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_05'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_06'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_07'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_08'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_09'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_10'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_11'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_12'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_13'})
    && !ChallengeSystemActor.EventQueryHasTargetPhotograph({'TargetActorName': 'Obj_Zonau_RockRelief_A_14'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/ZonauReliefSearch:near_0008', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/ZonauReliefSearch:near_0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Know_Minel() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZonauReliefSearch_Know_Minel', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZonauReliefSearch_Know_Minel', 'Index': -1, 'Value': True})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_42', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_AncientAssistant003_K1_Talk0() {
    Npc_AncientAssistant005.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0043', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_AncientAssistant005', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    Npc_AncientAssistant005.EventTriggerBecomeSpeaker()

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_AncientAssistant005")})

    Npc_AncientAssistant005.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:Talk0053', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event422
}

void Join() {
    Npc_BaseCamp002.EventTriggerParticipateEvent()
    Npc_BaseCampSoldier_Hylia002.EventTriggerParticipateEvent()
    Npc_BaseCamp012.EventTriggerParticipateEvent()
    Npc_BaseCamp006.EventTriggerParticipateEvent()
    Npc_HatenoVillage030.EventTriggerParticipateEvent()
    Npc_BaseCamp_AncientAssistant001.EventTriggerParticipateEvent()
}

void InTranslation2() {
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZonauReliefSearch_FirstShow', 'Index': -1}) {
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_34', 'IsNotOpenIfSkipedMostRecent': False})
        Event10:
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_14', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZonauReliefSearch_FirstShow', 'Index': -1, 'Value': True})
        Npc_AncientAssistant005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/ZonauReliefSearch:talk_13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event10
    }
}
