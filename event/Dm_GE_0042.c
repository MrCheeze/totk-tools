-------- EventFlow: Dm_GE_0042 --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTalk', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerRequestLookAtTheFront', 'EventUnequipWeapon']
queries: ['EventQueryCheckIsSageDrawn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0042/Dm_GE_0042_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0042_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Locator_NPC_Position]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Rotation': [0.0, -45.0, 0.0], 'IsWorld': True, 'IsGrounding': False, 'Position': [-4512.77001953125, 134.47000122070312, 3605.780029296875], 'IsBindNearestActor': False}

Actor: PostProcessingActor[Dm_GE_0042_Cam]
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[Locator_Cam2_Position]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-4518.55419921875, 132.4654998779297, 3611.56201171875], 'Rotation': [0.0, -45.0, 0.0], 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0042/Dm_GE_0042_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0042_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()


    call C02()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.10000000149011612, 3.309999942779541, -5.880000114440918], 'AtVector': [0.0, 1.7999999523162842, -0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        PostProcessingActor[Dm_GE_0042_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'RequiredFrame': 0, 'StartDistance': 3000.0, 'EndDistance': 3000.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'StartBluarLevel': 0.699999988079071, 'EndBluarLevel': 0.699999988079071, 'IsPrimaryApply': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void Pre() {
    DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    Dm_Locator[Locator_NPC_Position].EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'OffsetBase': 0, 'YAngle': 145.0, 'ActorName': 'Dm_Locator', 'PositionOffset': [-9.0, 0.0, 10.0], 'InstanceName': 'Locator_NPC_Position'})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.4699999988079071, 0.8299999833106995, 3.049999952316284], 'AtVector': [-0.5600000023841858, 1.25, 0.9399999976158142], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'MoveTime': 460, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'PosVector': [0.4000000059604645, 0.8299999833106995, 2.9100000858306885], 'AtVector': [-0.6299999952316284, 1.25, 0.800000011920929], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_GE_0042:Dm_GE_0042_Text_001_b', 'NotPlayLipSyncAnim': False, 'ASName': 'C02-Gerudo_Queen_Young_LookFront', 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02-Link-A-0_Look', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor[Dm_GE_0042_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 15.5, 'EndFNumber': 15.5, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call thunder_on()

}

void C01() {

    fork {
        Dm_Locator[Locator_Cam2_Position].EventTriggerParticipateEvent()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'InterpolateFrame': -1.0, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C01-0', 'TargetActorInstanceName': 'Locator_Cam2_Position', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {

        call Pre()


        call thunder_off()

        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01-Gerudo_Queen_Young_Look_Loop', 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:環境系SE下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GE_0042:Dm_GE_0042_Text_000_b', 'NotPlayLipSyncAnim': False, 'ASName': 'C01-Gerudo_Queen_Young_Look_Loop', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        PostProcessingActor[Dm_GE_0042_Cam].EventSetDoFForFlowchart({'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'StartDistance': 5.0, 'EndDistance': 5.0})
    } {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4523.39990234375, 134.4936065673828, 3615.492919921875], 'YAngle': 135.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Link-A-0_LookUp_Loop', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void thunder_off() {
    if !Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventQueryCheckIsSageDrawn({'DynamicEquipmentSlot': 0}) {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
    }
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}

void thunder_on() {
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}
