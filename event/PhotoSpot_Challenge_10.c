-------- EventFlow: PhotoSpot_Challenge_10 --------

Actor: TwnObj_StableHostelFrame_A_01[LakesideHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_LakeSideHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_LakesideHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="LakesideHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_10_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_10_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_10_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'LakesideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_LakeSideHatago004"), 'ChallengeName': 'PhotoSpot_Challenge_10'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'LakesideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_LakeSideHatago004"), 'ChallengeName': 'PhotoSpot_Challenge_10'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_10', 'InstanceName': 'LakesideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_LakeSideHatago004"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_LakeSideHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_LakeSideHatago004")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'ChallengeName': 'PhotoSpot_Challenge_10', 'Npc_EventStarter': ActorIdentifier(name="Npc_LakeSideHatago004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_LakeSideHatago004"), 'InstanceName': 'LakesideHatago'})

    }
}
