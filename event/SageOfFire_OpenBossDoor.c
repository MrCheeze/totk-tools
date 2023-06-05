-------- EventFlow: SageOfFire_OpenBossDoor --------

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeAIScheduleEquipState', 'EventWarpToTargetActor', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventUnequipWeapon', 'EventSageWarpToStarterLinkAnchor']
queries: ['EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_02[LargeDungeonFire]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Access() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {

        call YunboCheckWeapon()

    }

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'LargeDungeonFire_ClearTerminal'}) {

        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'TerminalYunbo', 'IsWaitEnd': True, 'NotChangeRot': False})
        } {

            call AuthenticationCommon.Authentication()

        }

        EventSystemActor.EventTransition({'EventName': 'Dm_GO_0024', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsAfter_GoDungeon_Exp'}) {
            Event67:
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'StartBossBattle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

            call SageOfFire.StartFollow()

            goto Event67
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsAfter_GoDungeon_Exp'}) {

        call FailWithYunbo()

        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_GO_0023'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Arrive_FrontBossDoor', 'Index': -1}) {

            call AncientAccess()

            GameSystemActor.EventTriggerRequestAutoSave()
        } else {

            call Fail()

            GameSystemActor.EventTriggerRequestAutoSave()
        }
    } else {

        call Fail()

        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void FailWithYunbo() {

    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'TerminalYunbo', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {

        call AuthenticationCommon.FailureNoEffect()

    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0029'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk164', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void Fail() {

    call AuthenticationCommon.Failure()

}

void AncientAccess() {

    call AuthenticationCommon.FailureNoEffect()


    call OpenWarpPoint({'Actor1InstanceName': 'LargeDungeonFire', 'GameDataName': 'OpenWarpPoint_LargeDungeonFire'})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0029'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0015'})

    call SageOfFire.StartFollow()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'Dungeon', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void OpenWarpPoint() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        EventCamera.EventTriggerCameraSavePoint()
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'InstanceName': '', 'OffsetBase': 1, 'YAngle': -40.0, 'PositionOffset': [3.5, -0.4699999988079071, -2.5]})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_02', 'Actor1InstanceName': 'LargeDungeonFire', 'PosVector': [8.329999923706055, 3.3299999237060547, -1.3200000524520874], 'AtVector': [4.510000228881836, 2.299999952316284, 0.23999999463558197], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GameDataName'})
        } {
            DgnObj_WarpPoint_Zonau_A_02[LargeDungeonFire].EventPlayAS({'ASName': 'On', 'IsAllSlot': False, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            DgnObj_WarpPoint_Zonau_A_02[LargeDungeonFire].EventPlayAS({'IsAllSlot': False, 'ASName': 'OnWait', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'Target': 3, 'InstanceName': 'Actor1InstanceName', 'ActorName': 'DgnObj_WarpPoint_Zonau_A_02', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }
}

void YunboCheckWeapon() {
    if !Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': False})
    }
}
