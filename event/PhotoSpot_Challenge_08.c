-------- EventFlow: PhotoSpot_Challenge_08 --------

Actor: TwnObj_StableHostelFrame_A_01[DeathMountainHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DeathEastHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_DeathMountainHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="DeathMountainHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_08_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_08_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_08_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'ChallengeName': 'PhotoSpot_Challenge_08', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'InstanceName': 'DeathMountainHatago'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'ChallengeName': 'PhotoSpot_Challenge_08', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'InstanceName': 'DeathMountainHatago'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'InstanceName': 'DeathMountainHatago', 'ChallengeName': 'PhotoSpot_Challenge_08', 'Npc_EventStarter': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathEastHatago_001")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'Npc_EventStarter': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_DeathEastHatago_001"), 'InstanceName': 'DeathMountainHatago', 'ChallengeName': 'PhotoSpot_Challenge_08'})

    }
}
