-------- EventFlow: PhotoSpot_Challenge_05 --------

Actor: TwnObj_StableHostelFrame_A_01[RiverSideHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_RiverSideHatago003
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_RiverSideHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="RiverSideHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_05_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_05_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_05_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'RiverSideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_RiverSideHatago003"), 'ChallengeName': 'PhotoSpot_Challenge_05'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'RiverSideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_RiverSideHatago003"), 'ChallengeName': 'PhotoSpot_Challenge_05'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_05', 'InstanceName': 'RiverSideHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_RiverSideHatago003"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_RiverSideHatago003"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_RiverSideHatago003")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'InstanceName': 'RiverSideHatago', 'ChallengeName': 'PhotoSpot_Challenge_05', 'Npc_EventStarter': ActorIdentifier(name="Npc_RiverSideHatago003"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_RiverSideHatago003")})

    }
}
