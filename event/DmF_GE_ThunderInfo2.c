-------- EventFlow: DmF_GE_ThunderInfo2 --------

Actor: Npc_Gerudo_Queen_Young[Training]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_SubWeapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_ThunderInfo2/DmF_GE_ThunderInfo2_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_ThunderInfo2_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: TwnObj_City_GerudoScarecrowStrikedLightning_A_01[Training1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_City_GerudoScarecrowStrikedLightning_A_01[Training2]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[player_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': True})

    call Common.AirStartUP_Player()

    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    Dm_Locator[demo].EventWarpToTargetPosAndRot({'Position': [-3782.490966796875, 137.97940063476562, 2639.969970703125], 'YAngle': 87.78932189941406, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfGerudo_RougeLightningOn'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_RougeTraining1OK'})
    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': '', 'ASName': 'AS-C01-Npc_Gerudo_Queen_Young-A-0', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
    Npc_Gerudo_Queen_Young[Training].EventTriggerRequestLookAtTheFront()
    TwnObj_City_GerudoScarecrowStrikedLightning_A_01[Training1].EventTriggerParticipateEvent()
    TwnObj_City_GerudoScarecrowStrikedLightning_A_01[Training2].EventTriggerParticipateEvent()

    call C01()


    call C02()

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Training', 'PosVector': [-1.2100000381469727, 0.7400000095367432, 1.9900000095367432], 'AtVector': [-0.7099999785423279, 0.949999988079071, 1.149999976158142], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 40.0, 'EndFNumber': 40.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'demo', 'OffsetBase': 1, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': 'AS-C01-Npc_Gerudo_Queen_Young-A-2', 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo2:Talk_00', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3785.7900390625, 139.60000610351562, 2641.510009765625], 'AtVector': [-3784.7900390625, 139.57000732421875, 2641.389892578125], 'TargetFovy': 50.099998474121094, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 92.0, 'Position': [-3780.0, 138.0, 2643.300048828125], 'UseDemoWait': True})

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': False})

        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3781.2099609375, 139.72000122070312, 2643.389892578125], 'AtVector': [-3781.239990234375, 139.6999969482422, 2642.389892578125], 'TargetFovy': 50.099998474121094, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'MoveTime': 50, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'ASName': 'AS-C01-Npc_Gerudo_Queen_Young-A-1', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 25.0})
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ASName': 'AS-C01-Npc_Gerudo_Queen_Young-A-0', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[player_wait].EventWait({'IsWaitEnd': True, 'Frames': 21})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Training', 'IsWaitEnd': False, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C02() {
    PostProcessingActor.EventSetDoFForFlowchart({'StartDistance': 7.0, 'EndDistance': 7.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 70.0, 'EndFNumber': 70.0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'TwnObj_City_GerudoScarecrowStrikedLightning_A_01', 'Actor1InstanceName': 'Training2', 'PosVector': [1.0099999904632568, 2.319999933242798, 30.899999618530273], 'TargetFovy': 19.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.9800000190734863, 2.299999952316284, 29.90999984741211], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'TwnObj_City_GerudoScarecrowStrikedLightning_A_01', 'Actor1InstanceName': 'Training2', 'PosVector': [1.0099999904632568, 2.319999933242798, 30.899999618530273], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 16.5, 'MoveTime': 150, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.9800000190734863, 2.299999952316284, 29.90999984741211], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3780.489990234375, 138.02000427246094, 2639.97998046875], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo2:Talk_01', 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3782.4599609375, 137.97999572753906, 2639.89990234375], 'YAngle': 180.0})
    }

    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.019999999552965164, 3.059999942779541, -5.659999847412109], 'AtVector': [-0.029999999329447746, 2.8399999141693115, -4.679999828338623], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 20, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_RougeLightningOn'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}
