-------- EventFlow: Dm_OT_0011 --------

Actor: Enemy_Assassin_Senior[KohgaAgain]
entrypoint: None()
actions: ['EventCallAssassinSeniorRidable', 'EventRequestCreateAssassinSeniorRidable', 'EventRideAssassinSeniorRidable', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventOnLightAssassinSeniorRidable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForBGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Senior_00
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundControlBGMwithInput']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[battlepos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForAnim]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[FXwait]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SpObj_FlashLight_A_02[Light]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0002
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call c01()


    call c1.5()


    call c02()


    call c03()


    call c04()


    call c05_08()


    call c09()


    call c10()

}

void c01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [-1.6799999475479126, 2.309999942779541, -1.0700000524520874], 'AtVector': [1.2799999713897705, 1.850000023841858, 2.799999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -42.650001525878906, 'Position': [-3824.39404296875, -382.35809326171875, 2902.406005859375], 'UseDemoWait': True})
    } {
        Npc_Zonau_Golem_Servant_Minus0002.EventWarpToTargetPosAndRot({'Position': [-3830.177001953125, -382.3009948730469, 2911.467041015625], 'YAngle': 139.50799560546875, 'IsWaitEnd': True})
    }

    Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -42.65753173828125, 'Position': [-3827.666015625, -382.35809326171875, 2908.908935546875]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Holdhand', 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void c02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [-1.1699999570846558, 3.0, 3.759999990463257], 'AtVector': [-0.3700000047683716, 1.4800000190734863, -0.6899999976158142], 'TargetFovy': 44.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0031', 'ASName': 'chirami', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Senior_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'Holdhand', 'ForceFadeInFrame': 15.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    Npc_Assassin_Senior_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 15.0, 'ASName': 'look', 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void c03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.569999933242798, 0.8600000143051147, -1.4199999570846558], 'AtVector': [2.200000047683716, 1.6399999856948853, 3.859999895095825], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_00', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Assassin_Senior_00.EventPlayAS({'ASName': 'furimuki', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 15.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Assassin_Senior_00.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'surprise', 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckLower': False, 'CheckUpper': False}) {
        Event28:
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'surprise', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0042', 'IsNotOpenIfSkipedMostRecent': False})
        Event194:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
        goto Event28
    } else {
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'surprise', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event194
}

void c04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [0.8299999833106995, 1.2799999713897705, 2.5199999809265137], 'AtVector': [-2.1600000858306885, 4.03000020980835, -5.389999866485596], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'yubisasi', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0038', 'ASName': 'furue', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'zuruizo', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0037', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void c05_08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'kimepose_kamisimotop-0', 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Assassin_Senior_00', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ASName': 'kimepose_kamisimotop', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0036', 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ASName': 'kimepose_kamisimotop', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0035', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ASName': 'kimepose_kamisimotop', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0039', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': 'kimepose_kamisimotop', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0040', 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void c09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'kimepose_front-1', 'IsLoop': False, 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'TargetActorName': 'Npc_Assassin_Senior_00', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kimepose_front', 'IsAnimeDriven': True})
        GameSystemActor[WaitForAnim].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': 'kimepose_front', 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0041', 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 73})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 85})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor[FXwait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    } {
        Npc_Assassin_Senior_00.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0011_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'DoronDisappear'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    Npc_Assassin_Senior_00.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'KohgaAgain'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    Enemy_Assassin_Senior[KohgaAgain].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void c10() {
    Enemy_Assassin_Senior[KohgaAgain].EventRequestCreateAssassinSeniorRidable({'IsWaitEnd': True, 'Rotate': [0.0, -47.0, 0.0], 'Position': [-3766.427001953125, -380.79998779296875, 2833.176025390625]})
    Dm_Locator[battlepos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -47.0, 'Position': [-3766.427001953125, -377.0469970703125, 2833.176025390625]})
    Enemy_Assassin_Senior[KohgaAgain].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'PosVector': [6.599999904632568, -3.0399999618530273, 100.5999984741211], 'AtVector': [10.0, -3.509999990463257, 91.8499984741211], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'PosVector': [0.28999999165534973, 1.3799999952316284, 7.150000095367432], 'AtVector': [0.07000000029802322, 1.409999966621399, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 45, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'battlepos', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': False, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'battlepos', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 8})
        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_AssassinBoss'})
    } {
        Npc_Assassin_Senior_00.EventTriggerEmitXLink({'SLinkKey': 'Dm_Zoom2', 'ELinkKey': ''})
    }


    fork {
        Enemy_Assassin_Senior[KohgaAgain].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'battlepos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False})
        Enemy_Assassin_Senior[KohgaAgain].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        fork {
            Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0011_Enm_Assassin_Senior_Appear_OverVehicle', 'SLinkKey': 'DoronAppear'})
        } {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }


        fork {
            Enemy_Assassin_Senior[KohgaAgain].EventCallAssassinSeniorRidable({'IsWaitEnd': True})
        } {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        }

        Enemy_Assassin_Senior[KohgaAgain].EventRideAssassinSeniorRidable({'IsWaitEnd': True})
        Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Light_On'})
        Enemy_Assassin_Senior[KohgaAgain].EventOnLightAssassinSeniorRidable({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 8, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'PosVector': [0.17000000178813934, -2.9100000858306885, 14.300000190734863], 'AtVector': [0.07999999821186066, -1.9299999475479126, 4.340000152587891], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Player_KohgaAgain', 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 55, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'KohgaAgain', 'Value': 2})
    GameSystemActor.EventTriggerRequestAutoSave()
    ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga].EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    SpObj_FlashLight_A_02[Light].EventTriggerParticipateEvent()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
}

void c1.5() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [-3.319999933242798, 1.440000057220459, -3.890000104904175], 'AtVector': [-0.3700000047683716, 1.3899999856948853, 0.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Holdhand', 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0011:Talk_0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
