-------- EventFlow: SageOfGerudo_RougeTrainingPre2 --------

Actor: Obj_Lightning_Conductor[Training1]
entrypoint: None()
actions: ['EventTriggerRequestStrikeLightning']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Obj_Lightning_Conductor[Training1].EventTriggerRequestStrikeLightning({'IsSage': True})
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
}
