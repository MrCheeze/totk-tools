-------- EventFlow: Dm_GE_0006 --------

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis007[PreDefense]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeEmotion', 'EventWarpToTargetActor', 'EventTalk', 'EventGoOffstageForUser', 'EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Npc_Gerudo_General.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Npc_Gerudo_General/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[PreDefense]
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventGoOffstageForUser', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeEmotion', 'EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[D]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'Position': [-3190.0, 130.0, 2519.0], 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[E]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'Position': [-3190.0, 130.0, 2519.0], 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[F]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'Position': [-3190.0, 130.0, 2519.0], 'EventMemberCreateMethod': 1, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[H]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[G]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[I]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[J]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3190.0, 130.0, 2519.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerPlayerLookAtObject', 'EventWait', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SmallOasis011
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_OasisStep_B
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_SmallOasis014
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Npc_SmallOasis013
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0006/Dm_GE_0006_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0006_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm', 'EventTriggerSoundBeginForbidDialogDucking', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventSoundStartSound', 'EventTriggerSoundStopSound', 'EventTriggerSetNpcVoiceFarMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call GibudoIn()


    call Gibudo()


    call Byura()


    call Soldier1()


    call Soldier2()


    call RougeIn()


    call Thunder()


    call Rouge()


    call RougePoint()


    call Encourage()

}

void Gibudo() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_oasis007', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-33.91999816894531, 15.5600004196167, -32.900001525878906], 'AtVector': [-11.319999694824219, 4.769999980926514, 13.319999694824219], 'TargetFovy': 24.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 120, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.20000000298023224, 'Actor1ActorName': 'Npc_oasis007', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-33.91999816894531, 15.5600004196167, -32.900001525878906], 'AtVector': [-1.8700000047683716, 4.769999980926514, 7.349999904632568], 'TargetFovy': 24.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[E].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'DemoWalk', 'ForceFadeInFrame': -1.0})
        Dm_Enemy_Zombie_Junior_Defense[J].EventPlayAS({'IsWaitEnd': False, 'ASName': 'DemoWalk', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Dm_Enemy_Zombie_Junior_Defense[G].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'DemoWalk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Enemy_Zombie_Junior_Defense[F].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'DemoWalk', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Enemy_Zombie_Junior_Defense[D].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'DemoWalk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GE_0006_C02_Herd', 'IsIgnoreDucking': False})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 90})
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        Npc_oasis007[PreDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'DemoBattleWait', 'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_008_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_GE_0006_C02_Herd', 'GroupName': '', 'FadeFrame': -1})
}

void Byura() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_oasis007', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-2.200000047683716, 2.2899999618530273, 3.0299999713897705], 'AtVector': [0.3100000023841858, 1.899999976158142, -0.30000001192092896], 'TargetFovy': 26.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call Hide_Gibudo()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_oasis007[PreDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [-10.0, 2.0, 0.0], 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void Thunder() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C07-1', 'TargetActorName': 'Dm_Enemy_Zombie_Junior_Defense', 'TargetActorInstanceName': 'E', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_oasis007[PreDefense].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_SmallOasis011.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_OasisStep_B.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_SmallOasis014.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_SmallOasis013.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[E].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -50.0, 'Position': [-3198.72802734375, 129.28619384765625, 2579.028076171875]})
        Dm_Enemy_Zombie_Junior_Defense[F].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -50.0, 'Position': [-3194.89599609375, 129.37359619140625, 2581.60107421875]})

        call Show_Gibudo()

    } {
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SageSkillVoice'})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Dm_Enemy_Zombie_Junior_Defense[F].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0006_Chemical_Lightning'})

        fork {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Dm_Enemy_Zombie_Junior_Defense[E].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Chemical_Fire_Left', 'SLinkKey': ''})
            Dm_Enemy_Zombie_Junior_Defense[E].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'DemoDead_A', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
            Dm_Enemy_Zombie_Junior_Defense[E].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Dm_Enemy_Zombie_Junior_Defense[E].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Death_Disappear', 'SLinkKey': ''})
        } {
            Dm_Enemy_Zombie_Junior_Defense[F].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Chemical_Fire_Right', 'SLinkKey': ''})
            Dm_Enemy_Zombie_Junior_Defense[F].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'DemoDead_B', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
            Dm_Enemy_Zombie_Junior_Defense[F].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Dm_Enemy_Zombie_Junior_Defense[F].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Death_Disappear', 'SLinkKey': ''})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    }

}

