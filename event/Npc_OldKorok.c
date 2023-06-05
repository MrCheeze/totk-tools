-------- EventFlow: Npc_OldKorok --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition', 'EventRequestQuit']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventWait', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventTriggerLookAtObject']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerSetNeedKorokNutsNumToGameDataInt', 'EventTriggerAddOrRemovePouchContentWithNumGameData']
queries: ['EventQueryIsExistInPouch', 'EventQueryIsPouchExpandNumMax', 'EventQueryIsExistInPouchWithNumGameData']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseKorokSeedDisplay', 'EventOpenKorokSeedDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerEraseActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryIsKorokComplete', 'EventQueryRandomChoice5']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerConversate', 'EventPlayerUnequip']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void SubFlowDance() {
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_PouchGain', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
}

void Near() {
    Event385:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsAfter_Ready_Exp'}) {
        Event384:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AccidentOfDekutree_OrderFromFairy', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'TalkOldKorok', 'GameDataName': 'Step_MasterSwordClues', 'Index': -1}) {
                    Event25:
                    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near01', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
                    goto Event25
                } else {
                    Event29:

                    call OldKorokHelp.STEP2_Npc_OldKorok_Near()

                }
            } else {
                goto Event25
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
            Event119:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        } else {
            goto Event29
        }
    } else {

        call Challenge_Ready_Near()

    }
}

void Talk() {
    Event185:
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_Final'}) {

        call TalkSetting()


        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'AnchorAction9', 'InstanceName': 'OldKorok_PlayerPos_Final', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_OldKorok', 'Actor1InstanceName': 'OldKorok_Final', 'PosVector': [4.519999980926514, 1.899999976158142, 6.269999980926514], 'AtVector': [0.9700000286102295, 1.8300000429153442, 3.049999952316284], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_TravelState', 'Value': 4, 'Index': -1})
        Event188:

        call Greet_DifferentPlace()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_First'}) {

        call OldKorokHelp.StartTalk()

    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_TravelState', 'Index': -1, 'Value': 2})
    }
    goto Event188
}

void Greet_DifferentPlace() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_Travel01'}) {

        call BaseCamp_Introduction()


        call NextAppearancePointSetup()

        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Index': -1, 'Value': 1}) {
          case [0, 2]:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'OldKorok_AtTravel'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'OldKorok_AtFirst'})
            GameSystemActor.EventTriggerRequestAutoSave()
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'Complete'}) {
                Event208:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk181', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                    Event14:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk205', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk222', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Value': 1, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'AccidentOfDekutree_OrderFromFairy', 'Value': True})
                    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'TalkOldKorok', 'GameDataName': 'Step_MasterSwordClues', 'Index': -1}) {
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MasterSwordClues', 'StepName': 'TalKDekuTree', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                        GameSystemActor.EventTriggerRequestAutoSave()
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Ready', 'GameDataName': 'Step_OldKorokHelp'}) {
                    Event111:

                    call OldKorokHelp.AfterBlackZelda()

                } else
                if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'STEP1'}) {
                    goto Event111
                } else
                if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'STEP2'}) {

                    call OldKorokHelp.STEP2_Npc_OldKorok_Talk()

                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk183', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Value': 1, 'Index': -1})

                    call After_Greet()

                }
            } else
            if !Npc_EventStarter.EventQueryHaveTalked() {
                goto Event208
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk207_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Index': -1, 'Value': 1})

                call OldKorokHelp.FirstTalkAtBaseCamp()

            }
          case 1:

            call No_Greet()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_Final'}) {
        GameSystemActor.EventTriggerRequestAutoSave()
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Value': 4, 'Index': -1}) {
          case [0, 2]:
            if !Npc_EventStarter.EventQueryHaveTalked() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk181', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk207', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk209', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'OldKorok_AtTravel'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_AtFinal', 'Value': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_LastTalkPlace', 'Value': 4, 'Index': -1})
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'Complete'}) {
                if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0})
                && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1})
                && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
                    if !GameSystemActor.EventQueryIsKorokComplete() {
                        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_ProofKorok', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

                            call FirstTalkinForest_AfterComplete()

                        } else {

                            call FirstTalkinForest_Complete()

                        }
                    } else {

                        call FirstTalkinForest_PouchComplete()

                    }
                } else {

                    call FirstTalkinForest_NoComplete()

                }
            } else
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'STEP2'}) {

                call OldKorokHelp.STEP2_Npc_OldKorok_Talk()

            } else {

                call OldKorokHelp.AfterBlackZelda()

            }
          case 1:

            call No_Greet()

        }
    } else {

        call NoGreetNormal()

    }
}

