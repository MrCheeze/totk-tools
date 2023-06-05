-------- EventFlow: Connect_FirstIsland --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_AmosStatue_A_03
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataFloat', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatue_C_01
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_StaminaUtuwa_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Item_StaminaUtuwa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Stamina.root.as', 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Obj_HeartUtuwa_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Item_HeartUtuwa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Heart.root.as', 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerSetShowStaminaGauge', 'EventTriggerSetDisplayHeartGauge', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventTriggerParticipateEvent', 'EventTriggerHealStaminaMax', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerMaxLife', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatuePart_B_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatuePart_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatuePart_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatuePart_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatuePart_A_04
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void VenusVoice() {
    EventCamera.EventTriggerCameraSavePoint()
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Ready_Exp'}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0021', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Connect_FirstIsland_VenusVoice', 'Index': -1}) {
        FldObj_AmosStatue_A_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0011', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        FldObj_AmosStatue_A_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            FldObj_AmosStatue_A_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0010', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'PosVector': [-638.5499877929688, 193.30999755859375, 1595.1500244140625], 'AtVector': [-641.1599731445312, 193.8800048828125, 1600.68994140625], 'MoveTime': 60, 'Actor1InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        GameSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Connect_FirstIsland_VenusVoice', 'Index': -1, 'Value': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void OutField() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Connect_FirstIsland_OutField'}) {

        call Common.AirStartUP_Player_ConsideringSwimming()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

        fork {
            FldObj_AmosStatue_A_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0023', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5})
            && !Player.EventQueryCheckPlayerState({'State': 4}) {
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LookAround', 'ClothWarpMode': 0})
            }
        }

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Connect_FirstIsland_OutField', 'Index': -1, 'Value': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void DemonVoiceRepeat() {
    TwnObj_DemonStatue_C_01.EventTriggerParticipateEvent()

    call TwnObj_DemonStatue_C_01.InitTalkNoTurn()

    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_SkyGather_Exp'}) {
            Event72:
            TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0014', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Connect_FirstIsland_TotalPartMinus', 'Value': 1, 'Index': -1}) {
          case 0:
            TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0013', 'IsNotOpenIfSkipedMostRecent': False})
          case [1, 2]:
            goto Event72
        }
    } else {
        TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0012', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ganbari() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})

    fork {

        call DmF_SY_StatueVenus.Camera_GetUtuwa()

    } {

        call DmF_SY_StatueVenus.link_get_utsuwa()

    } {

        call DmF_SY_StatueVenus.ganbari()

    }

}

void heart() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})

    fork {

        call DmF_SY_StatueVenus.Camera_GetUtuwa()

    } {

        call DmF_SY_StatueVenus.link_get_utsuwa()

    } {

        call DmF_SY_StatueVenus.heart()

    }

}

void StepRepeat() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Connect_FirstIsland_TotalPartMinus', 'Value': 1, 'Index': -1}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Sky_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Collect1st_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Collect2nd_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Collect3rd_Exp'}) {
                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'SkyGather'})
                    }
                } else {
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Collect3rd'})
                }
            } else {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Collect2nd'})
            }
        } else {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Collect1st'})
        }
      case [1, 2]:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_SkyGather_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus1st_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus2nd_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus3rd_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus4th_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus5th_Exp'}) {
                                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Minus6th_Exp'}) {
                                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'MinusGather'})
                                }
                            } else {
                                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus6th'})
                            }
                        } else {
                            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus5th'})
                        }
                    } else {
                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus4th'})
                    }
                } else {
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus3rd'})
                }
            } else {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus2nd'})
            }
        } else {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Minus1st'})
        }
    }
}

void DemonVoiceNextStep() {
    TwnObj_DemonStatue_C_01.EventTriggerParticipateEvent()

    call TwnObj_DemonStatue_C_01.InitTalkNoTurn()

    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0014', 'IsNotOpenIfSkipedMostRecent': False})

    call StepRepeat()

}

