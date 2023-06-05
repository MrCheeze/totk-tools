-------- EventFlow: TwnObj_Village_IchikaraBed_A_03 --------

Actor: CustomHouseControlActor
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void TwnObj_Village_IchikaraBed_A_03() {
    CustomHouseControlActor.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_SleepBed', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
}
