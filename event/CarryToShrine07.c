-------- EventFlow: CarryToShrine07 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Start() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/CarryToShrine01:start01', 'IsWithAncientGlyph': True, 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/CarryToShrine01:start02', 'IsWithAncientGlyph': True, 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/CarryToShrine01:start03', 'IsWithAncientGlyph': True, 'IsUnder': False})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 15, 'Actor1ActorName': '', 'PosVector': [3330.0, 300.0, -3419.0], 'AtVector': [3322.0, 300.0, -3416.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Carry', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'CarryToShrine07', 'IsWaitEnd': True})
}
