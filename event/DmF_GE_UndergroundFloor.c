-------- EventFlow: DmF_GE_UndergroundFloor --------

Actor: Npc_oasis047[town]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerSetHaveTalked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis026
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerSetHaveTalked', 'EventClosePlacementShopUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerOffSurfaceVelocityFloatWater', 'EventTriggerSetExtraOrderInput', 'EventPlayerWait', 'EventPlayerStopInAir', 'EventTriggerParticipateEvent', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerOffStopMode', 'EventPlayerOnSurfaceVelocityFloatWater']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventEventFadeOut', 'EventCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Npc_oasis026.EventClosePlacementShopUI({'IsWaitEnd': False})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': False})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_UndergroundFirstInP', 'Index': -1}) {
            Npc_oasis047[town].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
            Npc_oasis047[town].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
                Npc_oasis047[town].EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_GE_SubCharaAMeet:NewText_12', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_oasis047[town].EventTalk({'MessageId': 'EventFlowMsg/SageOfGerudo_UndergroundFirstIn:Text_00', 'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_oasis047[town].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            Event3:
            EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        } else {
            Npc_oasis026.EventPlayAS({'ASName': 'BattleWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_oasis026.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
                Npc_oasis026.EventTalk({'ASName': 'BattleWait', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_GE_SubCharaAMeet:NewText_12', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_oasis026.EventTalk({'MessageId': 'EventFlowMsg/SageOfGerudo_UndergroundFirstIn:Text_00', 'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsAnonymous': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_oasis026.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            goto Event3
        }
    } {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerOffSurfaceVelocityFloatWater()
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if !Player.EventQueryCheckPlayerState({'State': 17}) {
                if !Player.EventQueryCheckPlayerState({'State': 3}) {
                    if !Player.EventQueryCheckPlayerState({'State': 12})
                    && !Player.EventQueryCheckPlayerState({'State': 8})
                    && !Player.EventQueryCheckPlayerState({'State': 6}) {
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASCommand': 'LookAroundAttention', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    }
                } else {
                    Player.EventPlayerWait({'IsWaitEnd': True})
                }
            } else {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
            }
        } else {
            Player.EventTriggerSetExtraOrderInput({'ExtraOrder': 2})
        }
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_oasis047[town].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Player.EventPlayerOffStopMode()
    Player.EventPlayerOnSurfaceVelocityFloatWater()
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}
