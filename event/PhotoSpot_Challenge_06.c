-------- EventFlow: PhotoSpot_Challenge_06 --------

Actor: TwnObj_StableHostelFrame_A_01[HutagoHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HutagoHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_HutagoHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="HutagoHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_06_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_06_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_06_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'HutagoHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HutagoHatago_001"), 'ChallengeName': 'PhotoSpot_Challenge_06'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'HutagoHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HutagoHatago_001"), 'ChallengeName': 'PhotoSpot_Challenge_06'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_06', 'InstanceName': 'HutagoHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HutagoHatago_001"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HutagoHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HutagoHatago_001")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'InstanceName': 'HutagoHatago', 'ChallengeName': 'PhotoSpot_Challenge_06', 'Npc_EventStarter': ActorIdentifier(name="Npc_HutagoHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HutagoHatago_001")})

    }
}
