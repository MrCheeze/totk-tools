-------- EventFlow: Dm_OP_0032 --------

Actor: Npc_Raul
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventTalk', 'EventTriggerStartFadeOut', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0032/Dm_OP_0032_Npc_Raul/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0032_Npc_Raul.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0032/Dm_OP_0032_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0032_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundChangeListenerPreset', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Start()


    call C01_C02()


    call C03()


    call C04()


    call End()

}

void Start() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [453.5132141113281, 1561.615966796875, 816.48291015625], 'UseDemoWait': True})
    Npc_Raul.EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Player', 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 127.46839141845703, 'PositionOffset': [-2.8568999767303467, 0.0, 2.4558000564575195]})
    Npc_Raul.EventTriggerRequestLookAtTheFront()
    Npc_Raul.EventTriggerStartFadeOut({'FadeFrame': 1})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [-1.2200000286102295, 1.409999966621399, 1.4500000476837158], 'AtVector': [3.190000057220459, 1.3799999952316284, -2.0], 'TargetFovy': 42.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'C01_Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 165})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.2200000286102295, 1.409999966621399, 1.4500000476837158], 'AtVector': [2.5899999141693115, 0.5, -2.549999952316284], 'TargetFovy': 42.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 55, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk_Near', 'FadeTime': 0.10000000149011612})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 1, 'IsWaitEnd': False, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 215})
    }


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_ReverseRecorder', 'IsSuccess': True})

    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.CurrentSpecialPower', 'Value': 'ReverseRecorder'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
}

void C01_C02() {

    fork {
        Npc_Raul.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
        Npc_Raul.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Appaer', 'IsWaitEnd': True, 'IsAllSlot': False, 'ForceFadeInFrame': 0.0})
    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Player', 'PosVector': [-1.25, 2.7300000190734863, -0.6899999976158142], 'AtVector': [-2.75, 2.4800000190734863, 2.4100000858306885], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 1})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoWait', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

    } {
        SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Raul.EventTriggerEmitXLink({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OP_0032:Dm_OP_0032_Text_000_b', 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'DemoWait', 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Raul.EventPlayAS({'ASName': 'C02-Npc_Raul', 'IsAnimeDriven': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 75, 'Actor1ActorName': 'Player', 'PosVector': [-1.25, 2.7300000190734863, -0.6899999976158142], 'AtVector': [-1.25, 2.5299999713897705, 2.759999990463257], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    fork {
        Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OP_0032:Dm_OP_0032_Text_001_b', 'IsOverrideStyle': True, 'OverrideStyle': 3, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

}

void End() {
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0})
}

void C04() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Player', 'PosVector': [0.23000000417232513, 1.3300000429153442, -2.880000114440918], 'AtVector': [-0.7200000286102295, 1.6699999570846558, 0.41999998688697815], 'TargetFovy': 34.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Raul.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Raul.EventPlayAS({'ASName': 'C04-Npc_Raul', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsAllSlot': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 1})
    }

    Npc_Raul.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
    Npc_Raul.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OP_0032:Dm_OP_0032_Text_003_b', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Raul.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': '', 'IsKill': False})
    Npc_Raul.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'DisAppaer', 'IsAllSlot': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Player', 'PosVector': [-1.1200000047683716, 3.0, 2.859999895095825], 'AtVector': [-4.46999979019165, 3.049999952316284, 2.069999933242798], 'TargetFovy': 35.66999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Raul.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_OP_0032:Dm_OP_0032_Text_002_b', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'DemoTalkWait', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 200, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Raul', 'PosVector': [0.38999998569488525, 3.0, 1.7400000095367432], 'AtVector': [-0.36000001430511475, 3.1500000953674316, -1.6100000143051147], 'TargetFovy': 31.56999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}
