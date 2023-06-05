-------- EventFlow: PhotoSpot_Challenge_01 --------

Actor: TwnObj_StableHostelFrame_A_01[NewHyruleWestHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_NewHyruleWestHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="NewHyruleWestHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_01_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_01_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_01_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'NewHyruleWestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_01'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'NewHyruleWestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_01'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_01', 'InstanceName': 'NewHyruleWestHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleWestHatago005")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_01', 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleWestHatago005"), 'InstanceName': 'NewHyruleWestHatago'})

    }
}
