-------- EventFlow: PhotoSpot_Challenge_13 --------

Actor: TwnObj_StableHostelFrame_A_01[SouthHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TamourPlainHatago_004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_SouthHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="SouthHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_13_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_13_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_13_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'ChallengeName': 'PhotoSpot_Challenge_13', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'InstanceName': 'SouthHatago'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'ChallengeName': 'PhotoSpot_Challenge_13', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'InstanceName': 'SouthHatago'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'InstanceName': 'SouthHatago', 'ChallengeName': 'PhotoSpot_Challenge_13', 'Npc_EventStarter': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourPlainHatago_004")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'ChallengeName': 'PhotoSpot_Challenge_13', 'InstanceName': 'SouthHatago'})

    }
}
