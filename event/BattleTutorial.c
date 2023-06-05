-------- EventFlow: BattleTutorial --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void SideStep() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk00', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 20})

}

void BackStep() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk01', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 19})

}

void GuardJust() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk02', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 16})

}

void SpinAttack() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk03', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 21})

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void Finish() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk04', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}

void SideStepRemind() {

    call Common.AirStartUP_Player_OnlyStopInAir()


    call Common.OpenActionGuideScreenForce({'ActionGuideType': 20})

}

void BackStepRemind() {

    call Common.AirStartUP_Player_OnlyStopInAir()


    call Common.OpenActionGuideScreenForce({'ActionGuideType': 19})

}

void GuardJustRemind() {

    call Common.AirStartUP_Player_OnlyStopInAir()


    call Common.OpenActionGuideScreenForce({'ActionGuideType': 16})

}

void SpinAttackRemind() {

    call Common.AirStartUP_Player_OnlyStopInAir()


    call Common.OpenActionGuideScreenForce({'ActionGuideType': 21})

}
