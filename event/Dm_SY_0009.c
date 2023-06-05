-------- EventFlow: Dm_SY_0009 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventShowCharaDirectory', 'EventWait', 'EventCloseMinusMenu', 'EventShowMessageDialogArrowOnly']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventShowCharaDirectory({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    GameSystemActor.EventShowMessageDialogArrowOnly({'IsWaitEnd': True})
    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
}
