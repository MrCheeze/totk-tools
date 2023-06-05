-------- EventFlow: PhotoSpot_Challenge_04 --------

Actor: TwnObj_StableHostelFrame_A_01[HyruleDepthHatago]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HyruleDepthHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_HyruleDepthHatago_Talk() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="HyruleDepthHatago")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsCompleted_Exp'}) {

                call PhotoSpot_Challenge_02.After_Complete({'InstanceName': 'HyruleDepthHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_04'})

            } else {

                call PhotoSpot_Challenge_02.Reward({'InstanceName': 'HyruleDepthHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'ChallengeName': 'PhotoSpot_Challenge_04'})

            }
        } else {

            call PhotoSpot_Challenge_02.Step01_TwnObj_StableHostelFrame_A_01_ForestHatago_Talk({'ChallengeName': 'PhotoSpot_Challenge_04', 'InstanceName': 'HyruleDepthHatago', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'Npc_EventStarter_000': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

        }
    } else {

        call PhotoSpot_Challenge_02.Ready({'ChallengeName': 'PhotoSpot_Challenge_04', 'Npc_EventStarter': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'Npc_EventStarter_001': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'InstanceName': 'HyruleDepthHatago'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago005_Talk01', 'Index': -1, 'Value': True})
    }
}