void Sel_Weapon() {
    if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk11', 'IsNotOpenIfSkipedMostRecent': False})

        call ReturnSel_AfterCancel()

    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 0, 'Index': -1})

        call Decide_NeedNuts({'Sel_Category': 0})

    }
}

void Sel_Bow() {
    if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk12', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call ReturnSel_AfterCancel()

    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1})

        call Decide_NeedNuts({'Sel_Category': 1})

    }
}

void Sel_Shield() {
    if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk13', 'IsNotOpenIfSkipedMostRecent': False})

        call ReturnSel_AfterCancel()

    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 2, 'Index': -1})

        call Decide_NeedNuts({'Sel_Category': 3})

    }
}

void NutsCheck() {
    PouchSystemActor.EventTriggerSetNeedKorokNutsNumToGameDataInt({'GameDataInt': 'OldKorok_NeedSeedNum', 'PouchCategory': 'Sel_Category'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk02', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryIsExistInPouchWithNumGameData({'Actor': 'Obj_KorokNuts', 'NumGameData': 'OldKorok_NeedSeedNum'}) {
            PouchSystemActor.EventTriggerAddOrRemovePouchContentWithNumGameData({'Actor': 'Obj_KorokNuts', 'NumGameData': 'OldKorok_NeedSeedNum', 'IsReverse': True})
            EventCamera.EventTriggerCameraSavePoint()
            GameSystemActor.EventTriggerRequestAutoSave()

            call SoundStartDuckBgm()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk07', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})

            call SubFlowDance({'Sel_Category': 'Sel_Category'})

            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk08', 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call AddExpandCount()


                call Chk_Full_AllPouch()

                if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk11', 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                call Chk_ExpandLimit()

              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk09', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call AddExpandCount()


                call Chk_Full_AllPouch()

                if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                call Chk_ExpandLimit()

              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk10', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call AddExpandCount()


                call Chk_Full_AllPouch()

                if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                call Chk_ExpandLimit()

            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnSel_AfterCancel()

        }
    } else {

        call ReturnSel_AfterCancel()

    }
}

void Decide_NeedNuts() {

    call NutsCheck({'Sel_Category': 'Sel_Category'})

}

void Chk_Full_AllPouch() {
    if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0})
    && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1})
    && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk14', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk223', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Chk_ExpandLimit() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_First'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'OldKorok_ExpandPouchNum', 'Value': 2}) {
          case 0:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'OldKorok_ExpandPouchNum', 'Value': 1}) {
              case 0:

                call ReturnSel_AfterExpand()

              case [1, 2]:
                Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'OldKorokHelp', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk58', 'IsNotOpenIfSkipedMostRecent': False})

                call ReturnSel_AfterExpand_First()

            }
          case [1, 2]:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk201', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_TravelState', 'Index': -1, 'Value': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'OldKorok_AtFirst'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'OldKorok_AtTravel'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
        Event322:
        if EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_Final'}) in [0, 1] {

            call ReturnSel_AfterExpand()

        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'OldKorok_ExpandPouchNum', 'Value': 1}) {
      case 0:
        goto Event322
      case [1, 2]:
        Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'OldKorokHelp', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        goto Event322
    }
}

