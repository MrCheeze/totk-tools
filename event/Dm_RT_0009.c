-------- EventFlow: Dm_RT_0009 --------

Actor: Enemy_Toby_Junior[IpponSugi]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerTobyPlayMoveEventAS', 'EventTriggerTobyStopMoveEventAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0009/Dm_RT_0009_Enemy_Toby/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0009_Enemy_Toby_Junior.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor[Cam]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Bow_016_Event[IpponSugi]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Link]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLookNow', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerMove', 'EventTriggerPlayerGetOff']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForDynamicSagePresence']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundChangeListenerPreset', 'EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[IpponSugi]
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'EventMemberCreateMethod': 4, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerRollbackChallengeStep', 'EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

void Dm_RT_0009() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'FadeType': 1, 'IsForceFadeTime': False})

    call InitDemo()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()

}

void InitDemo() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': False})


    fork {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventTriggerPlayerGetOff()

            fork {
                Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -168.0, 'Position': [-3144.638916015625, 673.6624755859375, -2703.9169921875], 'UseDemoWait': True})
            } {
                LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-3153.260009765625, 673.4290161132812, -2696.81005859375]})
            }

            Event41:
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } else {
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -168.0, 'Position': [-3144.638916015625, 673.6624755859375, -2703.9169921875], 'UseDemoWait': True})
            goto Event41
        }
    } {
        Npc_Tulin_Sage[IpponSugi].EventTriggerParticipateEvent()
    } {
        Enemy_Toby_Junior[IpponSugi].EventTriggerParticipateEvent()
        Enemy_Toby_Junior[IpponSugi].EventTriggerTobyPlayMoveEventAS()
        Weapon_Bow_016_Event[IpponSugi].EventTriggerParticipateEvent()
        Weapon_Bow_016_Event[IpponSugi].EventTriggerModelBind({'ActorName': 'Enemy_Toby_Junior', 'InstanceName': 'IpponSugi', 'BoneName': 'Weapon_Leg_R', 'TransOffset': [0.0, 0.019999999552965164, -0.11999999731779099], 'RotOffset': [90.0, 0.0, 90.0]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Tulin_Sage', 'PosVector': [-1.6299999952316284, 1.0399999618530273, -1.1399999856948853], 'AtVector': [1.440000057220459, 1.2100000381469727, 1.2999999523162842], 'TargetFovy': 34.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'IpponSugi', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'StepName': 'IpponSugi', 'IsIgnoreChallengeProgressUI': True})
}

void C01() {

    fork {
        Npc_Tulin_Sage[IpponSugi].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_RT_0009', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Tulin_Sage[IpponSugi].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        EventSystemActor[Link].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerMove({'MoveSpeed': 0.10000000149011612, 'DecSpeedDistance': 0.5, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'WorldPos': [-3145.08203125, 673.8717041015625, -2704.990966796875], 'IsWaitEnd': False})
    }

}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3147.780029296875, 675.1300048828125, -2701.93994140625], 'AtVector': [-3144.4599609375, 675.030029296875, -2706.760009765625], 'TargetFovy': 24.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'IpponSugi', 'WorldPos': [0.0, 0.0, 0.0]})
    Npc_Tulin_Sage[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 1, 'ChoiceLabel1': 7, 'ASName': 'TalkSurprised', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_08', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_05', 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Tulin_Sage[IpponSugi].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-3136.803955078125, 678.693115234375, -2706.631103515625], 'ResetArriveTransformFixed': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'WorldPos': [-3136.803955078125, 678.693115234375, -2706.631103515625], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void C03() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 1.0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Enemy_Toby_Junior', 'Actor1InstanceName': 'IpponSugi', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3054.340087890625, 664.969970703125, -2743.27001953125], 'TargetFovy': 18.200000762939453, 'PosVectorSetType': 0, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[Cam].EventWait({'Frames': 70, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Tulin_Sage[IpponSugi].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_06', 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerTurnAndLookNow({'Target': 4, 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': -24.0, 'OffsetBase': 0})
    } {
        Npc_Tulin_Sage[IpponSugi].EventWarpToTargetPosAndRot({'Position': [-3149.0029296875, 673.71728515625, -2702.98291015625], 'IsWaitEnd': True, 'YAngle': 90.0})

        call SwitchFromIpponSugiToDynamic()

    }

    Npc_Tulin_Sage[IpponSugi].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}

void C04() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Weapon_Bow_016_Event', 'Actor1InstanceName': 'IpponSugi', 'PosVector': [-6.110000133514404, -3.049999952316284, 17.420000076293945], 'AtVector': [-4.639999866485596, -2.2799999713897705, 13.300000190734863], 'TargetFovy': 6.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.0})
    EventSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
    Enemy_Toby_Junior[IpponSugi].EventTriggerTobyStopMoveEventAS()
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3150.93994140625, 676.969970703125, -2703.64990234375], 'AtVector': [-3147.3701171875, 676.4000244140625, -2705.169921875], 'TargetFovy': 17.799999237060547, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [-3151.419921875, 676.8699951171875, -2703.239990234375], 'AtVector': [-3147.909912109375, 676.1099853515625, -2704.800048828125], 'TargetFovy': 24.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
            Npc_Tulin_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_03', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Tulin_Sage', 'Direction': 0.0, 'InstanceName': 'DynamicGenerateSage', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

    }

    Event95:
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Tulin_Sage', 'PosVector': [-3.440000057220459, 0.8399999737739563, 5.059999942779541], 'AtVector': [0.5400000214576721, 1.0199999809265137, 0.7699999809265137], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'DynamicGenerateSage', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetBack'})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Value': True})

        call SageOfWind_Sub001.OpnePictureGuide()

    } else
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Tulin_Sage', 'PosVector': [-2.009999990463257, 1.909999966621399, 4.380000114440918], 'AtVector': [0.11999999731779099, 0.9800000190734863, 1.2200000286102295], 'TargetFovy': 30.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'DynamicGenerateSage', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
    ChallengeSystemActor.EventTriggerRollbackChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'FoundTulin', 'IsIgnoreChallengeProgressUI': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_07', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
}

void C05_02() {

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 6.559999942779541, 'Position': [-3145.01611328125, 674.0748291015625, -2707.427001953125]})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_03', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-6.190000057220459, 2.6500000953674316, 3.640000104904175], 'AtVector': [-2.619999885559082, 1.7999999523162842, 2.2699999809265137], 'TargetFovy': 24.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-3145.072021484375, 673.9486083984375, -2704.97998046875], 'UseDemoWait': True})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }

        }
    }

    goto Event95
}

void Dm_RT_0009_FoundTulin() {

    call C05_02()

}

void SwitchFromIpponSugiToDynamic() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate'})
    EventSystemActor[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventWaitForDynamicSagePresence({'IsWaitEnd': True, 'SageType': 4})
    Npc_Tulin_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction5', 'InstanceName': 'SageOfWind_IpponSugi_Anchor', 'IsWaitEnd': True})
    EventSystemActor[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 5})
}
