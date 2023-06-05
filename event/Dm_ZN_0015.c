-------- EventFlow: Dm_ZN_0015 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventSageOfSoulLightPreActorChange', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopSound', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: MinusObj_Zonau_RaumiGolem_Storage_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventSetForbidTraverse', 'EventResetForbidTraverse']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Zonau_A_57
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [868.0, -465.0, 2110.0]}

void Dm_ZN_0015() {

    call C01()


    call C02()


    call C03()


    call C04()


    call C12()


    call Period()

}

void C01() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    DgnObj_Zonau_A_57.EventTriggerParticipateEvent()
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    MinusObj_Zonau_RaumiGolem_Storage_A_01.EventPlayAS({'ASName': 'Storage_HeadAndBody_On', 'Partial': 'HeadAndBody', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [868.0499877929688, -455.07000732421875, 2155.929931640625], 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': [867.6799926757812, -448.55999755859375, 2142.81005859375], 'ActorName': '', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'DemoLookUp', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'MinusObj_Zonau_RaumiGolem_Storage_A_01', 'PosVector': [0.0, 6.489999771118164, 4.409999847412109], 'AtVector': [0.0, 6.320000171661377, -0.6100000143051147], 'TargetFovy': 42.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
        CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZN_0015_AncientCall'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'StartAccelerateRate': 1.0, 'MoveTime': 126, 'IsLinearMove': False, 'Actor1ActorName': 'MinusObj_Zonau_RaumiGolem_Storage_A_01', 'PosVector': [0.05000000074505806, 2.2300000190734863, 8.770000457763672], 'AtVector': [0.009999999776482582, 3.9100000858306885, -0.6800000071525574], 'TargetFovy': 48.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        MinusObj_Zonau_RaumiGolem_Storage_A_01.EventPlayAS({'ASName': 'Storage_ArmAndLeg_OnFlash', 'Partial': 'ArmAndLeg', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        GameSystemActor.EventSetForbidTraverse({'IsWaitEnd': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
}

void C02() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoLookUp', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'StartAccelerateRate': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [2.0, 10.0, 15.0], 'AtVector': [0.0, 1.7000000476837158, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'StartAccelerateRate': 0.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7000000476837158, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [0.0, 10.0, 15.0], 'MoveTime': 140, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'StartAccelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'AtVector': [0.0, 1.7000000476837158, 0.0], 'PosVector': [-2.0, 10.0, 15.0], 'MoveTime': 140, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZN_0015', 'CommandLife': 2, 'IsReleaseDucking': False})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_022_b', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [4.289999961853027, 1.5, -4.71999979019165], 'AtVector': [3.049999952316284, 1.75, -0.7799999713897705], 'TargetFovy': 52.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [2.8499999046325684, 0.6000000238418579, -1.5800000429153442], 'AtVector': [2.319999933242798, 1.0099999904632568, 0.41999998688697815], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 735, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_023_b', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_024_b', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_025_b', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_026_b', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void Period() {
    Player.EventPlayerWait({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.3499999940395355, 2.359999895095825, -5.360000133514404], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        MinusObj_Zonau_RaumiGolem_Storage_A_01.EventPlayAS({'Partial': 'ArmAndLeg', 'ASName': 'Storage_ArmAndLeg_Off', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Collected_AllParts', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'c04-0', 'RootType': 3, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_027_b', 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_SatelliteTemple_LightOn_RightLeg'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_EffectOn_RightLeg'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Torch_On', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 211})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_SatelliteTemple_LightOn_LeftLeg'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_EffectOn_LeftLeg', 'Index': -1, 'Value': True})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Torch_On', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_028_b', 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_SatelliteTemple_LightOn_LeftArm'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_EffectOn_LeftArm'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Torch_On', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 186})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_SatelliteTemple_LightOn_RightArm'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_EffectOn_RightArm'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Torch_On', 'IsIgnoreDucking': False})
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Target': 0, 'ActorName': '', 'Direction': 0.0, 'IsWaitEnd': False, 'WorldPos': [868.7000122070312, -448.55999755859375, 2142.81005859375], 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void C12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-6.130000114440918, 10.359999656677246, 13.399999618530273], 'AtVector': [-5.630000114440918, 9.680000305175781, 12.350000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        fork {
            ChallengeSystemActor.EventSageOfSoulLightPreActorChange({'IsWaitEnd': True})
            GameSystemActor.EventResetForbidTraverse()
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [-5.449999809265137, 9.430000305175781, 11.960000038146973], 'AtVector': [-4.710000038146973, 8.399999618530273, 10.390000343322754], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveTime': 314, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'OverrideStyle': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0015:Dm_ZN_0015_Text_029_b', 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZN_0015', 'IsUseSuspendFade': False})
    }

    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZN_0015_AncientCall', 'IsKill': False})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