void No_Greet() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MasterSwordClues_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {

            call NoGreetNormal()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AccidentOfDekutree_OrderFromFairy', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'TalkOldKorok', 'GameDataName': 'Step_MasterSwordClues', 'Index': -1}) {

                call NoGreetDeku()

            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk206', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                call ExchangeNormal()

            } else {

                call OldKorokHelp.STEP2_Npc_OldKorok_Talk()

            }
        } else {

            call NoGreetDeku()

        }
    } else
    Event423:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsAfter_STEP1_Final_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {

            call ExchangeNormal()

        } else {

            call OldKorokHelp.STEP2_Npc_OldKorok_Talk()

        }
    } else {

        call OldKorokHelp.AfterBlackZelda()

    }
}

void ReturnSel_AfterExpand() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event359:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call Sel_Weapon()

          case 1:

            call Sel_Bow()

          case 2:

            call Sel_Shield()

          case 3:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk16', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
        }
    } else {

        call No_Nuts()

    }
}

void After_Greet() {

    call Talk_CompleteCheck()

    Event336:
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk101', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event339:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk00_01', 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk01', 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event342:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call Sel_Weapon()

              case 1:

                call Sel_Bow()

              case 2:

                call Sel_Shield()

              case 3:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
        }
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk102', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event330:
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk06_01', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void No_Nuts() {
    goto Event330
}

void ReturnSel_AfterCancel() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk03', 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event342
}

void AddExpandCount() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'OldKorok_ExpandPouchNum'})
    Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void NoGreetDeku() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk208', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event14
}

void Talk_CompleteCheck() {
    if !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0})
    && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1})
    && !PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
        if !GameSystemActor.EventQueryIsKorokComplete() {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_ProofKorok', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk00', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event64:
                Npc_EventStarter.EventTalk({'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk214', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event60:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_NostalgicDance', 'Index': -1, 'Value': False})
                    Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk216', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 0, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 0})

                        Event87:
                        Npc_EventStarter.EventTalk({'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk217', 'ChoiceLabel1': 13, 'ChoiceLabel2': 5, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_EventStarter.EventTalk({'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk219', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event60
                        } else {
                            Event69:
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        }
                      case 1:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 1})

                        goto Event87
                      case 2:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 2, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 3})

                        goto Event87
                      case 3:
                        goto Event69
                    }
                  case 1:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_NostalgicDance', 'Value': True, 'Index': -1})
                    Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk215', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 0, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 0})

                        goto Event87
                      case 1:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 1})

                        goto Event87
                      case 2:

                        call SoundStartDuckBgm()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk218', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 2, 'Index': -1})

                        call SubFlowDance({'Sel_Category': 3})

                        goto Event87
                      case 3:
                        goto Event69
                    }
                  case 2:
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else {
                Event59:
                Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk212', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_ProofKorok', 'IsSuccess': True})

                Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk213', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                GameSystemActor.EventTriggerRequestAutoSave()
            }
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk00', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event128:
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk223', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void EnemyKilled_AccidentOfDekutree_Talk() {
    goto Event185
}

void EnemyKilled_AccidentOfDekutree_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
            goto Event119
        } else {

            call OldKorokHelp.STEP2_Npc_OldKorok_Near()

        }
    } else {

        call Challenge_Ready_Near()

    }
}

void SageOfFire_IsCompleted_Exp_Talk() {
    goto Event185
}

void SageOfZora_IsCompleted_Exp_Talk() {
    goto Event185
}

void BaseCamp_FallingZonauParts_Talk() {
    goto Event185
}

void OldKorok_Clear_PosRelease_Talk() {
    goto Event185
}

void NextAppearancePointSetup() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_02'}) {

        call AppearancePoint_02_Check()

    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WellCollection_InWell', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WellCollection_HaveTalkedInFort', 'Index': -1}) {
                Event175:
                switch GameSystemActor.EventQueryRandomChoice5() {
                  case [0, 1, 2]:

                    call AppearancePoint_01()

                  case 3:

                    call AppearancePoint_02()

                  case 4:

                    call AppearancePoint_03()

                }
            } else
            if !GameSystemActor.EventQueryRandomChoice2() {

                call AppearancePoint_04()

            } else
            switch GameSystemActor.EventQueryRandomChoice5() {
              case [0, 1, 2]:

                call AppearancePoint_01()

              case 3:

                call AppearancePoint_02()

              case 4:

                call AppearancePoint_03()

            }
        } else
        goto Event175
    } else {

        call AppearancePoint_01()

    }
}

