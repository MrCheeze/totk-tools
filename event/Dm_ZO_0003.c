-------- EventFlow: Dm_ZO_0003 --------

Actor: Npc_ZoraFencer[StartChallengeFencer]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventAIScheduleMoveToPos', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0003/Dm_ZO_0003_Npc_Zora_Princess/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0003_Npc_Zora_Princess.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[TwoName]
entrypoint: None()
actions: ['EventCloseDemoNicknameUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFront', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenDemoNicknameUI', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora001_01
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWarpToHomeMatrix']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Npc_Zora015[Default]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant001[FinishHifumi]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0003/Dm_ZO_0003_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0003_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant002[FinishImu]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventWait', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0003/Dm_ZO_0003_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0003_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora002[CleanStatue_IsComp_00]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Zora026
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void MeetYona() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()

    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmT_ZO_MeetAgain'}) {

        call C12_Already()


        call C13_Already()


        call C14_Already()


        call C15_Already()

    } else {

        call C12()


        call C13()


        call C14()


        call C15()


        call C16()

    }
}

void Ready() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 2, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    Player.EventTriggerParticipateEvent()

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [3306.550048828125, 244.63999938964844, -464.6099853515625], 'YAngle': -98.09722137451172, 'UseDemoWait': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [3300.300048828125, 248.72999572753906, -472.9100036621094], 'AtVector': [3305.1298828125, 248.3300018310547, -477.6600036621094], 'TargetFovy': 20.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerParticipateEvent()
        Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventTriggerParticipateEvent()
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerParticipateEvent()
        Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    Npc_BaseCamp_Zora001_01.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_BaseCamp_Zora001_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_BaseCamp_Zora002[CleanStatue_IsComp_00].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Zora015[Default].EventTriggerParticipateEvent()
}

