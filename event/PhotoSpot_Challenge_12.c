-------- EventFlow: PhotoSpot_Challenge_12 --------

Actor: TwnObj_StableHostelFrame_A_01[EastHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TamourHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_EastHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="EastHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_12_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_12_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_12_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'ChallengeName': 'PhotoSpot_Challenge_12', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourHatago005"), 'InstanceName': 'EastHatago'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'ChallengeName': 'PhotoSpot_Challenge_12', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourHatago005"), 'InstanceName': 'EastHatago'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'InstanceName': 'EastHatago', 'ChallengeName': 'PhotoSpot_Challenge_12', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourHatago005"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TamourHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourHatago005")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'InstanceName': 'EastHatago', 'ChallengeName': 'PhotoSpot_Challenge_12', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourHatago005")})

    }
}