void AppearancePoint_01() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_01_Pre', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_02_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_03_Pre', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_04_Pre', 'Index': -1})
}

void AppearancePoint_02() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_01_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_02_Pre', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_03_Pre', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_04_Pre', 'Index': -1})
}

void AppearancePoint_03() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_01_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_02_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_03_Pre', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_04_Pre', 'Index': -1})
}

void AppearancePoint_04() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_01_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_02_Pre', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'OldKorok_InBaseCamp_03_Pre', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_04_Pre', 'Value': True, 'Index': -1})
}

void BaseCamp_Introduction() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_02_Now'}) {

        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'NotChangeRot': False, 'ActorName': 'AnchorAction8', 'InstanceName': 'OldKorok_PlayerPos02', 'IsWaitEnd': False, 'UseDemoWait': True})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorActorName': 'AnchorAction10', 'AnchorInstanceName': 'OldKorok_DeletePos02', 'Radius': 2.0, 'Height': 4.0, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'Height': 4.0, 'AnchorInstanceName': 'OldKorok_PlayerPos02', 'AnchorActorName': 'AnchorAction8', 'Radius': 2.5, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
        } {

            call CameraSetting_BaseCamp02()

        }

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})

            call TalkSetting()

        } else {

            call TalkSetting()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_TalkAtNearShop'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorok_TalkAboutAddShopLineup'}) {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk225_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk225_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event295:
                Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'OldKorok_TalkAtNearShop'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk225', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event295
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_01_Now'}) {
        Event217:

        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'NotChangeRot': False, 'ActorName': 'AnchorAction7', 'InstanceName': 'OldKorok_PlayerPos01', 'IsWaitEnd': False, 'UseDemoWait': True})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'Height': 5.0, 'Radius': 3.0, 'AnchorInstanceName': 'OldKorok_PlayerPos01', 'AnchorActorName': 'AnchorAction7', 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
        } {

            call CameraSetting_BaseCamp01()

        }

        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})

        call TalkSetting()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_04_Now'}) {

        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'NotChangeRot': False, 'ActorName': 'AnchorAction5', 'InstanceName': 'OldKorok_PlayerPos04', 'IsWaitEnd': False, 'UseDemoWait': True})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'Height': 5.0, 'AnchorInstanceName': 'OldKorok_PlayerPos04', 'AnchorActorName': 'AnchorAction5', 'Radius': 2.5, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
        } {

            call CameraSetting_BaseCamp04()

        }


        call TalkSetting()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk227', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'OldKorok_FirstTalk_Well', 'Index': -1})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_03_Now'}) {

        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'NotChangeRot': False, 'InstanceName': 'OldKorok_PlayerPos03', 'ActorName': 'AnchorAction6', 'IsWaitEnd': False, 'UseDemoWait': True})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'Height': 5.0, 'AnchorActorName': 'AnchorAction6', 'AnchorInstanceName': 'OldKorok_PlayerPos03', 'Radius': 3.0, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
        } {

            call CameraSetting_BaseCamp03()

        }


        call TalkSetting()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk226', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        }
    } else {

        call BaseCamp_Introduction_01()

    }
}

void BaseCamp_Introduction_01() {
    goto Event217
}

void OldKorok_InBaseCamp_01_Near() {
    goto Event385
}

void OldKorok_InBaseCamp_02_Near() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event384
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_02_Now', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near04', 'NotOverriddenByInterestBalloon': False})
    } else {

        call OldKorok_InBaseCamp_01_Near()

    }
}

void OldKorok_InBaseCamp_03_Near() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event384
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_03_Now'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near05', 'NotOverriddenByInterestBalloon': False})
    } else {

        call OldKorok_InBaseCamp_01_Near()

    }
}

void OldKorok_InBaseCamp_04_Near() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event384
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_InBaseCamp_04_Now'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {

        call OldKorok_InBaseCamp_01_Near()

    }
}