void C01() {
    Npc_ZoraFencer[StartChallengeFencer].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [3302.02099609375, 244.63699340820312, -464.78369140625], 'YAngle': 76.20525360107422})
    Npc_Zora_Attendant002[FinishImu].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [3303.97998046875, 244.44949340820312, -466.0950927734375], 'YAngle': -65.0000228881836})
    Npc_Zora_Attendant001[FinishHifumi].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [3303.126953125, 244.63699340820312, -463.130615234375], 'YAngle': -135.00010681152344})
    Npc_Zora026.EventAIScheduleWarpToAnchor({'AnchorType': 10, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Zora026.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CleanStatue', 'Value': 'Ready', 'Index': -1}) {
        GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZO_0003', 'CommandLife': 2, 'IsReleaseDucking': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 150, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [3299.489990234375, 249.92999267578125, -472.8299865722656], 'AtVector': [3302.919921875, 250.27000427246094, -476.6000061035156], 'TargetFovy': 20.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } else {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZO_0003', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 150, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [3299.489990234375, 249.92999267578125, -472.8299865722656], 'AtVector': [3302.919921875, 250.27000427246094, -476.6000061035156], 'TargetFovy': 20.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [3307.93994140625, 245.82000732421875, -461.6000061035156], 'AtVector': [3304.360107421875, 246.05999755859375, -465.489990234375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_Zora_Attendant002[FinishImu].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'IsWaitEnd': False, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3304.0830078125, 249.25729370117188, -477.3782043457031], 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ASName': '', 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_24', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[StartChallengeFencer].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventNPCTurnToTarget({'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'IsWaitEnd': True, 'WorldPos': [3302.800048828125, 249.25, -467.1499938964844], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
        Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02_AngryTalkWait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 10.0})
    }


    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_04', 'EndDialogOption': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_05', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': 'C02_Joy_Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [3304.0830078125, 247.0, -477.3782043457031], 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_27', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFront()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': 20.0})
        Npc_Zora_Attendant001[FinishHifumi].EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Zora_Attendant001[FinishHifumi].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'FaceControlType': 1, 'InstanceName': '', 'ActorName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Zora_Attendant002[FinishImu].EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'PosVector': [3302.97998046875, 250.82000732421875, -475.8900146484375], 'AtVector': [3303.610107421875, 250.64999389648438, -477.010009765625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_28', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'PosVector': [3304.22998046875, 250.3300018310547, -476.5199890136719], 'AtVector': [3304.530029296875, 250.14999389648438, -477.7799987792969], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }

    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk_Princess_Serious', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C04() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Zora_Attendant001', 'Actor1InstanceName': 'FinishHifumi', 'PosVector': [-0.3400000035762787, 1.2400000095367432, 2.3299999237060547], 'AtVector': [0.23999999463558197, 1.559999942779541, 1.2000000476837158], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True})
    Npc_Zora_Attendant001[FinishHifumi].EventNPCTurnToTarget({'IsWaitEnd': False, 'FaceControlType': 1, 'Target': 0, 'WorldPos': [3304.0830078125, 247.0, -477.3782043457031], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'FinishHifumi', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_Attendant001[FinishHifumi].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Zora_Attendant001[FinishHifumi].EventNPCTurnToTarget({'FaceControlType': 1, 'IsWaitEnd': False, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void C05() {
    Player.EventTriggerPlayerLookAtObject({'InstanceName': 'FinishHifumi', 'ActorName': 'Npc_Zora_Attendant001', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [1.7300000190734863, 1.090000033378601, 1.690000057220459], 'AtVector': [-1.3200000524520874, -0.07000000029802322, -1.2799999713897705], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'MoveTime': 45, 'Actor1ActorName': 'Player', 'PosVector': [1.7300000190734863, 1.7599999904632568, 1.690000057220459], 'AtVector': [-1.3600000143051147, 0.8500000238418579, -1.3200000524520874], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_42', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C06() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'PosVector': [3309.010009765625, 245.67999267578125, -463.0799865722656], 'TargetFovy': 33.20000076293945, 'AtVector': [3303.489990234375, 246.0500030517578, -464.69000244140625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerLookAtObject({'InstanceName': 'FinishHifumi', 'ActorName': 'Npc_Zora_Attendant001', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    Npc_Zora_Attendant001[FinishHifumi].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_31', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_32', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'FinishHifumi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
        Npc_Zora_Attendant002[FinishImu].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'FinishHifumi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Zora_Attendant002[FinishImu].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFront()
    }

    Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant002', 'InstanceName': 'FinishImu', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_Zora_Attendant001[FinishHifumi].EventTriggerLookAtObject({'InstanceName': 'FinishImu', 'ActorName': 'Npc_Zora_Attendant002', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_Attendant002[FinishImu].EventTriggerRequestLookAtTheFront()
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void C08() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'PosVector': [3308.81005859375, 245.8000030517578, -463.19000244140625], 'AtVector': [3305.909912109375, 245.99000549316406, -464.3800048828125], 'TargetFovy': 23.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_07', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ASName': '', 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_13', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C09() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'StartChallengeFencer', 'PosVector': [-0.8199999928474426, 1.8899999856948853, 2.1600000858306885], 'AtVector': [-0.7099999785423279, 1.8899999856948853, 1.8799999952316284], 'TargetFovy': 35.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk_Princess_Serious', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})

    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_23', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Message_HaveKnownZoraFencerName', 'Value': True, 'Index': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventOpenDemoNicknameUI({'IsWaitEnd': True, 'DemoNicknameType': 0, 'NameMessageLabel': 'ActorMsg/Npc:Npc_ZoraFencer_Name', 'NicknameMessageLabel': 'ActorMsg/Nickname:Yona'})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 50})
    GameSystemActor[TwoName].EventCloseDemoNicknameUI({'IsWaitEnd': True})
}

void C10() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3309.18994140625, 246.0800018310547, -461.8999938964844], 'AtVector': [3305.4599609375, 245.94000244140625, -464.1199951171875], 'TargetFovy': 30.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_35', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})

        fork {
            Npc_Zora_Attendant002[FinishImu].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
        } {
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_36', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
        }


        fork {
            Npc_Zora_Attendant002[FinishImu].EventTalk({'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_37', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'PosVector': [3308.8701171875, 246.0800018310547, -461.45001220703125], 'AtVector': [3305.389892578125, 245.89999389648438, -464.0299987792969], 'TargetFovy': 30.0, 'MoveTime': 20, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
        Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02_AngryTalkWait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

    Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait'})
}

void C11() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'StartChallengeFencer', 'PosVector': [-0.9599999785423279, 1.7300000190734863, 2.4100000858306885], 'AtVector': [1.3300000429153442, 2.109999895095825, -2.880000114440918], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_38', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 30.0})
}

void C12() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3299.10009765625, 245.27999877929688, -463.7900085449219], 'AtVector': [3300.570068359375, 245.82000732421875, -463.95001220703125], 'TargetFovy': 70.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_ZoraFencer[StartChallengeFencer].EventNPCTurnToTarget({'WorldPos': [3758.98095703125, 639.25, -418.1466979980469], 'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'WorldPos': [3758.98095703125, 639.25, -418.1466979980469], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerTurnAndLook({'WorldPos': [3758.98095703125, 639.25, -418.1466979980469], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerLookAtObject({'WorldPos': [3758.98095703125, 639.25, -418.1466979980469], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_Zora_Attendant002[FinishImu].EventTriggerLookAtObject({'WorldPos': [3758.98095703125, 639.25, -418.1466979980469], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void C13() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [3312.219970703125, 251.42999267578125, -465.7799987792969], 'PosVector': [3306.820068359375, 247.47000122070312, -464.5299987792969], 'TargetFovy': 27.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 125, 'PosVector': [3306.820068359375, 247.47000122070312, -464.5299987792969], 'AtVector': [3312.219970703125, 251.42999267578125, -465.7799987792969], 'TargetFovy': 22.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'StartChallengeFencer', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C14() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 42.400001525878906, 'PosVector': [3305.16796875, 246.21080017089844, -463.0705871582031], 'AtVector': [3304.173095703125, 246.19760131835938, -464.05108642578125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [3294.698974609375, 244.95089721679688, -465.2955017089844], 'ActorName': '', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})

    fork {
        Npc_Zora_Attendant002[FinishImu].EventTalk({'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_26', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant002', 'InstanceName': 'FinishImu', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': True, 'Target': 2, 'FaceControlType': 1, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_33', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerRequestLookAtTheFront()
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 30.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})

    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventAIScheduleMoveToPos({'DesiredGear': 0, 'Pos': [3300.297119140625, 244.6363983154297, -462.0981140136719], 'Rot': -33.9103889465332, 'IsWaitEnd': False, 'ASName': 'Walk', 'IsTurnToRot': False, 'IsAlignPos': False, 'ForceIsNotAlignmentWaitPosition': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'StartChallengeFencer', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Attendant002[FinishImu].EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C14_UMii_Zora_BodyC_W_000', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 20.0, 'IsAnimeDriven': True})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 23})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [3305.25, 246.2100067138672, -463.260009765625], 'AtVector': [3304.02001953125, 246.1999969482422, -463.80999755859375], 'TargetFovy': 42.400001525878906, 'MoveTime': 47, 'IsLinearMove': False, 'EndRecelerateRate': 0.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

}

void C15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'StartChallengeFencer', 'PosVector': [1.7899999618530273, 1.8899999856948853, 0.6899999976158142], 'AtVector': [0.009999999776482582, 1.9600000381469727, 0.2800000011920929], 'TargetFovy': 43.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventAIScheduleWarpToAnchor({'AnchorType': 6, 'InstanceName': 'ExitImuPos', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_17', 'EndDialogOption': 0, 'ASName': 'C15_DemoTalk', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZO_0003', 'IsUseSuspendFade': False})
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventAIScheduleMoveToPos({'Rot': 0.0, 'ASName': '', 'DesiredGear': 0, 'IsWaitEnd': False, 'IsAlignPos': True, 'IsTurnToRot': True, 'Pos': [3293.423095703125, 244.63699340820312, -450.8833923339844], 'ForceIsNotAlignmentWaitPosition': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void C07() {

    fork {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'PosVector': [3308.239990234375, 246.10000610351562, -461.9800109863281], 'AtVector': [3305.050048828125, 245.83999633789062, -464.3699951171875], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'Direction': 0.0, 'Target': 0, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'FinishImu', 'WorldPos': [3304.279052734375, 246.63699340820312, -463.2341003417969], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Attendant002[FinishImu].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ActorName': 'Npc_Zora_Attendant001', 'WorldPos': [3304.279052734375, 246.63699340820312, -463.2341003417969], 'Target': 3, 'InstanceName': 'FinishHifumi', 'ResetArriveTransformFixed': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFront()
    }

    Npc_Zora_Attendant002[FinishImu].EventTalk({'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_34', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'ASName': 'C06_UMii_Zora_BodyC_W_000', 'IsPlayASAllSlot': True, 'IsAnimeDriven': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant001', 'InstanceName': 'FinishHifumi', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerLookAtObject({'InstanceName': 'FinishImu', 'ActorName': 'Npc_Zora_Attendant002', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'PosVector': [3308.6201171875, 246.10000610351562, -462.04998779296875], 'AtVector': [3305.669921875, 245.97000122070312, -463.8999938964844], 'TargetFovy': 35.0, 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_22', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C06_End_UMii_Zora_BodyC_W_000', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'Partial': '', 'ASName': 'Wait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    }

    Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsAllSlot': False, 'ForceFadeInFrame': 30.0})

    fork {
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    }


    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_06', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventNPCTurnToTarget({'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void C16() {

    call End()

}

void C13_Already() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 42.400001525878906, 'PosVector': [3305.16796875, 246.21080017089844, -463.0705871582031], 'AtVector': [3304.173095703125, 246.19760131835938, -464.05108642578125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [3294.698974609375, 244.95089721679688, -465.2955017089844], 'ActorName': '', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})

    fork {
        Npc_Zora_Attendant002[FinishImu].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Attendant002', 'InstanceName': 'FinishImu', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': True, 'Target': 2, 'FaceControlType': 1, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_33', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerRequestLookAtTheFront()
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 30.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})

    fork {
        Npc_ZoraFencer[StartChallengeFencer].EventAIScheduleMoveToPos({'DesiredGear': 0, 'Pos': [3300.297119140625, 244.6363983154297, -462.0981140136719], 'Rot': -33.9103889465332, 'IsWaitEnd': False, 'IsTurnToRot': False, 'IsAlignPos': False, 'ASName': 'Walk', 'ForceIsNotAlignmentWaitPosition': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'StartChallengeFencer', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C14_UMii_Zora_BodyC_W_000', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 20.0, 'IsAnimeDriven': True})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 23})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [3305.25, 246.2100067138672, -463.260009765625], 'AtVector': [3304.02001953125, 246.1999969482422, -463.80999755859375], 'TargetFovy': 42.400001525878906, 'MoveTime': 47, 'IsLinearMove': False, 'EndRecelerateRate': 0.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C14_Already() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'StartChallengeFencer', 'PosVector': [1.7899999618530273, 1.8899999856948853, 0.6899999976158142], 'AtVector': [0.009999999776482582, 1.9600000381469727, 0.2800000011920929], 'TargetFovy': 43.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Attendant002[FinishImu].EventAIScheduleWarpToAnchor({'AnchorType': 6, 'InstanceName': 'ExitImuPos', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_17', 'EndDialogOption': 0, 'ASName': 'C15_DemoTalk', 'IsPlayASAllSlot': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZO_0003', 'IsUseSuspendFade': False})
    Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
    Npc_ZoraFencer[StartChallengeFencer].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_ZoraFencer[StartChallengeFencer].EventAIScheduleMoveToPos({'Rot': 0.0, 'ASName': '', 'DesiredGear': 0, 'IsWaitEnd': False, 'IsAlignPos': True, 'IsTurnToRot': True, 'Pos': [3293.423095703125, 244.63699340820312, -450.8833923339844], 'ForceIsNotAlignmentWaitPosition': False})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void C15_Already() {

    call End()

}

void C12_Already() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3308.47998046875, 245.8800048828125, -462.3599853515625], 'AtVector': [3307.110107421875, 245.89999389648438, -463.1400146484375], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0003:Dm_ZO_0003_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora_Attendant002[FinishImu].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'StartChallengeFencer', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void End() {

    fork {
        Npc_Zora_Attendant002[FinishImu].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_Zora_Attendant002[FinishImu].EventAIScheduleWarpToAnchor({'ActionType': 0, 'AnchorType': 6, 'InstanceName': 'ExitImuPos', 'IsWaitEnd': False, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_ZoraFencer[StartChallengeFencer].EventAIScheduleWarpToAnchor({'InstanceName': 'SanatoriumYonaPos', 'AnchorType': 4, 'ActionType': 0, 'IsWaitEnd': False, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.6800000071525574, 0.8199999928474426, 2.069999933242798], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 51.31999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Attendant001[FinishHifumi].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [3303.126953125, 244.63699340820312, -463.130615234375], 'YAngle': 116.70110321044922})
    }

    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CleanStatue', 'Value': 'Ready', 'Index': -1}) in [0, 1] {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'CleanStatue', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'MeetParkShido', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}
