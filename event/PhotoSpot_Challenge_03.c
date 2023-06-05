-------- EventFlow: PhotoSpot_Challenge_03 --------

Actor: TwnObj_StableHostelFrame_A_01[NorthHatelHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_NorthHatelHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_NorthHatelHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="NorthHatelHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_03_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_03_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_03_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'NorthHatelHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_03'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'NorthHatelHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_03'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'Npc_EventStarter': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_03', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'InstanceName': 'NorthHatelHatago'})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_03', 'Npc_EventStarter_001': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'InstanceName': 'NorthHatelHatago'})

    }
}
