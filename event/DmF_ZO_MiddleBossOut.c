-------- EventFlow: DmF_ZO_MiddleBossOut --------

Actor: Npc_ZoraFencer[ParkYona]
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleOverWriteActionType', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_Npc_Zora_Princess/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_Npc_Zora_Princess.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerLookAtObject', 'EventWarpToTargetPosAndRot', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerRequestLookAtTheFront', 'EventTriggerTargetClearSlotInfo', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventCancelSageBattleState', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_Npc_Zora_Prince_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant002[ParkImu]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant001[ParkHifumi]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_LikeLike_Tar
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventTriggerRemoveShootedDynamicTar']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': True, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_Enemy_LikeLike_Tar/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_Likelike.root.as', 'Position': [3879.94189453125, 591.915771484375, -590.8051147460938], 'Rotation': [0.0, -60.0, 0.0], 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerSoundStopBGM', 'EventSoundRequestDucking', 'EventSoundChangeListenerPreset', 'EventTriggerStartInGameBgm', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Iron
entrypoint: None()
actions: ['EventEventNPCWarpToAnchor', 'EventGoOffstageForUser']
queries: []
params: {'IsWorld': False, 'EventMemberCreateMethod': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Dm_TBox_Field_Iron
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/DmF_ZO_MiddleBossOut/DmF_ZO_MiddleBossOut_Obj_TBox_Field_Iron/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_ZO_MiddleBossOut_TBox_Field_Iron.root.as', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Position': [3850.1689453125, 590.19287109375, -583.9616088867188], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventTriggerCloseCompanionLifeGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora031
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Zora034[Npc_Zora034_03]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call DefeatLakeBoss()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C13()


    call C14()


    call C15()


    call C16()


    call C17()


    call C18()


    call C19()

}

void DefeatLakeBoss() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
    Enemy_LikeLike_Tar.EventTriggerRemoveShootedDynamicTar()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Enemy_LikeLike_Tar', 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Enemy_LikeLike_Tar', 'SceneName': 'C02-0', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Enemy_LikeLike_Tar', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {

        fork {
            Enemy_LikeLike_Tar.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -60.0, 'Position': [3879.94189453125, 591.915771484375, -590.8051147460938]})
            Enemy_LikeLike_Tar.EventTriggerEmitXLink({'ELinkKey': 'DmF_ZO_MiddleBossOut_DemoDead', 'SLinkKey': ''})
            Enemy_LikeLike_Tar.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'DemoDead', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk_Near', 'FadeTime': 2.5})
            Enemy_LikeLike_Tar.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_ZO_MiddleBossOut_Death'})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_MiddleBossDelete', 'Index': -1, 'Value': True})
        } {

            call InitDemo()

        }

        SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
            Dm_TBox_Field_Iron.EventWarpToTargetPosAndRot({'YAngle': -60.0, 'Position': [3879.94189453125, 591.915771484375, -590.8051147460938], 'IsWaitEnd': True})
            Dm_TBox_Field_Iron.EventPlayAS({'ASName': 'C03-TBox_Field_Iron_Fall', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk_Prince_Normal', 'IsWaitEnd': False})
        }

        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [4.380000114440918, 1.7000000476837158, -0.7099999785423279], 'AtVector': [0.4099999964237213, 1.8300000429153442, 2.2100000381469727], 'TargetFovy': 51.349998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_TBox_Field_Iron.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_32', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk_Prince_Joy', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.20000000298023224, 0.0], 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Wait', 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Attendant002[ParkImu].EventTriggerEmitXLink({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Zora_CleanWater', 'SLinkKey': ''})
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-NPC_Zora_Attendant_wait'})
    } {
        EventSystemActor[01].EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Zora_Attendant001[ParkHifumi].EventTriggerEmitXLink({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Zora_CleanWater', 'SLinkKey': ''})
        Npc_Zora_Attendant001[ParkHifumi].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C05-NPC_Zora_Attendant_wait'})
    }

}

void InitDemo() {

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 110.0, 'Position': [3862.592041015625, 590.2393188476562, -583.4180908203125], 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [3879.94189453125, 593.915771484375, -590.8051147460938]})
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'Position': [3863.863037109375, 590.1934814453125, -580.88037109375], 'IsWaitEnd': True, 'YAngle': -220.0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerTargetClearSlotInfo({'Target': 0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventCancelSageBattleState({'IsWaitEnd': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'PosOffset': [0.0, 0.10000000149011612, 0.0], 'WorldPos': [3879.94189453125, 593.915771484375, -590.8051147460938], 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_ZoraFencer[ParkYona].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 134.0, 'Position': [3859.81689453125, 591.1934814453125, -577.1519775390625]})
        Npc_ZoraFencer[ParkYona].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
        Npc_ZoraFencer[ParkYona].EventTriggerAIScheduleOverWriteActionType({'ASName': 'Wait', 'ActionType': 0})
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'ResetArriveTransformFixed': False})
    } {
        Npc_Zora_Attendant002[ParkImu].EventTriggerParticipateEvent()
        Npc_Zora_Attendant002[ParkImu].EventWarpToTargetPosAndRot({'Position': [3847.2099609375, 590.79248046875, -571.357421875], 'IsWaitEnd': True, 'YAngle': 57.0})
    } {
        Npc_Zora_Attendant001[ParkHifumi].EventTriggerParticipateEvent()
        Npc_Zora_Attendant001[ParkHifumi].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3845.68505859375, 590.79248046875, -568.823486328125], 'YAngle': 65.0})
    } {
        Npc_Zora031.EventWarpToTargetPosAndRot({'Position': [3851.14697265625, 590.1934814453125, -589.6846923828125], 'IsWaitEnd': True, 'YAngle': 0.0})
        Npc_Zora031.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zora034[Npc_Zora034_03].EventWarpToTargetPosAndRot({'Position': [3844.511962890625, 591.1934814453125, -581.8264770507812], 'IsWaitEnd': True, 'YAngle': 0.0})
        Npc_Zora034[Npc_Zora034_03].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C05() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [1.940000057220459, 2.1500000953674316, 4.440000057220459], 'AtVector': [1.2400000095367432, 2.059999942779541, -0.4000000059604645], 'TargetFovy': 46.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_33', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_MidBossTeasureApeear'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 1})
        TBox_Field_Iron.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Npc_ZoraFencer[ParkYona].EventNPCTurnToTarget({'Target': 4, 'FaceControlType': 1, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'ParkHifumi', 'Direction': 220.0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'PosOffset': [0.0, 1.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void C06() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [3861.85009765625, 592.7999877929688, -579.989990234375], 'AtVector': [3857.300048828125, 593.2000122070312, -575.280029296875], 'TargetFovy': 30.260000228881836, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'ParkHifumi', 'ResetArriveTransformFixed': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3863.863037109375, 590.1934814453125, -580.88037109375], 'YAngle': -52.0})

    fork {
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06-NPC_Zora_Attendant_nod', 'IsWaitEnd': False})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 6})
        Npc_Zora_Attendant001[ParkHifumi].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06-NPC_Zora_Attendant_nod', 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_34', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.3600000143051147, 2.819999933242798, 9.0600004196167], 'AtVector': [0.029999999329447746, 2.640000104904175, 4.349999904632568], 'TargetFovy': 24.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 1.2000000476837158, 0.0], 'ResetArriveTransformFixed': False})

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_35', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk_Prince_Surprise', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[ParkYona].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Zora_Attendant002[ParkImu].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Zora_CleanWater', 'SLinkKey': '', 'IsKill': False})
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_CleanWater_Wait'})
    }

}

