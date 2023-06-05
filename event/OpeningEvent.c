-------- EventFlow: OpeningEvent --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventTriggerSetMaxLife', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerSetMaxStamina', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerClimbOff', 'EventPlayerPlayASForFlowchart', 'EventWaitCreationFinishedEquipment', 'EventTriggerEquipmentUserRequestChangeState']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zelda_Opening
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventTalk', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerSetHaveTalked', 'EventPlayASForTimelineToInGame', 'EventWait', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Accessory1': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetEquipShoulderBeltGameData', 'EventTriggerSetEquipWaistBeltGameData']
queries: ['EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerRequestAutoSave', 'EventReserveBancChange', 'EventEventFadeIn', 'EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM', 'EventTriggerSoundBeginForbidDialogDucking', 'EventTriggerSoundControlBGM', 'EventTriggerStartInGameBgm', 'EventTriggerStopInGameBgm', 'EventTriggerSoundBeginBgmEndReverb', 'EventTriggerPrepareCueToOpeningNext', 'EventTriggerRequestReplaceEventSkipDucking']
queries: ['EventQueryIsInGameBgmSuspend']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerClearPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void IntroductionOpening() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 0, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked.Dm_Npc_Zelda_Search', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Opening_ZeldaStartWalking', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'OpeningStart', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Npc_Zelda_Opening.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Walk_Fast'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    SoundSystemActor.EventTriggerPrepareCueToOpeningNext({'SampleOffset': -4800, 'FadeTime': 1.0, 'StopDelay': 1.2000000476837158})
    SoundSystemActor.EventTriggerRequestReplaceEventSkipDucking()
    EventSystemActor.EventTransition({'EventName': 'Dm_OP_0030', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Npc_Zelda_Opening.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ClothWarpMode': 3, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 1})
        Event52:
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        GameSystemActor.EventTriggerRequestAutoSave()
        if !SoundSystemActor.EventQueryIsInGameBgmSuspend() {
            SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': True, 'IsFadeIn': False, 'IsControlSpotBgm': True})
        }
        Npc_Zelda_Opening.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } else {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 1})
        Npc_Zelda_Opening.EventPlayASForTimelineToInGame({'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait'})
        goto Event52
    }
}

void CheckedMural() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Prologue', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerRequestReplaceEventSkipDucking()
    EventSystemActor.EventTransition({'EventName': 'Dm_OP_0020', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 4})

    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        Player.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'AfterMuralEventPlayer', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    } {
        Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'ActionType': 0, 'InstanceName': 'AfterMuralEventZelda', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': True, 'EnableArrivalState': False})
        Npc_Zelda_Opening.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    if !SoundSystemActor.EventQueryIsInGameBgmSuspend() {
        SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': True, 'IsControlSpotBgm': True, 'IsFadeIn': True})
    }
}

void CheckedMummy() {

    fork {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookMummy', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Dm_Npc_Ganondorf_M', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1})
    } {
        SoundSystemActor.EventTriggerSoundBeginBgmEndReverb({'EffectParamName': 'BGM_Prologue_Latter'})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.75, -12.02340030670166, 37.874698638916016], 'PosVector': [0.8700000047683716, -12.088800430297852, 32.574798583984375], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [0.8600000143051147, -12.088800430297852, 29.780000686645508], 'AtVector': [0.75, -12.02340030670166, 35.099998474121094], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Opening.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Dm_Npc_Ganondorf_M', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Opening_ZeldaReachMummy', 'Index': -1}) {
            Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 12, 'InstanceName': '', 'EnableArrivalState': False})
            Npc_Zelda_Opening.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } else {
            Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'InstanceName': 'WarpToMummy', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': True, 'EnableArrivalState': False})
            Npc_Zelda_Opening.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            Npc_Zelda_Opening.EventWait({'IsWaitEnd': True, 'Frames': 25})
            Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 12, 'InstanceName': '', 'EnableArrivalState': False})
        }
    }

    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Opening_CheckedMummy'}) {
        Event69:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zelda_Opening.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_Zelda_Opening', 'PosOffset': [0.0, 0.0, 0.0]})
        }

        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Dm_Npc_Ganondorf_M', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1})
                Npc_Zelda_Opening.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Dm_Npc_Ganondorf_M', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
            } {
                SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Prologue_Latter', 'IsUseSuspendFade': False})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                PouchSystemActor.EventTriggerClearPouch({'ClearType': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
                Player.EventTriggerSetMaxLife({'MaxLife': 12})
                Player.EventTriggerPlayerSetMaxStamina({'MaxStamina': 1000.0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsMasterSwordTrueForm', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetEquipShoulderBeltGameData({'IsDisp': False})
                GameDataActor.EventTriggerSetEquipWaistBeltGameData({'IsDisp': False})
                GameSystemActor.EventReserveBancChange({'NextBanc': 'MainField', 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'NextStartPos': 'StartPos_StartIsland_WakeupAltar', 'BootEventName': 'SageOfSky_WakeUpOnStart', 'IsStartOnEvent': True, 'FadePattern': 0})
                EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_OP_GanonWakeUp_PreRender'})
            }

        } else {
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_32', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceDefaultNo': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_29', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event69
    }
}

void StopEscapeCave() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    call StopEscapeCave_Message00()


    fork {

        call StopEscapeCave_Message01()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [80.94579315185547, 9.886866569519043, -104.20800018310547], 'InstanceName': 'ReturnToCave', 'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1})
        Player.EventPlayerClimbOff({'IsWaitEnd': True})

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    }

    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [80.94579315185547, 9.886866569519043, -104.20800018310547], 'InstanceName': 'ReturnToCave', 'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 0, 'KeepTalkWait': True, 'OffsetBase': 0})

    fork {
        Player.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'ReturnToCave', 'MoveSpeed': 0.10000000149011612})
    } {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    }

}

void StopIgnoreMural() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'WorldPos': [80.94579315185547, 9.886866569519043, -104.20800018310547], 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ReturnToBattle', 'PosOffset': [0.0, 1.600000023841858, 0.0], 'TurnFaceControlType': 1})
        if Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
        }
    }

    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [80.94579315185547, 9.886866569519043, -104.20800018310547], 'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 0, 'InstanceName': 'ReturnToBattle', 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'AnchorActorName': 'DestinationAnchor', 'MoveSpeed': 0.10000000149011612, 'AnchorInstanceName': 'ReturnToBattle'})
}

void StopEscapeCave_Message00() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_ZeldaNoticeEnemy'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_OP_0020'}) {
            Event89:
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_22', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'GuardWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event89
    }
}

void StopEscapeCave_Message01() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_ZeldaNoticeEnemy'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_OP_0020'}) {
            Event90:
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_23', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/OpeningEvent:Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'GuardWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event90
    }
}

void StopEscapeCave_Warp() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ReturnToCave', 'NotChangeRot': False, 'UseDemoWait': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void OutOfOpeningField() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'OpeningStart', 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.7400000095367432, 4.409999847412109, -5.429999828338623], 'AtVector': [0.0, 1.7699999809265137, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void StopIgnoreMural_Warp() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'ReturnToBattle'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
