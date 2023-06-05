-------- EventFlow: VibrationCommon --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerRequestCameraShake', 'EventTriggerRequestEnduringCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void OnetimeLarge() {

    fork {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 1, 'IsRumbleController': True, 'Power': 0.30000001192092896})
    }

}

void OnetimeSmall() {
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 1, 'IsRumbleController': True, 'Power': 0.05000000074505806})
}

void ContinuousLarge() {
    EventCamera.EventTriggerRequestEnduringCameraShake({'IsRumbleController': True, 'ApplyType': 0, 'Power': 0.20000000298023224, 'Pattern': 3})
}

void ContinuousSmall() {
    EventCamera.EventTriggerRequestEnduringCameraShake({'Pattern': 3, 'IsRumbleController': True, 'ApplyType': 0, 'Power': 0.02500000037252903})
}

void OnetimeMiddle() {

    fork {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.20000000298023224, 'Pattern': 1, 'IsRumbleController': True})
    }

}

void ContinuousMiddle() {
    EventCamera.EventTriggerRequestEnduringCameraShake({'IsRumbleController': True, 'ApplyType': 0, 'Power': 0.10000000149011612, 'Pattern': 3})
}