void C08() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-3.200000047683716, 2.75, -4.119999885559082], 'AtVector': [0.14000000059604645, 2.509999990463257, 2.059999942779541], 'TargetFovy': 24.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C09() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.3600000143051147, 2.819999933242798, 9.0600004196167], 'AtVector': [0.029999999329447746, 2.640000104904175, 4.349999904632568], 'TargetFovy': 24.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void C10() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.2699999809265137, 1.309999942779541, 3.069999933242798], 'AtVector': [0.5299999713897705, 1.5199999809265137, 1.4199999570846558], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 32.79999923706055, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_03', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_ZO_MiddleBossOut', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

}

void C11() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-2.2699999809265137, 2.5299999713897705, 3.009999990463257], 'AtVector': [0.949999988079071, 2.4800000190734863, -0.6899999976158142], 'TargetFovy': 39.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [2.5799999237060547, 1.149999976158142, 9.640000343322754], 'AtVector': [1.2200000286102295, 1.059999942779541, 4.940000057220459], 'TargetFovy': 46.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_36', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_39', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_37', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_38', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C13() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.1699999570846558, 2.180000066757202, 3.2699999809265137], 'AtVector': [-0.4300000071525574, 2.3499999046325684, 1.590000033378601], 'TargetFovy': 42.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.0099999904632568, 2.180000066757202, 2.9100000858306885], 'AtVector': [-0.27000001072883606, 2.3499999046325684, 1.2300000190734863], 'TargetFovy': 42.869998931884766, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 80, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_06', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk_Prince_Think', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C14() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.7300000190734863, 2.0299999713897705, 7.5], 'AtVector': [1.059999942779541, 1.7999999523162842, 5.820000171661377], 'TargetFovy': 29.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.4199999570846558, 2.0299999713897705, 6.019999980926514], 'AtVector': [0.9800000190734863, 1.9199999570846558, 4.25], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 17.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_41', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_43', 'NotPlayLipSyncAnim': False, 'ASName': 'C14-Yona_Talk_Angry', 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.4199999570846558, 2.0299999713897705, 6.019999980926514], 'AtVector': [0.9800000190734863, 1.9199999570846558, 4.25], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 18.899999618530273, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ZoraFencer[ParkYona].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14-Yona_Talk_St', 'IsAllSlot': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_09', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C14-Yona_Talk_01', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_ZoraFencer[ParkYona].EventPlayAS({'ASName': 'C14-Yona_Talk_02', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False})
    Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C14-Yona_Talk_02_Loop', 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_11', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.7799999713897705, 2.6500000953674316, 8.829999923706055], 'AtVector': [-1.2100000381469727, 2.619999885559082, 7.110000133514404], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.75, 2.6500000953674316, 8.84000015258789], 'AtVector': [-1.059999942779541, 2.619999885559082, 7.159999847412109], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 170, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_10', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'C15-LookDown', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
}

