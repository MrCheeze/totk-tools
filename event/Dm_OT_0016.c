-------- EventFlow: Dm_OT_0016 --------

Actor: Enemy_Assassin_Senior[KohgaContinue]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTalk', 'EventCallAssassinSeniorRidable', 'EventGoOffstageForUser', 'EventRequestCreateAssassinSeniorRidable', 'EventRideAssassinSeniorRidable', 'EventTriggerEmitXLink', 'EventOnLightAssassinSeniorRidable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[linkpos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[posoffset]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFront', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Senior_00
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_Shooter_Subordinates[KohgaMinion1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_Shooter_Subordinates[KohgaMinion2]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[battlekhogapos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[FXwait]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventTriggerSoundControlBGMwithInput']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForBGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SpObj_FlashLight_A_02[Light_L]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: SpObj_FlashLight_A_02[Light_R]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0004
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call cut01()


    call c1.5()


    call cut02()


    call cut03()


    call cut04()


    call cut05_07()


    call cut08()


    call cut09()


    call cut10()


    call cut11()


    call cut12()

}

void cut01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [2.140000104904175, 2.549999952316284, -1.8799999952316284], 'AtVector': [0.6299999952316284, 2.0199999809265137, 0.800000011920929], 'TargetFovy': 39.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Assassin_Senior_00.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -150.577392578125, 'Position': [3299.469970703125, -644.8873901367188, -559.1500244140625]})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -150.577392578125, 'Position': [3301.050048828125, -644.6799926757812, -554.2999877929688], 'UseDemoWait': True})
    } {
        Npc_Zonau_Golem_Servant_Minus0004.EventWarpToTargetPosAndRot({'Position': [3296.992919921875, -644.8480224609375, -562.4912109375], 'YAngle': 29.422529220581055, 'IsWaitEnd': True})
    }

    Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -150.577392578125, 'Position': [3298.68701171875, -644.8873901367188, -559.5128173828125]})
    Dm_Locator[posoffset].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'pos', 'YAngle': 0.0, 'PositionOffset': [-0.5, 0.0, -0.699999988079071]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Holdhand', 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0011', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void cut02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [2.119999885559082, 2.890000104904175, 4.010000228881836], 'AtVector': [0.49000000953674316, 1.659999966621399, -0.12999999523162842], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Holdhand', 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0012', 'IsAnonymous': False, 'IsAnimeDriven': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Assassin_Senior_00.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'look_hanten', 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void cut03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [3.299999952316284, 1.4600000381469727, -7.599999904632568], 'AtVector': [1.2000000476837158, 1.3899999856948853, -3.4200000762939453], 'TargetFovy': 41.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_00', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
            Event39:
            Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'panicfurimuki', 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0029', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
            goto Event39
        } else {
            Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0013', 'IsAnonymous': False, 'ASName': 'panicfurimuki', 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
        Npc_Assassin_Senior_00.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Panic'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
        Npc_Assassin_Senior_00.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Panic', 'IsKill': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'yubisasi', 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0014', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0015', 'IsAnonymous': False, 'IsPlayASAllSlot': False, 'ASName': 'furue', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void cut04() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Assassin_Senior_00', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'punsuka-2', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Assassin_Senior_00', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'punsuka-2_loop', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0026', 'ASName': 'angryNPC', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 17})

        fork {
            Npc_Assassin_Senior_00.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Angry', 'SLinkKey': ''})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
        }

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Assassin_Senior_00', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'punsuka-2', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Angry', 'SLinkKey': '', 'IsKill': False})
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0016', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': 'normalwait', 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_Assassin_Senior_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'kimepose_kamisimotop_shortpre', 'IsWaitEnd': True})
}

void cut05_07() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Assassin_Senior_00', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'kimepose_kamisimotop-0', 'OverwriteStartFrame': 104.0, 'IsLoop': False, 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ASName': 'kimepose_kamisimotop_short', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0017', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0018', 'ASName': 'kimepose_kamisimotop_short', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0027', 'ASName': 'kimepose_kamisimotop_short', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsAnimeDriven': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Chemical_Wet'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void cut08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Assassin_Senior_00', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'kimepose_front-1', 'IsLoop': False, 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Senior_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kimepose_front', 'IsAnimeDriven': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Assassin_Senior_00.EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0019', 'ASName': 'kimepose_front', 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 73})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 85})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
    }

}

