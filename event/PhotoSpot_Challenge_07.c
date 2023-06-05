-------- EventFlow: PhotoSpot_Challenge_07 --------

Actor: TwnObj_StableHostelFrame_A_01[TabantaBridgeHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_TabantaBridgeHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="TabantaBridgeHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_07_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_07_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_07_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'InstanceName': 'TabantaBridgeHatago', 'ChallengeName': 'PhotoSpot_Challenge_07'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'InstanceName': 'TabantaBridgeHatago', 'ChallengeName': 'PhotoSpot_Challenge_07'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_07', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'InstanceName': 'TabantaBridgeHatago'})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'ChallengeName': 'PhotoSpot_Challenge_07', 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'InstanceName': 'TabantaBridgeHatago'})

    }
}