void C16() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.5700000524520874, 2.4700000286102295, 4.619999885559082], 'AtVector': [-0.8500000238418579, 2.440000057220459, 2.950000047683716], 'TargetFovy': 39.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.1299999952316284, 2.4700000286102295, 3.5999999046325684], 'AtVector': [-0.4099999964237213, 2.440000057220459, 1.9299999475479126], 'TargetFovy': 39.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 300, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_16', 'ASName': 'C16-realize', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_17', 'ASName': 'C16-realize_Loop', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C16-ShakeShoulders', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_44', 'ASName': 'Talk_Prince_Joy', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_45', 'NotPlayLipSyncAnim': False, 'ASName': 'C16-Talk', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.1299999952316284, 2.4700000286102295, 3.5999999046325684], 'AtVector': [-0.4099999964237213, 2.440000057220459, 1.9299999475479126], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 8, 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'C16-Talk_Prince', 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_Zora_Attendant001[ParkHifumi].EventWarpToTargetPosAndRot({'YAngle': 107.46939849853516, 'Position': [3845.39501953125, 590.79248046875, -559.7573852539062], 'IsWaitEnd': True})
    Npc_Zora_Attendant001[ParkHifumi].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Zora_CleanWater', 'SLinkKey': '', 'IsKill': False})
    Npc_Zora_Attendant001[ParkHifumi].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_CleanWater_Wait'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_ParkYonaDeskAppear', 'Index': -1, 'Value': True})
}

void C17() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.8600000143051147, 1.3300000429153442, -0.23000000417232513], 'AtVector': [1.7100000381469727, 1.9700000286102295, 1.25], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'C17-Transit', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 10.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 14})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Player', 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [3862.708984375, 592.0567016601562, -583.0560302734375], 'ResetArriveTransformFixed': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -24.0, 'Position': [3862.708984375, 590.2086791992188, -583.253173828125], 'UseDemoWait': True})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -1.0, 0.0], 'TurnFaceControlType': 1})
    }


    fork {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'DynamicGenerateSage', 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [-0.7877200245857239, 3.3281168937683105, -1.6721190214157104], 'PosVector': [0.45025599002838135, 1.9256060123443604, 2.2255859375], 'MoveTime': 20, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_46', 'ASName': 'Talk_Prince_Special', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 53})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Shido_ShineTooth', 'SLinkKey': 'ShiningTooth'})
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_ZO_MiddleBossOut_Npc_Shido_ShineTooth', 'SLinkKey': '', 'IsKill': False})
    } {
        Npc_ZoraFencer[ParkYona].EventWarpToTargetPosAndRot({'YAngle': 151.35060119628906, 'Position': [3859.81689453125, 591.19287109375, -577.1519775390625], 'IsWaitEnd': True})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [2.3299999237060547, 0.3799999952316284, 10.9399995803833], 'AtVector': [1.7599999904632568, 0.5, 9.220000267028809], 'TargetFovy': 23.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'C17-Run', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Target': 0, 'WorldPos': [3847.610107421875, 592.4290161132812, -587.77001953125], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    }

    Npc_ZoraFencer[ParkYona].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
}

void C18() {

    fork {
        EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_48', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    TBox_Field_Iron.EventEventNPCWarpToAnchor({'OffsetBase': 1, 'InstanceName': 'MiddleTreasureFinalPos', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.2200000286102295, 1.2999999523162842, 5.46999979019165], 'AtVector': [0.8199999928474426, 1.4900000095367432, 3.7100000381469727], 'TargetFovy': 16.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_ZO_MiddleBossOut', 'IsUseSuspendFade': False})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    } {
        Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_49', 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [1.8799999952316284, 0.4699999988079071, 9.899999618530273], 'AtVector': [1.2899999618530273, 0.550000011920929, 8.1899995803833], 'TargetFovy': 30.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[ParkYona].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_ZO_MiddleBossOut:Dm_ZO_0010_42', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C19() {
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-1.9700000286102295, 2.819999933242798, -8.90999984741211], 'AtVector': [-1.590000033378601, 2.5199999809265137, -7.159999847412109], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfZora_LakeYonaMove'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Water.IsSageDynamicGenerate', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode', 'Value': False, 'Index': -1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'GoToLakeShido', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
