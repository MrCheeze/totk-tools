-------- EventFlow: Dm_GO_0014 --------

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventTalk', 'EventAIScheduleMoveToPos', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsWorld': False, 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0014_Npc_Goron_HeroDescendants_Sage.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0014/Dm_GO_0014_Npc_Goron_HeroDescendants_Sage/workspace.pp__ModelProject.gyml', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[Zelda_Black]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0014/Dm_GO_0014_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0014_Npc_Zelda_AncientHyrule.root.as', 'Rotation': [0.0, -84.80000305175781, 0.0], 'Position': [1392.9129638671875, -682.8353881835938, -2850.760009765625], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsRidableGetOff': True, 'IsUnequip': True})


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()

}

void InitDemo() {

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -91.4000015258789, 'IsWaitEnd': True, 'Position': [1441.27001953125, -715.2987060546875, -2846.632080078125], 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [1388.60400390625, -688.4868774414062, -2847.553955078125], 'TurnFaceControlType': 1})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [1440.3380126953125, -715.4500122070312, -2849.010009765625]})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [1388.60400390625, -678.4868774414062, -2847.553955078125], 'ResetArriveTransformFixed': False})
    } {
        Npc_Zelda_Black_Event.EventTriggerParticipateEvent()
        Npc_Zelda_Black_Event.EventWarpToTargetPosAndRot({'YAngle': -84.80000305175781, 'IsWaitEnd': True, 'Position': [1398.512939453125, -702.0, -2848.760009765625]})
        Npc_Zelda_Black_Event.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-1.4500000476837158, 1.7899999618530273, -4.5], 'AtVector': [-1.4199999570846558, 3.569999933242798, -3.5], 'TargetFovy': 46.849998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-1.4299999475479126, 0.49000000953674316, -3.759999990463257], 'AtVector': [-1.3700000047683716, 1.2100000381469727, -1.850000023841858], 'TargetFovy': 46.849998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 130, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call InitDemo()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 54})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [1434.73095703125, -706.5208740234375, -2848.882080078125], 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_GO_0014:Dm_GO_0014_1_1', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron_Yunbo_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [3.4200000762939453, 5.440000057220459, 7.840000152587891], 'AtVector': [2.5999999046325684, 4.570000171661377, 6.199999809265137], 'TargetFovy': 42.95000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GO_0014:Dm_GO_0014_1_5', 'ASName': 'C02_Goron', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C03() {

    fork {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_24m', 'FadeTime': 1.0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1436.9200439453125, -712.780029296875, -2848.47998046875], 'AtVector': [1434.219970703125, -711.97998046875, -2848.489990234375], 'TargetFovy': 37.220001220703125, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 70, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1436.9200439453125, -712.780029296875, -2848.47998046875], 'AtVector': [1434.219970703125, -711.97998046875, -2848.489990234375], 'TargetFovy': 27.220001220703125, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GO_0014:Dm_GO_0014_1_2', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C04_Goron', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.05000000074505806})
    } {
        Npc_Zelda_Black_Event.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C03_walk', 'ForceFadeInFrame': -1.0})
        EventSystemActor[Zelda_Black].EventWait({'Frames': 80, 'IsWaitEnd': True})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron_Yunbo_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [3.490000009536743, 3.7300000190734863, 3.4200000762939453], 'AtVector': [-1.4299999475479126, 1.340000033378601, -0.11999999731779099], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Zelda_Black_Event.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GO_0014:Dm_GO_0014_1_3', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C02_Goron', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'StartAccelerateRate': 0.4000000059604645, 'MoveTime': 73, 'PosVector': [1436.9200439453125, -712.0700073242188, -2845.52001953125], 'AtVector': [1431.3900146484375, -711.3599853515625, -2848.89990234375], 'TargetFovy': 34.29999923706055, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': True, 'ASName': 'C04_Run', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 78})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1413.050048828125, -693.3900146484375, -2832.239990234375], 'AtVector': [1409.5799560546875, -694.6900024414062, -2834.60009765625], 'TargetFovy': 35.70000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -85.58999633789062, 'Position': [1408.041015625, -705.010009765625, -2847.60009765625]})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventAIScheduleMoveToPos({'IsWaitEnd': True, 'Rot': -85.58999633789062, 'ASName': 'Run', 'IsAlignPos': False, 'Pos': [1400.75, -702.6799926757812, -2848.76708984375], 'IsTurnToRot': False, 'DesiredGear': 3, 'ForceIsNotAlignmentWaitPosition': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C05_LookAround'})
    }

    EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GO_0014:Dm_GO_0014_1_4', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C05_LookAround', 'IsNotOpenIfSkipedMostRecent': False})
}

void C06() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.10999999940395355, 0.5, -3.680000066757202], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
}
