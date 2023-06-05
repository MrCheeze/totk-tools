-------- EventFlow: Dm_ZO_0010 --------

Actor: Npc_ZoraB001[RollingShido]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0010/Dm_ZO_0010_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0010_Npc_Zora_Prince_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[Link]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundStartSound', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void ShidoAnswer() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call OldSageCall_C01()


    call OldSageCall_C02()


    call OldSageCall_C03()

}

void OldSageCall_C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 47.29999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3685.530029296875, 353.2099914550781, -130.3300018310547], 'AtVector': [3681.159912109375, 355.75, -129.8800048828125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 47.29999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 160, 'PosVector': [3686.81005859375, 343.70001220703125, -130.4600067138672], 'AtVector': [3681.800048828125, 343.07000732421875, -129.9499969482422], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call InitDemo()

        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        fork {
            Npc_ZoraB001[RollingShido].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_ZoraB001[RollingShido].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            EventSystemActor[Link].EventWait({'IsWaitEnd': True, 'Frames': 18})
            Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Target': 3, 'InstanceName': 'RollingShido', 'ActorName': 'Npc_ZoraB001', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        }

    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0045_02_C05_Light_Pillar_C01', 'IsIgnoreDucking': False})
    }

}

void InitDemo() {

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -82.0, 'Position': [3681.760009765625, 340.98028564453125, -128.8372039794922], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_ZoraB001[RollingShido].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -84.6715087890625, 'Position': [3679.87109375, 340.8302917480469, -130.88729858398438]})
        Npc_ZoraB001[RollingShido].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
        Npc_ZoraB001[RollingShido].EventTriggerRequestLookAtTheFront()
    }

}

void OldSageCall_C02() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraB001', 'Actor1InstanceName': 'RollingShido', 'PosVector': [2.549999952316284, 1.2599999904632568, 3.6700000762939453], 'AtVector': [-1.2400000095367432, 2.140000104904175, 0.38999998569488525], 'TargetFovy': 42.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraB001[RollingShido].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0010:DmF_ZO_MiddleBossOut_Text_009', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_ZO_0045_02_C05_Light_Pillar_C01', 'GroupName': '', 'FadeFrame': -1})
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
    CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0010_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_ZoraB001[RollingShido].EventTriggerRequestLookAtTheFront()
        Npc_ZoraB001[RollingShido].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'Npc_Zora_Prince_Sage_AncientCall01', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[Link].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'DemoLookAround2nd', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    }

    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZO_0010_AncientCall'})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': ''})
    EventSystemActor.EventWait({'Frames': 50, 'IsWaitEnd': True})
}

void OldSageCall_C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraB001', 'Actor1InstanceName': 'RollingShido', 'PosVector': [2.299999952316284, 2.0799999237060547, 3.190000057220459], 'AtVector': [-1.2699999809265137, 2.9700000286102295, -0.6499999761581421], 'TargetFovy': 30.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_ZoraB001[RollingShido].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0010:DmF_ZO_MiddleBossOut_Text_011', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0045_02_C05_Light_Pillar_C03', 'IsIgnoreDucking': False})
    }

    Npc_ZoraB001[RollingShido].EventTriggerLookAtObject({'Target': 0, 'WorldPos': [3630.950927734375, 349.031494140625, -122.95659637451172], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_ZoraB001[RollingShido].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0010:DmF_ZO_MiddleBossOut_Text_012', 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_ZO_0045_02_C05_Light_Pillar_C03', 'GroupName': '', 'FadeFrame': -1})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
