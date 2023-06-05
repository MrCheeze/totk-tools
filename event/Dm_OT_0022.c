-------- EventFlow: Dm_OT_0022 --------

Actor: Enemy_Assassin_Senior[KohgaBegin]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventRequestCreateAssassinSeniorRidable', 'EventCallAssassinSeniorRidable', 'EventRideAssassinSeniorRidable', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventOnLightAssassinSeniorRidable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior[KohgaBegin1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Npc_Assassin_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022_junior.root.as', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior[KohgaBegin2]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Npc_Assassin_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022_junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[kohga_pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForBGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenDemoNicknameUI', 'EventCloseDemoNicknameUI', 'EventCloseMessageDialog', 'EventWaitForActorPresence', 'EventTriggerRequestAutoSave', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventWarpSoulFollowersFormationPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0011/Dm_OP_0011_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0011.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Umii_Minus_Scholar_C
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Umii_Minus_Scholar_A
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0001[blueprint]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventTriggerSoundBeginForbidDialogDucking', 'EventTriggerSoundControlBGMwithInput', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[battlepos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor[FXwait]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: SpObj_FlashLight_A_02[Light_R]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: SpObj_FlashLight_A_02[Light_L]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

void Dm_OT_0022() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call cut01()


    call cut02()


    call cut03()


    call cut04()


    call cut05()


    call cut06()


    call cut07-10()


    call cut11()


    call cut12()


    call cut13()


    call cut14()


    call cut15()


    call cut16()

}

void cut02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'kohga_pos', 'PosVector': [-2.009999990463257, 0.9599999785423279, 24.670000076293945], 'AtVector': [-0.5, 0.9300000071525574, 23.440000534057617], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0016', 'ASName': 'normalwait', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoLookAround', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2.0899999141693115, 1.0499999523162842, 24.690000534057617], 'AtVector': [-1.2400000095367432, 1.090000033378601, 22.93000030517578], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'kohga_pos', 'EndRecelerateRate': 0.0, 'MoveTime': 80, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 180.0, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'InstanceName': 'kohga_pos', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()

        fork {
            Enemy_Assassin_Senior[KohgaBegin].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'kohga_pos', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'IsWaitEnd': False})
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Appear', 'SLinkKey': ''})
            Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'toujou', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_DoronAppear'})
        } {
            Npc_Assassin_Junior[KohgaBegin1].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Appear', 'SLinkKey': ''})
            Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'toujou_junior', 'ForceFadeInFrame': -1.0})
        } {
            Npc_Assassin_Junior[KohgaBegin2].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Appear', 'SLinkKey': ''})
            Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'toujou_junior', 'ForceFadeInFrame': -1.0})
        } {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
        }

    }

}

void cut03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'SceneName': 'toujou-0', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0017', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut05() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.49000000953674316, 0.3400000035762787, 1.4600000381469727], 'AtVector': [0.3199999928474426, 0.3799999952316284, 0.8899999856948853], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.49000000953674316, 0.9800000190734863, 1.4600000381469727], 'AtVector': [0.33000001311302185, 1.1299999952316284, 0.9100000262260437], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 80, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0006', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut06() {
    Npc_Assassin_Junior[KohgaBegin1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Assassin_Junior[KohgaBegin2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaBegin', 'PosVector': [-1.3899999856948853, 1.5299999713897705, 4.289999961853027], 'AtVector': [-1.2300000190734863, 1.559999942779541, 3.859999895095825], 'TargetFovy': 31.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_00', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'zuruizo', 'ForceFadeInFrame': 10.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0007', 'ASName': 'Wait', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 10.0, 'ASName': 'yubisasi'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Wait', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'furue', 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Wait', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'yubisasi', 'ForceFadeInFrame': -1.0})
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Event44:
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0032', 'IsNotOpenIfSkipedMostRecent': False})
        Event314:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'furue', 'ForceFadeInFrame': -1.0})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0009', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'udehiroge00', 'ForceFadeInFrame': 15.0})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
        goto Event44
    } else {
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0008', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event314
}

void cut07-10() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'SceneName': 'kimepose_kamisimotop-0', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kimepose_kamisimotop', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0010', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0011', 'ASName': 'kimepose_simote', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'kimepose_simote', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0022', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0012', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kimepose_kamisimotop_junior', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kimepose_kamisimotop_junior', 'ForceFadeInFrame': -1.0})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void cut12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaBegin', 'PosVector': [-2.509999990463257, 2.2699999809265137, -4.010000228881836], 'AtVector': [-1.2200000286102295, 1.9600000381469727, -0.8399999737739563], 'TargetFovy': 29.3799991607666, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'yubisasi02', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0023', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'udegumi', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0024', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut13() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'IsWaitEnd': False, 'SceneName': 'punsuka-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'udegumi02', 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0025', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'ASName': 'furue'})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0026', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 15.0, 'ASName': 'angryNPC'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0018', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    } {
        GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 17})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        } {
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Angry', 'SLinkKey': ''})
        }

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'IsWaitEnd': False, 'SceneName': 'punsuka-0_loop', 'IsLoop': True, 'CalcUpInInterpolate': False})
    }

}

