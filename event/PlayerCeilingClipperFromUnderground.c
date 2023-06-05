-------- EventFlow: PlayerCeilingClipperFromUnderground --------

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerCancelCeilingClipper']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: ['EventQueryIsFollowers']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventRequestSageBreakAway']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void PlayerCeilingClipperFromUnderground() {
    if !GameSystemActor.EventQueryIsFollowers({'ActorName': 'Npc_RaumiGolem_Sage'}) {

        call BreakawayFromSage.BreakawayFromSageSoul()

        ChallengeSystemActor.EventRequestSageBreakAway({'SageType': 5})
        Event0:

        call PlayerCeilingClipper.CeilingClipper({'IsFromUnderGround': True})

        if !Player.EventQueryPlayerCancelCeilingClipper() {
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {

            call PlayerCeilingClipper.CeilingClipperCancel({'IsFromUnderGround': True})

        }
    } else {
        goto Event0
    }
}
