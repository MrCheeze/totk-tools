-------- EventFlow: Dm_GE_0037 --------

Actor: Npc_Gerudo_Queen_Young[Defense]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0037/Dm_GE_0037_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0037_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[PreDefense]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0037/Dm_GE_0037_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0037_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerHideObstructFocusRougeDead']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventStartVoiceForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[cam_shake]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void PreDefense_Rouge_Dead() {
    Npc_Gerudo_Queen_Young[PreDefense].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call Common.AirStartUP_Player()

    Npc_Gerudo_Queen_Young[PreDefense].EventTriggerRequestLookAtTheFront()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード長い)', 'DuckingName2': ''})
    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'FadeType': 3, 'IsForceFadeTime': True})
    }

    call C01_Karakara()

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_KarakaraDefense', 'IsUseSuspendFade': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Event33:
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'GameOverReason', 'Value': 'DefenseFailure', 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_GameOver'})
    GameSystemActor.EventTriggerHideObstructFocusRougeDead({'Radius': 30.0, 'Alpha': 1.0})
}

void Defense_Rouge_Dead() {
    Npc_Gerudo_Queen_Young[Defense].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call Common.AirStartUP_Player()

    Npc_Gerudo_Queen_Young[Defense].EventTriggerRequestLookAtTheFront()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード長い)'})
    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'FadeType': 3, 'IsForceFadeTime': True})
    }

    call C01_Gerudo()

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_GerudoVillageDefense', 'IsUseSuspendFade': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    goto Event33
}

void C01_Karakara() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsLinearMove': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'PreDefense', 'PosVector': [0.5799999833106995, 1.8200000524520874, 3.509999990463257], 'AtVector': [-0.2199999988079071, 0.49000000953674316, -0.5299999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'IsLinearMove': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'PreDefense', 'PosVector': [1.0199999809265137, 2.549999952316284, 5.739999771118164], 'AtVector': [-0.2199999988079071, 0.49000000953674316, -0.5299999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[PreDefense].EventPlayAS({'Partial': '', 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0_Down', 'IsWaitEnd': True, 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        Npc_Gerudo_Queen_Young[PreDefense].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0_Down_Loop', 'MessageId': 'EventFlowMsg/Dm_GE_0037:riju_death_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventTriggerHideObstructFocusRougeDead({'Radius': 30.0, 'Alpha': 0.5})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 51})
        GameSystemActor[cam_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        VoicePlayActor.EventStartVoiceForFlowchart({'MessageId': 'EventFlowMsg/Dm_GE_0037:riju_death_03', 'IsWaitEnd': False})
        Npc_Gerudo_Queen_Young[PreDefense].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0037_Sword_Stab', 'SLinkKey': ''})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
    }

}

void C01_Gerudo() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsLinearMove': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'PosVector': [0.5799999833106995, 1.8200000524520874, 3.509999990463257], 'AtVector': [-0.2199999988079071, 0.49000000953674316, -0.5299999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Defense', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'IsLinearMove': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'PosVector': [1.0199999809265137, 2.549999952316284, 5.739999771118164], 'AtVector': [-0.2199999988079071, 0.49000000953674316, -0.5299999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'Actor1InstanceName': 'Defense', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'Partial': '', 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0_Down', 'IsWaitEnd': True, 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0037:riju_death_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0_Down_Loop', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventTriggerHideObstructFocusRougeDead({'Radius': 30.0, 'Alpha': 0.5})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 51})
        GameSystemActor[cam_shake].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        VoicePlayActor.EventStartVoiceForFlowchart({'MessageId': 'EventFlowMsg/Dm_GE_0037:riju_death_03', 'IsWaitEnd': False})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0037_Sword_Stab', 'SLinkKey': ''})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
    }

}