void cut15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveTime': 0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaBegin', 'PosVector': [-0.019999999552965164, 1.8799999952316284, 2.369999885559082], 'AtVector': [-0.07999999821186066, 1.8899999856948853, 0.5899999737739563], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventRequestCreateAssassinSeniorRidable({'IsWaitEnd': True, 'Rotate': [0.0, -47.88100051879883, 0.0], 'Position': [-742.1829833984375, -418.8573913574219, 1869.906005859375]})
    Dm_Locator[battlepos].EventWarpToTargetPosAndRot({'YAngle': -47.88100051879883, 'IsWaitEnd': True, 'Position': [-742.1829833984375, -413.8573913574219, 1869.906005859375]})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kakugosiro', 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor[FXwait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-0.09000000357627869, -0.6800000071525574, 19.690000534057617], 'AtVector': [-0.2199999988079071, -0.6600000262260437, 15.739999771118164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveTime': 12, 'EndRecelerateRate': 0.5, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'PosVector': [0.28999999165534973, 1.3799999952316284, 7.150000095367432], 'AtVector': [0.07000000029802322, 1.409999966621399, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': 'battlepos', 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
        Enemy_Assassin_Senior[KohgaBegin].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})

        fork {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        } {
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Appear_OverVehicle', 'SLinkKey': 'Dm_DoronAppear'})
        }


        fork {
            GameSystemActor[FXwait].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor[FXwait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        } {
            Enemy_Assassin_Senior[KohgaBegin].EventCallAssassinSeniorRidable({'IsWaitEnd': True})
        }

        Enemy_Assassin_Senior[KohgaBegin].EventRideAssassinSeniorRidable({'IsWaitEnd': True})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Light_On'})
        Enemy_Assassin_Senior[KohgaBegin].EventOnLightAssassinSeniorRidable({'IsWaitEnd': True})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0029', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 8, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'battlepos', 'PosVector': [0.12999999523162842, -2.200000047683716, 14.369999885559082], 'AtVector': [0.03999999910593033, -1.2200000286102295, 4.409999847412109], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void cut16() {
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-762.7890014648438, -418.91571044921875, 1887.677978515625], 'YAngle': 132.65139770507812, 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'Actor1InstanceName': '', 'MoveTime': 60, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 10})
        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_AssassinBoss'})
    }

    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'KohgaBegin', 'Index': -1, 'Value': 2})
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    ManufacturesIntegratorEnemyVehicle[ManufacturesIntegrator_Kohga].EventTriggerParticipateEvent()
    SpObj_FlashLight_A_02[Light_R].EventTriggerParticipateEvent()
    SpObj_FlashLight_A_02[Light_L].EventTriggerParticipateEvent()
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
}

