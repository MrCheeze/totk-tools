-------- EventFlow: PlayerCeilingClipper --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerCeilingClipper', 'EventPlayerCeilingClipperCancel']
queries: ['EventQueryPlayerCancelCeilingClipper']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventCeilingClipperCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventCeilingClipperReturnCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventSetForbidEnergyGaugeMax', 'EventTriggerSetCtrlGuideIsEnebleInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void PlayerCeilingClipper() {

    call CeilingClipper({'IsFromUnderGround': False})

    if Player.EventQueryPlayerCancelCeilingClipper() {

        call CeilingClipperCancel({'IsFromUnderGround': False})

    }
}

void CeilingClipper() {
    GameSystemActor.EventTriggerSetCtrlGuideIsEnebleInEvent({'IsEnable': True})

    fork {
        EventCamera.EventCeilingClipperCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'TargetActorInstanceName': '', 'TargetActorName': 'Player', 'ToleranceXZAngle': 360.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'MoveTime': 10, 'LookAtVectorY': 0, 'LookAtVectorXZ': 1, 'IdealDistance': 5.5, 'ToleranceDistance': 0.5, 'IsWaitEnd': True, 'PostCeilingClipper': [0.0, 1.7000000476837158, 0.0], 'CameraCollisionMode': 0, 'PostCeilingClipperFrame': 20, 'TargetOffset': [0.0, 0.30000001192092896, 0.0], 'IsLinearMove': False, 'PostCeilingClipperEnableFadeFrame': 10, 'PostCeilingClipperSpeed': 0.4000000059604645, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    } {
        Player.EventPlayerCeilingClipper({'IsWaitEnd': True, 'IsFromUnderGround': 'IsFromUnderGround'})
    }

    GameSystemActor.EventSetForbidEnergyGaugeMax()
}

void CeilingClipperCancel() {

    fork {
        EventCamera.EventCeilingClipperReturnCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': True, 'TargetActorInstanceName': '', 'TargetActorName': 'Player', 'ToleranceXZAngle': 360.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'MoveTime': 10, 'LookAtVectorY': 0, 'LookAtVectorXZ': 1, 'IdealDistance': 5.5, 'ToleranceDistance': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 0, 'TargetOffset': [0.0, 1.7000000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerCeilingClipperCancel({'IsWaitEnd': True, 'IsFromUnderGround': 'IsFromUnderGround'})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