void DemonVoice3() {

    call Utuwa_invisivle()

    TwnObj_DemonStatuePart_A_03.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common.SnappingInterval()

    TwnObj_DemonStatuePart_A_03.EventPlayAS({'ASName': 'Light_Off', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Event215:
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Connect_FirstIsland_TotalPartMinus', 'Value': 1, 'Index': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Connect_FirstIsland_TotalPartMinus', 'Value': 4}) {

        call DemonVoiceNextStep()

    } else {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-2.640000104904175, 85.2699966430664, 22.420000076293945], 'AtVector': [-0.800000011920929, 87.93000030517578, 18.389999389648438], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'FirstAmos', 'Length': 2.0, 'Radius': 3.0}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'FirstAmos', 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
            }
        } {
            Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 132.718505859375, 'IsWaitEnd': True, 'Position': [-780.3181762695312, -459.6763000488281, 1903.487060546875], 'UseDemoWait': True})
        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Connect_FirstIsland_DemonRevive'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        TwnObj_DemonStatuePart_B_01.EventTriggerParticipateEvent()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'PosVector': [-2.640000104904175, 75.2699966430664, 22.420000076293945], 'AtVector': [-0.800000011920929, 77.93000030517578, 18.389999389648438], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        fork {
            Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 132.718505859375, 'IsWaitEnd': True, 'Position': [-780.3181762695312, -459.6763000488281, 1903.487060546875], 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'TwnObj_DemonStatue_C_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'PosVector': [-2.640000104904175, 75.2699966430664, 22.420000076293945], 'AtVector': [-0.800000011920929, 77.93000030517578, 18.389999389648438], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            TwnObj_DemonStatuePart_B_01.EventPlayAS({'ASName': 'Eye_Flash', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 80, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'PosVector': [-3.7899999618530273, 75.0999984741211, 27.149999618530273], 'AtVector': [-0.1599999964237213, 76.66999816894531, 18.649999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            TwnObj_DemonStatue_C_01.EventTriggerParticipateEvent()
        } {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

        fork {
            TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0018', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
        GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': True, 'EventName': 0})
        TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0025', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
              case 0:
                Event52:
                TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0026', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})

                call heart()


                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'PosVector': [-3.7899999618530273, 75.0999984741211, 27.149999618530273], 'AtVector': [-0.1599999964237213, 76.66999816894531, 18.649999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                } {

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_HeartUtuwa_A_01'})

                    Player.EventTriggerHealStaminaMax()
                }

                Event182:
                SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0031', 'IsNotOpenIfSkipedMostRecent': False})
                Obj_StaminaUtuwa_A_01.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Obj_HeartUtuwa_A_01.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Event16:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Complete', 'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveKnownDemonStatue_00'})
              case [1, 2]:
                TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0029', 'ChoiceNumber': 1, 'ChoiceLabel1': 1, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                  case 0:
                    Event56:
                    TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0026', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'EventName': 0})

                    call ganbari()


                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'PosVector': [-3.7899999618530273, 75.0999984741211, 27.149999618530273], 'AtVector': [-0.1599999964237213, 76.66999816894531, 18.649999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    } {
                        GameSystemActor.EventTriggerSetShowStaminaGauge({'EventName': 0, 'IsDisplay': True, 'IsDisplayEx': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_StaminaUtuwa_A_01'})

                        Player.EventTriggerHealStaminaMax()
                    }

                    goto Event182
                  case [1, 2]:
                    TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0030', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Event86:

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

                    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'EventName': 0})
                    Player.EventTriggerHealStaminaMax()
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0019', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event16
                }
            }
        } else
        switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
          case 0:
            goto Event56
          case [1, 2]:
            TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0030', 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
            switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
              case 0:
                goto Event52
              case [1, 2]:
                TwnObj_DemonStatue_C_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0029', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event86
            }
        }
    }
}

void DemonVoice1() {

    call Utuwa_invisivle()

    TwnObj_DemonStatuePart_A_01.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common.SnappingInterval()

    TwnObj_DemonStatuePart_A_01.EventPlayAS({'ASName': 'Light_Off', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    goto Event215
}

void DemonVoice2() {

    call Utuwa_invisivle()

    TwnObj_DemonStatuePart_A_02.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common.SnappingInterval()

    TwnObj_DemonStatuePart_A_02.EventPlayAS({'ASName': 'Light_Off', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    goto Event215
}

void DemonVoice4() {

    call Utuwa_invisivle()

    TwnObj_DemonStatuePart_A_04.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common.SnappingInterval()

    TwnObj_DemonStatuePart_A_04.EventPlayAS({'ASName': 'Light_Off', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    goto Event215
}

void Utuwa_invisivle() {

    fork {
        Obj_StaminaUtuwa_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Obj_HeartUtuwa_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}