void cut14() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'SceneName': 'punsuka-1', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'IsWaitEnd': False, 'SceneName': 'punsuka-1_loop', 'IsLoop': True, 'CalcUpInInterpolate': False})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'punsuka', 'ForceFadeInFrame': 0.0})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaBegin', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [2.799999952316284, 0.0, -1.0]})
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'punsuka_junior', 'ForceFadeInFrame': 0.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaBegin', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [-2.799999952316284, 0.0, -1.0]})
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'punsuka_junior_hanten', 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Angry', 'SLinkKey': '', 'IsKill': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 56})

        fork {
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Angry', 'SLinkKey': ''})
        } {
            Npc_Assassin_Junior[KohgaBegin1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Angry'})
        } {
            Npc_Assassin_Junior[KohgaBegin2].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Angry'})
        }

    }


    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0019', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0020', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Angry', 'SLinkKey': '', 'IsKill': False})
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'normalwait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Angry', 'IsKill': False})
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'normalwait_junior', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0022_Npc_Assassin_Junior_Angry', 'IsKill': False})
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'normalwait_junior', 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'RootType': 3, 'IsReferenceRootOnce': True, 'IsWaitEnd': False, 'SceneName': 'punsuka-1_fix', 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'RootType': 3, 'IsReferenceRootOnce': True, 'SceneName': 'punsuka-1_TU', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Zoom'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaBegin', 'PosVector': [-1.7200000286102295, 1.2599999904632568, 3.5899999141693115], 'AtVector': [-1.090000033378601, 1.3600000143051147, 1.9900000095367432], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'normalwait_junior', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'normalwait_junior', 'ForceFadeInFrame': -1.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0005', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -47.88100051879883, 'IsWaitEnd': True, 'Position': [-800.4899291992188, -417.7294921875, 1921.4329833984375], 'UseDemoWait': True})
    Dm_Locator[kohga_pos].EventWarpToTargetPosAndRot({'Position': [-783.76318359375, -417.7327880859375, 1906.3270263671875], 'YAngle': -47.88100051879883, 'IsWaitEnd': True})
    Npc_Umii_Minus_Scholar_C.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-801.1055908203125, -415.340087890625, 1931.258056640625], 'YAngle': 210.0})
    Npc_Umii_Minus_Scholar_C.EventPlayAS({'ASName': 'Act_Memo_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_Umii_Minus_Scholar_C.EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Umii_Minus_Scholar_C.EventTriggerLookAtObject({'Target': 2, 'OffsetBase': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    Npc_Umii_Minus_Scholar_A.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 155.51319885253906, 'Position': [-806.2061157226562, -415.1960144042969, 1929.7669677734375]})
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        Npc_Umii_Minus_Scholar_C.EventTalk({'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0035', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ASName': 'TalkSurprised', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Umii_Minus_Scholar_A.EventTalk({'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0036', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'TalkSurprised', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Umii_Minus_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0037', 'IsPlayASAllSlot': True, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Umii_Minus_Scholar_A', 'PosVector': [1.649999976158142, 0.9599999785423279, 4.340000152587891], 'AtVector': [-1.6200000047683716, 1.090000033378601, 0.4300000071525574], 'TargetFovy': 36.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -47.88100051879883, 'IsWaitEnd': True, 'Position': [-800.4899291992188, -417.7294921875, 1921.4329833984375], 'UseDemoWait': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'KohgaBegin', 'Index': -1, 'Value': 1})

    fork {
        Npc_Umii_Minus_Scholar_A.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Npc_Minus_Scholar_A_Disappear', 'SLinkKey': 'Dm_Shed_Disguise'})
        Npc_Umii_Minus_Scholar_C.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Npc_Minus_Scholar_C_Disappear', 'SLinkKey': ''})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaBegin', 'IsWaitEnd': True})
    Enemy_Assassin_Senior[KohgaBegin].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -47.88100051879883, 'Position': [-793.25, -367.7327880859375, 1892.6099853515625]})
    Npc_Assassin_Junior[KohgaBegin1].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-781.502685546875, -417.7327880859375, 1907.0], 'YAngle': -48.40449142456055})
    Npc_Assassin_Junior[KohgaBegin2].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-784.1430053710938, -417.7327880859375, 1904.0179443359375], 'YAngle': -48.40449142456055})
    Enemy_Assassin_Senior[KohgaBegin].EventTriggerParticipateEvent()
    Enemy_Assassin_Senior[KohgaBegin].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Assassin_Junior[KohgaBegin1].EventTriggerParticipateEvent()
    Npc_Assassin_Junior[KohgaBegin1].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    Npc_Assassin_Junior[KohgaBegin2].EventTriggerParticipateEvent()
    Npc_Assassin_Junior[KohgaBegin2].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
}

void cut11() {

    fork {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 73})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 85})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'kimepose_front-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_Assassin_Senior', 'TargetActorInstanceName': 'KohgaBegin', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'kimepose_front', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 67})

        fork {
            Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0022_Enm_Assassin_Senior_Honor', 'SLinkKey': 'Dm_Leaf_Small'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0013', 'ASName': 'kimepose_front', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            GameSystemActor[FXwait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Large'})
        }

    } {
        Npc_Assassin_Junior[KohgaBegin1].EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaBegin', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [1.7000000476837158, 0.0, 0.0]})
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kimepose_front_junior', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaBegin', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [-1.7000000476837158, 0.0, 0.0]})
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'kimepose_front_junior_hanten', 'ForceFadeInFrame': 0.0})
    }

    GameSystemActor.EventOpenDemoNicknameUI({'IsWaitEnd': True, 'NameMessageLabel': 'ActorMsg/CharaDirectory:Enemy_Assassin_Senior_Name', 'NicknameMessageLabel': 'ActorMsg/CharaDirectory:Enemy_Assassin_Senior_Alias', 'DemoNicknameType': 0})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'mitazo', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'standup', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Assassin_Junior[KohgaBegin2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'standup_hanten', 'ForceFadeInFrame': -1.0})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0022:Talk_0015', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}