void cut09() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Chemical_Wet'})
    }


    fork {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CleanKohga_03', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'Radius': 8.0, 'Height': 14.5, 'IsSweepOut': False})
    }

    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    Npc_Assassin_Senior_00.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0020', 'ASName': 'udegumi', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void cut11() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [-0.949999988079071, 0.8399999737739563, 2.3499999046325684], 'AtVector': [-0.9300000071525574, 1.7000000476837158, -3.619999885559082], 'TargetFovy': 41.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
    Dm_Locator[battlekhogapos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -154.0, 'Position': [3344.388916015625, -641.1589965820312, -484.8266906738281]})
    Dm_Locator[linkpos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -150.577392578125, 'Position': [3299.7451171875, -645.0368041992188, -553.5654296875]})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 15.0, 0.0], 'TurnFaceControlType': 1, 'InstanceName': 'battlekhogapos'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Dm_Locator', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 15.0, 0.0], 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'InstanceName': 'battlekhogapos', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'StartAccelerateRate': 0.0, 'IsWaitEnd': False, 'EndRecelerateRate': 0.800000011920929, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'linkpos', 'PosVector': [-1.690000057220459, 2.490000009536743, -1.690000057220459], 'AtVector': [-1.7400000095367432, 2.609999895095825, -3.190000057220459], 'TargetFovy': 41.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    }

}

void cut10() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [0.05000000074505806, 1.1799999475479126, 3.3499999046325684], 'AtVector': [0.20999999344348907, 2.690000057220459, -3.9600000381469727], 'TargetFovy': 41.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerRequestLookAtTheFront()
    Npc_Assassin_Senior_00.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': 'udegumi02', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Senior_00.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': 'udehiroge00', 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Assassin_Senior_00.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': 'kakugosiro', 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'StartAccelerateRate': 0.800000011920929, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [0.07000000029802322, 1.3899999856948853, 2.359999895095825], 'AtVector': [0.20999999344348907, 2.690000057220459, -3.9600000381469727], 'TargetFovy': 41.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 8, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    fork {
        Npc_Assassin_Senior_00.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Npc_Assassin_Senior_00.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'KohgaContinue'})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Assassin_Senior[KohgaContinue].EventRequestCreateAssassinSeniorRidable({'IsWaitEnd': True, 'Rotate': [0.0, -64.0, 0.0], 'Position': [3344.388916015625, -645.2120971679688, -484.8266906738281]})
    Enemy_Assassin_Senior[KohgaContinue].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
}

void cut12() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlekhogapos', 'AtVector': [-0.009999999776482582, 1.9800000190734863, 1.5499999523162842], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.09000000357627869, 1.600000023841858, 50.0], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'PosVector': [0.28999999165534973, 1.3799999952316284, 7.150000095367432], 'AtVector': [0.07000000029802322, 1.409999966621399, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 20, 'Actor1InstanceName': 'battlekhogapos', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 8, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlekhogapos', 'PosVector': [0.10999999940395355, -2.690000057220459, 13.539999961853027], 'AtVector': [0.07000000029802322, -2.0799999237060547, 8.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Assassin_Senior[KohgaContinue].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': 'battlekhogapos', 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
        Enemy_Assassin_Senior[KohgaContinue].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        fork {
            Enemy_Assassin_Senior[KohgaContinue].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0016_Enm_Assassin_Senior_Appear_OverVehicle', 'SLinkKey': 'DoronAppear'})
        } {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }


        fork {
            Enemy_Assassin_Senior[KohgaContinue].EventCallAssassinSeniorRidable({'IsWaitEnd': True})
        } {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        }

        Enemy_Assassin_Senior[KohgaContinue].EventRideAssassinSeniorRidable({'IsWaitEnd': True})
        Enemy_Assassin_Senior[KohgaContinue].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Light_On'})
        Enemy_Assassin_Senior[KohgaContinue].EventOnLightAssassinSeniorRidable({'IsWaitEnd': True})
        Enemy_Assassin_Senior[KohgaContinue].EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0024', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 30.0, 'Position': [3318.172119140625, -644.6552124023438, -537.4921875], 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Enemy_Assassin_Senior[KohgaContinue].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0025', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'MoveTime': 80, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [-0.8399999737739563, 1.7999999523162842, -5.369999885559082], 'AtVector': [-1.059999942779541, 1.7999999523162842, -0.07000000029802322], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
    } {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 10})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
    }

    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'KohgaContinue', 'Value': 2})
    GameSystemActor.EventTriggerRequestAutoSave()
    Enemy_Assassin_Junior_Shooter_Subordinates[KohgaMinion1].EventTriggerParticipateEvent()
    Enemy_Assassin_Junior_Shooter_Subordinates[KohgaMinion2].EventTriggerParticipateEvent()
    ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga].EventTriggerParticipateEvent()
    SpObj_FlashLight_A_02[Light_R].EventTriggerParticipateEvent()
    SpObj_FlashLight_A_02[Light_L].EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    SoundSystemActor.EventSoundReleaseDucking({'IsImmediately': True, 'IsClearRefCount': True, 'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': ''})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_AssassinBoss'})
}

void c1.5() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Assassin_Senior_00', 'PosVector': [3.25, 3.0399999618530273, -1.9700000286102295], 'AtVector': [0.8399999737739563, 1.8200000524520874, 0.8700000047683716], 'TargetFovy': 39.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Assassin_Senior_00.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Holdhand', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0016:Talk_0028', 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}