void Rouge() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-0.28999999165534973, 0.3799999952316284, 3.2799999713897705], 'AtVector': [0.2199999988079071, 0.8500000238418579, 0.3799999952316284], 'TargetFovy': 34.380001068115234, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Lightning_End', 'SLinkKey': ''})
        Npc_Gerudo_Queen_Young[PreDefense].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Thunder', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[A].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Dm_Enemy_Zombie_Junior_Defense[B].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Dm_Enemy_Zombie_Junior_Defense[C].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Dm_Enemy_Zombie_Junior_Defense[D].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

        call Hide_Gibudo()

    } {
        Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        Npc_oasis007[PreDefense].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Relive', 'IsAllSlot': True})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    } {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:環境系ミュート(Dm_GE_0006用)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-0.28999999165534973, 0.3799999952316284, 3.2799999713897705], 'AtVector': [0.03999999910593033, 0.8999999761581421, 0.3700000047683716], 'TargetFovy': 34.380001068115234, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Gerudo_Queen_Young[PreDefense].EventTalk({'IsAnimeDriven': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_003_b', 'ASName': 'Thunder', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis007[PreDefense].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'GrabSword', 'IsAllSlot': True})
    Npc_Gerudo_Queen_Young[PreDefense].EventTriggerChangeEmotion({'EmotionType': 6, 'IsActFaceOnly': True})
    Npc_Gerudo_Queen_Young[PreDefense].EventTalk({'IsAnimeDriven': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_004_b', 'ASName': 'Thunder', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void RougePoint() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'PreDefense', 'PosVector': [-0.4399999976158142, 1.6200000047683716, 2.190000057220459], 'AtVector': [0.05000000074505806, 1.3700000047683716, 0.6899999976158142], 'TargetFovy': 25.790000915527344, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_oasis007[PreDefense].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Gerudo_Queen_Young[PreDefense].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'Point', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Gerudo_Queen_Young[PreDefense].EventTalk({'IsAnimeDriven': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_005_b', 'ASName': 'Point', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False})
}

void Encourage() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'TargetActorInstanceName': 'PreDefense', 'SceneName': 'C07-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_oasis007[PreDefense].EventWait({'Frames': 1, 'IsWaitEnd': False})
        Npc_Gerudo_Queen_Young[PreDefense].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'LookLink', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3203.699951171875, 129.6999969482422, 2590.72998046875], 'YAngle': 125.0, 'IsWaitEnd': True, 'UseDemoWait': False})
    }

    Npc_Gerudo_Queen_Young[PreDefense].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_006_b', 'IsCloseDialog': False, 'ASName': 'LookLink', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void Ready() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3195.513916015625, 129.42739868164062, 2584.632080078125], 'YAngle': 120.0, 'UseDemoWait': True})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:環境系ミュート(Dm_GE_0006用)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    Dm_Locator[pos].EventWarpToTargetPosAndRot({'Position': [-3192.18505859375, 129.4669952392578, 2580.39990234375], 'YAngle': 120.0, 'IsWaitEnd': True})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'NPC'})

    fork {

        call Ready_Gibudo()

    } {
        Npc_oasis007[PreDefense].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'PositionOffset': [-4.5, 0.0, -1.5199999809265137], 'OffsetBase': 0, 'YAngle': 120.0})
        Npc_oasis007[PreDefense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[PreDefense].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
        Npc_oasis007[PreDefense].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'DemoBattleWait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Gerudo_Queen_Young[PreDefense].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0]})
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerChangeEmotion({'EmotionType': 6, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerRequestLookAtTheFront()
        Npc_Gerudo_Queen_Young[PreDefense].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'PreDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_SmallOasis011.EventWarpToTargetPosAndRot({'YAngle': 100.0, 'IsWaitEnd': False, 'Position': [-3196.489990234375, 129.42999267578125, 2526.56005859375]})
        Npc_OasisStep_B.EventWarpToTargetPosAndRot({'YAngle': 100.0, 'IsWaitEnd': False, 'Position': [-3191.47998046875, 129.38999938964844, 2529.719970703125]})
        Npc_SmallOasis014.EventWarpToTargetPosAndRot({'YAngle': 100.0, 'IsWaitEnd': False, 'Position': [-3183.7900390625, 129.52000427246094, 2578.3701171875]})
        Npc_SmallOasis013.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 100.0, 'Position': [-3182.699951171875, 130.08999633789062, 2584.659912109375]})
        Npc_SmallOasis011.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_BattleWait'})
        Npc_OasisStep_B.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_BattleWait'})
        Npc_SmallOasis014.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_BattleWait'})
        Npc_SmallOasis013.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
    }

}

void GibudoIn() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'B', 'PosVector': [3.130000114440918, 0.4699999988079071, 9.779999732971191], 'AtVector': [-1.399999976158142, 1.850000023841858, -1.4199999570846558], 'TargetFovy': 18.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Enemy_Zombie_Junior_Defense', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'MoveTime': 120, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.20000000298023224, 'Actor1InstanceName': 'B', 'PosVector': [4.420000076293945, 0.4699999988079071, 8.890000343322754], 'AtVector': [-0.10999999940395355, 1.850000023841858, -2.309999942779541], 'TargetFovy': 18.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Enemy_Zombie_Junior_Defense', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'DemoWalk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Enemy_Zombie_Junior_Defense[A].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'DemoWalk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Dm_Enemy_Zombie_Junior_Defense[C].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'DemoWalk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_Wind_Loop', 'IsIgnoreDucking': False})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_KarakaraDefense', 'CommandLife': 2, 'IsReleaseDucking': True})
        SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
    }

}

