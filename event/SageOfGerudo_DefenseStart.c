-------- EventFlow: SageOfGerudo_DefenseStart --------

Actor: DefenseEventCreateZombieSystemActor[West]
entrypoint: None()
actions: ['EventTriggerRequestCreateZombieDefense', 'EventTriggerIgniteZombieDefense']
queries: ['EventQueryIsCreateZombieDefenseFinish']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DefenseEventCreateZombieSystemActor[North]
entrypoint: None()
actions: ['EventTriggerRequestCreateZombieDefense', 'EventTriggerIgniteZombieDefense']
queries: ['EventQueryIsCreateZombieDefenseFinish']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DefenseEventCreateZombieSystemActor[East]
entrypoint: None()
actions: ['EventTriggerRequestCreateZombieDefense', 'EventTriggerIgniteZombieDefense']
queries: ['EventQueryIsCreateZombieDefenseFinish']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    DefenseEventCreateZombieSystemActor[West].EventTriggerRequestCreateZombieDefense({'CreateNum': 3})
    Event2:
    if !DefenseEventCreateZombieSystemActor[West].EventQueryIsCreateZombieDefenseFinish() {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        goto Event2
    } else {
        DefenseEventCreateZombieSystemActor[West].EventTriggerIgniteZombieDefense()
        DefenseEventCreateZombieSystemActor[North].EventTriggerRequestCreateZombieDefense({'CreateNum': 3})
        Event6:
        if !DefenseEventCreateZombieSystemActor[North].EventQueryIsCreateZombieDefenseFinish() {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event6
        } else {
            DefenseEventCreateZombieSystemActor[North].EventTriggerIgniteZombieDefense()
            DefenseEventCreateZombieSystemActor[East].EventTriggerRequestCreateZombieDefense({'CreateNum': 4})
            Event10:
            if !DefenseEventCreateZombieSystemActor[East].EventQueryIsCreateZombieDefenseFinish() {
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                goto Event10
            } else {
                DefenseEventCreateZombieSystemActor[East].EventTriggerIgniteZombieDefense()
            }
        }
    }
}
