-------- EventFlow: Dm_SY_0006 --------

Actor: HorseGod001
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTakeSelectOwnedHorse', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventResurrectHorse', 'EventWaitWhileCreatingOwnedHorse', 'EventTriggerSetOwnedHorseAS', 'EventTriggerOwnedHorseSoundIgnoreDucking', 'EventTriggerOwnedHorseSoundIgnoreDuckingOff']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDiffuseAttenuate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: TwnObj_FairySpring_E_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[HorseGod]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    TwnObj_FairySpring_E_01.EventTriggerParticipateEvent()
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 180.0, 'TargetActorKind': 1, 'PositionOffset': [0.0, 2.940000057220459, 7.0], 'UseDemoWait': True, 'ActorName': 'TwnObj_FairySpring_E_01'})
    GameSystemActor.EventResurrectHorse({'IsWaitEnd': True})
    Dm_Locator.EventWarpToTargetPosAndRot({'YAngle': 90.90070343017578, 'IsWaitEnd': True, 'Position': [4292.7939453125, 254.5019989013672, -3203.0009765625]})
    HorseGod001.EventTakeSelectOwnedHorse({'IsUseHarness': False, 'IsWaitEnd': True, 'IsAutoIgnition': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'TwnObj_FairySpring_E_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        HorseGod001.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Give_Refuge', 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    } {
        HorseGod001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_HorseGod_Revival_SpiralSmoke'})
        HorseGod001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_HorseGod_Revival_Start'})
        HorseGod001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_HorseGod_Revival_Main'})
        HorseGod001.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_HorseGod_Revival_End'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SY_0006', 'CommandLife': 2, 'IsReleaseDucking': False})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': ''})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 193})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.10000000149011612})
    }

    Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_Horse_Revival_Spiral'})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_HorseRevival_Start', 'IsIgnoreDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'AtVector': [0.8622660040855408, 7.527577877044678, 14.442090034484863], 'PosVector': [6.104083061218262, 3.8274459838867188, 9.694549560546875], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 100, 'IsWaitEnd': False, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'PosVector': [6.170000076293945, 3.319999933242798, 9.619999885559082], 'AtVector': [0.28999999165534973, 1.7599999904632568, 14.899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_Horse_Revival_Omen'})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_HorseRevival_Omen', 'IsIgnoreDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SY_0006_Horse_Revival_Spiral'})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_HorseRevival_Start', 'GroupName': '', 'FadeFrame': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventWaitWhileCreatingOwnedHorse({'IsWaitEnd': True, 'IsAutoIgnition': True})
    Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SY_0006_Horse_Revival_Omen'})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_HorseRevival_Omen', 'GroupName': '', 'FadeFrame': -1})
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
    Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0006_Horse_Revival_End'})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_HorseRevival_End', 'IsIgnoreDucking': False})
    GameSystemActor.EventTriggerSetOwnedHorseAS({'Event': 26})
    GameSystemActor.EventTriggerOwnedHorseSoundIgnoreDucking()
    HorseGod001.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード長い)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
    GameSystemActor.EventTriggerOwnedHorseSoundIgnoreDuckingOff()

    fork {
        HorseGod001.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Dm_SY_0006:Comment_00', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        HorseGod001.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_SY_0006:Comment_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        HorseGod001.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_SY_0006:Comment_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'PosVector': [0.0, 4.496094226837158, 11.80090045928955], 'AtVector': [0.0, 6.680527210235596, 5.561943054199219], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'PosVector': [0.05932600051164627, 2.9158170223236084, 9.8955078125], 'AtVector': [0.02294900082051754, 6.75701904296875, 2.5738070011138916], 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        HorseGod001.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_SY_0006:Comment_03', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ASName': 'TalkAngry', 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'PosVector': [0.0, 4.496094226837158, 11.80090045928955], 'AtVector': [0.0, 6.680527210235596, 5.561943054199219], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        HorseGod001.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        GameSystemActor[HorseGod].EventWait({'IsWaitEnd': True, 'Frames': 10})
        HorseGod001.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_SY_0006:Comment_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    call DmF_SY_FairyWorking.Exit_HorseGod001({'Npc_DressFairy': ActorIdentifier(name="HorseGod001"), 'TargetFairy': 'HorseGod001', 'TargetPond': 'TwnObj_FairySpring_E_01'})

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_FairySpring_E_01', 'PosVector': [4.471436023712158, 6.14385986328125, 3.9896390438079834], 'AtVector': [1.74658203125, 3.239959955215454, 9.62384033203125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'WorldPos': [4294.47119140625, 254.65179443359375, -3200.194091796875], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'Target': 3, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
