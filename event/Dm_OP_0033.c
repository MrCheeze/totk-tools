-------- EventFlow: Dm_OP_0033 --------

Actor: EventSystemActor[Raul]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'IsGrounding': False, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Raul
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerStartFadeOut', 'EventGoOffstageForUser', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'Rotation': [0.0, 180.0, 0.0], 'IsGrounding': False, 'Position': [0.0, 0.0, 2.5], 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call C00()


    call C02()


    call C03()


    call C04()


    call C05()

}

void C00() {

    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerWait({'IsWaitEnd': False})
    } {
        Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Appear_Loop'})
        Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Raul.EventTriggerStartFadeOut({'FadeFrame': 1})
    }

}

void C02() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_RaulCmnTalk', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.5600000023841858, 1.899999976158142, -0.07000000029802322], 'AtVector': [0.1899999976158142, 2.2899999618530273, 3.2699999809265137], 'TargetFovy': 32.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    } {
        EventSystemActor[Raul].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Raul.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
        Npc_Raul.EventPlayAS({'ASName': 'Appaer', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': False, 'IsAnimeDriven': False})
        EventSystemActor[Raul].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Raul.EventTriggerEmitXLink({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': ''})
        EventSystemActor[Raul].EventWait({'IsWaitEnd': True, 'Frames': 54})
        Npc_Raul.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'TalkWait'})
    }

}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-5.159999847412109, 3.640000104904175, -6.670000076293945], 'AtVector': [-1.7400000095367432, 2.009999990463257, -1.4199999570846558], 'TargetFovy': 27.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Raul.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Raul.EventTalk({'MessageId': 'EventFlowMsg/Dm_OP_0033:Dm_OP_0033_Text_000_b', 'ASName': 'Talk', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul.EventTalk({'MessageId': 'EventFlowMsg/Dm_OP_0033:Dm_OP_0033_Text_001_b', 'ASName': 'Talk', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C04() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Raul.EventTalk({'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_OP_0033:Dm_OP_0033_Text_002_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Raul.EventTalk({'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_OP_0033:Dm_OP_0033_Text_003_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Raul', 'PosVector': [0.5600000023841858, 2.490000009536743, 2.569999933242798], 'AtVector': [-0.1899999976158142, 2.880000114440918, -0.7699999809265137], 'TargetFovy': 32.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.6200000047683716, 1.25, -1.590000033378601], 'AtVector': [0.9700000286102295, 1.6299999952316284, 2.069999933242798], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Raul.EventPlayAS({'ASName': 'TalkWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_RaulCmnTalk', 'IsUseSuspendFade': False})
    Npc_Raul.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
    Npc_Raul.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': '', 'IsKill': False})
    Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'ASName': 'DisAppaer', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 11})

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Obj_AmiiboItem', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
}
