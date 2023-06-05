-------- EventFlow: Dm_RT_0043 --------

Actor: Npc_Zelda_Black_Event[SageOfWind_CheckTerminal]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0043/Dm_RT_0043_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0043_Npc_Zelda_AncientHyrule.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Demo_Locator01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-2859.5, 1622.134033203125, -2992.5], 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventWait', 'EventTriggerControllerRumble', 'EventTriggerEraseActorsAroundAnchor', 'EventTriggerEnableAreaCulling', 'EventTriggerDisableAreaCulling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerStopInAir', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventNpcRitoLand', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0043/Dm_RT_0043_Npc_Rito_Moto_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0043_Npc_Rito_Moto_Young.root.as', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_RT_0043() {

    call Pre()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.30000001192092896, 2.440000057220459, -5.730000019073486], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [1.5499999523162842, 4.050000190734863, -15.619999885559082], 'AtVector': [1.149999976158142, 8.329999923706055, -2.809999942779541], 'TargetFovy': 30.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [1.590000033378601, 3.130000114440918, -17.040000915527344], 'AtVector': [1.1299999952316284, 2.1700000762939453, -2.140000104904175], 'TargetFovy': 30.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 240, 'StartAccelerateRate': 0.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01-LookAround-Npc_Rito_Moto_Young-A-0'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'C01-LookAround-Npc_Rito_Moto_Young-A-0', 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-4.960000038146973, 1.840000033378601, 6.849999904632568], 'AtVector': [0.7400000095367432, 0.5400000214576721, -2.690000057220459], 'TargetFovy': 31.299999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-5.480000019073486, 1.9600000381469727, 7.730000019073486], 'AtVector': [0.7400000095367432, 0.5400000214576721, -2.690000057220459], 'TargetFovy': 31.299999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 900, 'IsLinearMove': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_02', 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ASName': 'C01-LookAround-Npc_Rito_Moto_Young-A-0', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'Target': 0, 'Direction': 0.0, 'WorldPos': [-2862.06689453125, 1624.5400390625, -2969.52294921875], 'PosOffset': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
    } {
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 178.4998016357422, 'Position': [-2863.197998046875, 1623.4339599609375, -2968.821044921875]})
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Pre() {
    GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorInstanceName': 'Dm_RT_0043_Anchor', 'Height': 10.0, 'Radius': 30.0, 'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoLand({'LandingHeight': 2.0, 'FallSpped': 2.0, 'IsWaitEnd': True, 'FlagOnly': False, 'IsChangePhysicsSettingDynamic': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -169.50230407714844, 'Position': [-2841.610107421875, 1623.4339599609375, -2952.300048828125], 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-2843.6279296875, 1623.4339599609375, -2951.87890625], 'YAngle': -164.3726043701172})
    Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventTriggerParticipateEvent()
    Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-2849.306884765625, 1623.4339599609375, -2929.406005859375], 'YAngle': 149.0500030517578})
    Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Dm_Locator[Demo_Locator01].EventTriggerParticipateEvent()
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_Supercell_A', 'KeyName': 'StrongWind'})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2841.139892578125, 1624.9200439453125, -2951.030029296875], 'AtVector': [-2855.56005859375, 1621.6099853515625, -2962.2900390625], 'TargetFovy': 47.20000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_09', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'EndRecelerateRate': -0.5, 'PosVector': [-2842.550048828125, 1624.9200439453125, -2952.14990234375], 'AtVector': [-2857.06005859375, 1623.800048828125, -2963.719970703125], 'TargetFovy': 39.5, 'MoveTime': 120, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C04-Npc_Zelda_AncientHyrule-A-0_Walk', 'ForceFadeInFrame': -1.0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_RT_0043', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DgnObj_Terminal_A_01', 'PosVector': [0.03999999910593033, 5.650000095367432, -4.960000038146973], 'AtVector': [9.3100004196167, -3.380000114440918, 2.440000057220459], 'TargetFovy': 31.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 70, 'Actor1ActorName': 'DgnObj_Terminal_A_01', 'PosVector': [-2.2899999618530273, 6.989999771118164, -7.840000152587891], 'AtVector': [8.350000381469727, -3.380000114440918, 0.6600000262260437], 'TargetFovy': 31.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 58})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C06-Npc_Rito_Moto_Young-A-0_Run', 'IsAnimeDriven': True, 'IsWaitEnd': False})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.6399999856948853, 0.27000001072883606, 2.5799999237060547], 'AtVector': [1.6299999952316284, 1.7799999713897705, -2.140000104904175], 'TargetFovy': 26.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_11', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C05-Npc_Rito_Moto_Young-A-0_Run', 'IsWaitEnd': False})
    } {
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait', 'IsAnimeDriven': False})
        Npc_Zelda_Black_Event[SageOfWind_CheckTerminal].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-2850.39306640625, 1623.4339599609375, -2965.26806640625], 'YAngle': -147.63589477539062})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2841.5400390625, 1625.5899658203125, -2954.179931640625], 'AtVector': [-2854.840087890625, 1624.8299560546875, -2966.3798828125], 'TargetFovy': 27.700000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'StartAccelerateRate': 0.5, 'IsWaitEnd': False, 'PosVector': [-2844.27001953125, 1625.5899658203125, -2956.429931640625], 'AtVector': [-2857.570068359375, 1624.8299560546875, -2968.6298828125], 'TargetFovy': 27.700000762939453, 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 15.0})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 0, 'ActorName': 'DgnObj_Terminal_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [0.6700000166893005, 0.3499999940395355, -2.4800000190734863], 'AtVector': [0.4300000071525574, 0.5400000214576721, -1.7699999809265137], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-2857.35888671875, 1627.5, -2978.635009765625], 'ResetArriveTransformFixed': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_13', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C07-Npc_Rito_Moto_Young-A-0_Surprised', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 15.0, 'ASName': 'C07-Npc_Rito_Moto_Young-A-0_Surprised_Loop'})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-2845.282958984375, 1623.4339599609375, -2959.4619140625], 'YAngle': -143.29820251464844, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [-2847.39892578125, 1625.5, -2962.138916015625], 'TurnFaceControlType': 1})
    } {
        Dm_Locator[Demo_Locator01].EventTriggerEmitXLink({'ELinkKey': 'Dm_RT_0043_Updraft_LargeDungeonWind_Start', 'SLinkKey': ''})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 1, 'Power': 2.0, 'LoopEndCount': 1, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'AscendingCurrent_LargeDungeonWind_Weak', 'KeyName': 'Always'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.7699999809265137, 0.8799999952316284, 4.989999771118164], 'AtVector': [-0.3100000023841858, 1.100000023841858, -0.1899999976158142], 'TargetFovy': 16.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 900, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.8500000238418579, 0.8500000238418579, 5.829999923706055], 'AtVector': [-0.25, 1.1299999952316284, -0.9300000071525574], 'TargetFovy': 16.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_14', 'ASName': 'C07-Npc_Rito_Moto_Young-A-0_Surprised_Loop', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})

        fork {
            Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'ASName': 'C07-Npc_Rito_Moto_Young-A-0_Surprised_Ed', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
            Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        }

        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 10.0})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 2, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_15', 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        }

        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_17', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'C08-Npc_Rito_Moto_Young-A-0_Lookleft', 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWind_SwitchingUpdraft', 'Value': True, 'Index': -1})
    }

}

void C09() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2866.659912109375, 1627.739990234375, -2975.43994140625], 'AtVector': [-2858.2900390625, 1624.2900390625, -2972.090087890625], 'TargetFovy': 36.099998474121094, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 150, 'StartAccelerateRate': 0.5, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2869.10009765625, 1628.739990234375, -2976.409912109375], 'AtVector': [-2858.2900390625, 1624.2900390625, -2972.090087890625], 'TargetFovy': 36.099998474121094, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ForceFadeInFrame': 0.0, 'Partial': '', 'ASName': 'C09-Npc_Rito_Moto_Young-A-0_Turn', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'IsAllSlot': True})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0043:Dm_RT_0043_18', 'ASName': 'Wait', 'EndDialogOption': 3, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_RT_0043', 'IsUseSuspendFade': False})
    GameSystemActor.EventTriggerDisableAreaCulling()
}
