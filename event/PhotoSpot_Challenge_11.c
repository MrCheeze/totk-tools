-------- EventFlow: PhotoSpot_Challenge_11 --------

Actor: TwnObj_StableHostelFrame_A_01[HeightHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_FaronHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_HeightHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="HeightHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'ChallengeName': 'PhotoSpot_Challenge_11', 'InstanceName': 'HeightHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_FaronHatago_001")})

            } else {

                call PhotoSpot_Challenge_02.Reward({'ChallengeName': 'PhotoSpot_Challenge_11', 'InstanceName': 'HeightHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_FaronHatago_001")})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_11', 'Npc_EventStarter': ActorIdentifier(name="Npc_FaronHatago_001"), 'InstanceName': 'HeightHatago', 'Npc_EventStarter_000': ActorIdentifier(name="Npc_FaronHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_FaronHatago_001")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_FaronHatago_001"), 'ChallengeName': 'PhotoSpot_Challenge_11', 'InstanceName': 'HeightHatago', 'Npc_EventStarter_001': ActorIdentifier(name="Npc_FaronHatago_001")})

    }
}