void TalkSetting() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryNeedEquipWeapon() {
            Npc_EventStarter.EventUnequipWeapon({'IsWaitEnd': True})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void AppearancePoint_02_Check() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {

        call RitoCheck()

    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {

        call GoronCheck()

    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {

        call ZoraCheck()

    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {

        call GerudoCheck()

    }

    call AppearancePoint_02()

}

void RitoCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterRito'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_FirstTalk_AfterRito', 'Value': True, 'Index': -1})
    }
}

void ReturnSel_AfterExpand_First() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk186', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event359
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk187', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Challenge_Ready_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_OldKorok:Near00', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void ExchangeNormal() {

    call Talk_CompleteCheck()

    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk00', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }

        call HaveNuts()

    } else
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk102', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call No_Nuts()

}

void HaveNuts() {
    goto Event339
}

void GoronCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterEldin'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_FirstTalk_AfterEldin', 'Value': True, 'Index': -1})
    }
}

void GerudoCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterGerudo'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterGerudo'})
    }
}

void ZoraCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterZora'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'OldKorok_FirstTalk_AfterZora'})
    }
}

void SoundStartDuckBgm() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2, 'DuckingName': 'DmF:Bgmミュート(フェード普通)'})
}

void NoGreetNormal() {
    goto Event423
}

void FirstTalkinForest_PouchComplete() {
    goto Event128
}

void FirstTalkinForest_AfterComplete() {
    goto Event64
}

void FirstTalkinForest_NoComplete() {
    goto Event336
}

void FirstTalkinForest_Complete() {
    goto Event59
}

void CameraSetting_BaseCamp01() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVector': [-0.20999999344348907, -0.6200000047683716, 1.7599999904632568], 'PosVector': [-3.130000114440918, -1.2100000381469727, -1.4800000190734863], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 1}) {
        Event429:
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.619999885559082, -1.399999976158142, -0.9599999785423279], 'AtVector': [0.014000000432133675, -0.36000001430511475, 2.0799999237060547], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 12}) {
        goto Event429
    } else {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.130000114440918, 0.8999999761581421, -1.4800000190734863], 'AtVector': [-0.20999999344348907, 1.4900000095367432, 1.7599999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}

void CameraSetting_BaseCamp02() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.0899999141693115, -1.2100000381469727, -1.5], 'AtVector': [-0.23000000417232513, -0.6200000047683716, 1.7899999618530273], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 1}) {
        Event434:
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.5799999237060547, -1.399999976158142, -0.9800000190734863], 'AtVector': [-0.006000000052154064, -0.36000001430511475, 2.109999895095825], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 12}) {
        goto Event434
    } else {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-3.0899999141693115, 0.8999999761581421, -1.5], 'AtVector': [-0.23000000417232513, 1.4900000095367432, 1.7899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}

void CameraSetting_BaseCamp03() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.130000114440918, -1.2100000381469727, -1.4800000190734863], 'AtVector': [-0.23999999463558197, -0.6200000047683716, 1.7799999713897705], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 1}) {
        Event439:
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.619999885559082, -1.399999976158142, -0.9599999785423279], 'AtVector': [-0.01600000075995922, -0.36000001430511475, 2.0999999046325684], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 12}) {
        goto Event439
    } else {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.130000114440918, 0.8999999761581421, -1.4800000190734863], 'AtVector': [-0.23999999463558197, 1.4900000095367432, 1.7799999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}

void CameraSetting_BaseCamp04() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.2200000286102295, -1.2100000381469727, -1.3899999856948853], 'AtVector': [-0.1899999976158142, -0.6200000047683716, 1.75], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 1}) {
        Event444:
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-3.7100000381469727, -1.399999976158142, -0.8700000047683716], 'AtVector': [0.03400000184774399, -0.36000001430511475, 2.069999933242798], 'EnableCameraAlpha': False})
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 12}) {
        goto Event444
    } else {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.2200000286102295, 0.8999999761581421, -1.3899999856948853], 'AtVector': [-0.1899999976158142, 1.4900000095367432, 1.75], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}
