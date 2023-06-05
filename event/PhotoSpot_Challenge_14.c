-------- EventFlow: PhotoSpot_Challenge_14 --------

Actor: TwnObj_StableHostelFrame_A_01[SnowfieldHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_SnowfieldHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="SnowfieldHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_14_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_14_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_14_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'SnowfieldHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaHatago004"), 'ChallengeName': 'PhotoSpot_Challenge_14'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'SnowfieldHatago', 'ChallengeName': 'PhotoSpot_Challenge_14', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaHatago004")})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'InstanceName': 'SnowfieldHatago', 'ChallengeName': 'PhotoSpot_Challenge_14', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaHatago004"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TabantaHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaHatago004")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'InstanceName': 'SnowfieldHatago', 'ChallengeName': 'PhotoSpot_Challenge_14', 'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaHatago004")})

    }
}
