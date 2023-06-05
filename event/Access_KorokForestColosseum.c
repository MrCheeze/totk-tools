-------- EventFlow: Access_KorokForestColosseum --------

Actor: Npc_Assassin_Junior[KorokColosseum1]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventWarpToHomeMatrix']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Npc_Assassin_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior[KorokColosseum2]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventWarpToHomeMatrix']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Npc_Assassin_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Giant_Senior
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerPlayerKeepRideOnGolem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ColosseumKorokForest_AssassinAppear', 'Value': True, 'Index': -1})
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    Npc_Assassin_Junior[KorokColosseum1].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_Assassin_Junior[KorokColosseum2].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_Assassin_Junior[KorokColosseum1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
    Npc_Assassin_Junior[KorokColosseum2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetOffset': [1.0, 0.0, 2.0], 'ToleranceXZAngle': 5.0, 'TargetActorInstanceName': 'shutter', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Assassin_Junior[KorokColosseum1].EventTriggerParticipateEvent()
    Npc_Assassin_Junior[KorokColosseum2].EventTriggerParticipateEvent()
    Enemy_Giant_Senior.EventTriggerParticipateEvent()

    fork {
        Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0001', 'IsNotBecomeSpeaker': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoLookAround', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
    }

    Npc_Assassin_Junior[KorokColosseum2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'normalwait_junior-Npc_Assassin_Junior-A-0'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 50.0, 'Actor1InstanceName': 'KorokColosseum1', 'MoveTime': 15, 'PosVector': [1.0, 1.5, 3.5], 'AtVector': [1.0, 1.5, 1.5], 'Actor1ActorName': 'DesignateMatrixActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0002', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_Access_KorokForestColosseum_Kime', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Assassin_Junior[KorokColosseum1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'normalwait_junior-Npc_Assassin_Junior-A-0'})
    EventSystemActor.EventWait({'Frames': 3, 'IsWaitEnd': True})

    fork {
        Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0003', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'normalwait_junior-Npc_Assassin_Junior-A-0', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'KorokColosseum1', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 3, 'AtVector': [1.0, 1.5, 0.5], 'PosVector': [1.0, 1.5, 2.5], 'Actor1ActorName': 'DesignateMatrixActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_Assassin_Junior[KorokColosseum1].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0005', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 50.0, 'Actor1InstanceName': 'KorokColosseum1', 'MoveTime': 15, 'AtVector': [1.75, 1.5, 1.5], 'PosVector': [2.799999952316284, 1.5, 4.0], 'Actor1ActorName': 'DesignateMatrixActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    fork {
        Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinAppear', 'CommandLife': 2, 'IsReleaseDucking': False})
        Npc_Assassin_Junior[KorokColosseum1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Access_KorokForestColosseum:Talk_0007', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 50.0, 'Actor1ActorName': 'Enemy_Giant_Senior', 'Actor1InstanceName': '', 'MoveTime': 25, 'AtVector': [0.0, 5.0, 10.0], 'PosVector': [-2.0, 5.0, 30.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'ColosseumKorokForest_BossAppear', 'Index': -1})
}
