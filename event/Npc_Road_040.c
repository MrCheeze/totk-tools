-------- EventFlow: Npc_Road_040 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call Npc_HatenoVillage019.FirstEvent_Outside()

}

void Hateno_FirstEvent_Near() {

    call Npc_Road_018.Kono_NormalNear()

}

void Hateno_FirstEvent_Talk() {

    call Npc_Road_018.Kono_NormalTalk()

}

void Hateno_FirstEvent_NearActorsTalk() {
    if !Npc_EventStarter.EventQueryIsIndoor() {
        Event6:

        call Npc_Road_018.MeetingTalk()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_040_Terrace', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_018_Terrace', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_022_Terrace', 'Index': -1}) {
        goto Event6
    } else {

        call Npc_Road_018.Kono_NormalTalk()

    }
}

void Hateno_FirstEvent_NearActorsNear() {

    call Npc_Road_018.Kono_MeetingNear()

}
