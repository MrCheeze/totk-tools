-------- EventFlow: TwnObj_DemonStatue_C_01 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatue_C_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsCompleted_Exp'}) {
        TwnObj_DemonStatue_C_01.EventTriggerParticipateEvent()

        call InitTalkNoTurn()

        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})

        call TwnObj_DemonStatue_C_02.Talk_Common_Base({'MeetFlag': 'Minus_DemonStatue1', 'FirstTalk': 'EventFlowMsg/TwnObj_DemonStatue_C_01:Talk_0011', 'SecondTalk': 'EventFlowMsg/TwnObj_DemonStatue_C_01:Talk_0012', 'KnownFlag': 'HaveKnownDemonStatue_00'})

    } else {

        call Connect_FirstIsland.DemonVoiceRepeat()

    }
}

void InitTalkNoTurn() {
    TwnObj_DemonStatue_C_01.EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_01', 'TargetFovy': 50.619998931884766, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 78.30999755859375, 34.619998931884766], 'AtVector': [0.0, 78.12999725341797, 31.139999389648438], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveKnownDemonStatue_00'})
}