void RougeIn() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': 'PreDefense', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C03-0', 'TargetActorName': 'Npc_oasis007', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_oasis007[PreDefense].EventTriggerRequestLookAtTheFront()
        Dm_Enemy_Zombie_Junior_Defense[J].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Enemy_Zombie_Junior_Defense[G].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_oasis007[PreDefense].EventTalk({'MessageId': 'EventFlowMsg/Dm_GE_0006:Dm_GE_0006_Text_007_b', 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'DemoBattleWait', 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_Wind_Loop', 'GroupName': '', 'FadeFrame': -1})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        Npc_Gerudo_Queen_Young[PreDefense].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Npc_oasis007', 'InstanceName': 'PreDefense', 'PositionOffset': [-1.0, 0.0, -4.699999809265137]})

        fork {
            Npc_oasis007[PreDefense].EventPlayAS({'Partial': '', 'ASName': 'LookUp', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
            Npc_oasis007[PreDefense].EventWait({'IsWaitEnd': True, 'Frames': 50})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                Npc_Gerudo_Queen_Young[PreDefense].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Arrive', 'ForceFadeInFrame': -1.0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.699999988079071})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.699999988079071})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.699999988079071})
            }

            Npc_Gerudo_Queen_Young[PreDefense].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0]})
            Npc_Gerudo_Queen_Young[PreDefense].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    }

}

void Soldier1() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'Soldier1', 'RootType': 3, 'TargetActorName': 'Npc_SmallOasis011', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[I].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_OasisStep_B.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_BattleWait_Fear'})
    }

}

void Soldier2() {

    fork {
        Npc_oasis007[PreDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.5, 2.0, 0.0], 'ResetArriveTransformFixed': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'Soldier2', 'RootType': 3, 'TargetActorName': 'Npc_SmallOasis013', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[H].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Kick', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'Frames': 58, 'IsWaitEnd': True})
        Dm_Enemy_Zombie_Junior_Defense[H].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0006_Fence_Hit', 'SLinkKey': 'Dm_GE_0006_Fence_Hit'})
    } {
        Npc_SmallOasis014.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_BattleWait_Fear'})
    }

    Npc_SmallOasis014.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
}

void Ready_Gibudo() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Dm_Enemy_Zombie_Junior_Defense[C].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'Position': [-3161.909912109375, 133.88999938964844, 2551.72998046875], 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[B].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'Position': [-3170.2099609375, 133.4199981689453, 2559.340087890625], 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[D].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'Position': [-3162.06005859375, 133.75999450683594, 2555.719970703125], 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[A].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'Position': [-3171.989990234375, 133.3699951171875, 2555.949951171875], 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[E].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'IsWaitEnd': False, 'Position': [-3181.64990234375, 131.92999267578125, 2564.22998046875]})
    Dm_Enemy_Zombie_Junior_Defense[F].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'IsWaitEnd': False, 'Position': [-3178.3359375, 132.19000244140625, 2567.56005859375]})
    Dm_Enemy_Zombie_Junior_Defense[G].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -67.0, 'Position': [-3171.010009765625, 132.52999877929688, 2575.68994140625]})
    Dm_Enemy_Zombie_Junior_Defense[H].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3173.969970703125, 131.88999938964844, 2584.27001953125], 'YAngle': -90.0})
    Dm_Enemy_Zombie_Junior_Defense[I].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'IsWaitEnd': False, 'Position': [-3187.219970703125, 129.52000427246094, 2523.469970703125]})
    Dm_Enemy_Zombie_Junior_Defense[J].EventWarpToTargetPosAndRot({'YAngle': -50.0, 'IsWaitEnd': False, 'Position': [-3184.949951171875, 130.1300048828125, 2517.449951171875]})
    Dm_Enemy_Zombie_Junior_Defense[C].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[D].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[A].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[E].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[F].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[G].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[H].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[I].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[J].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
}

void Hide_Gibudo() {
    Dm_Enemy_Zombie_Junior_Defense[A].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[B].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[C].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[D].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[E].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[F].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Show_Gibudo() {
    Dm_Enemy_Zombie_Junior_Defense[A].EventWait({'IsWaitEnd': False, 'Frames': 1})
    Dm_Enemy_Zombie_Junior_Defense[B].EventWait({'IsWaitEnd': False, 'Frames': 1})
    Dm_Enemy_Zombie_Junior_Defense[C].EventWait({'IsWaitEnd': False, 'Frames': 1})
    Dm_Enemy_Zombie_Junior_Defense[D].EventWait({'IsWaitEnd': False, 'Frames': 1})
}
