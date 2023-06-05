-------- EventFlow: ShieldSurfing_MiniGame_ChkLastPrize --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_IceVillage011[GoneSnow_S]
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void CantGetLastPrize() {
    Event45:
    Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Root() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward9_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_022', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_022'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward9_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward9_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {
            goto Event45
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward8_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_003', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_003'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward8_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward8_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward7_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_002', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_002'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward7_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward7_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward6_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_042', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_042'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward6_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward6_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward5_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_035', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_035'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward5_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward5_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward4_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_032', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_032'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward4_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward4_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward3_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_034', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_034'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward3_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward3_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward2_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_031', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_031'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward2_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward2_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_Reward1_MaxPouch'}) {
        if Npc_IceVillage011[GoneSnow_S].EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_PlayedThisVisit', 'Value': False})
        }
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_001', 'Num': 1}) {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Shield_001'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ShieldSurfing_Reward1_MaxPouch'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_Reward1_Get'})

            call ShieldSurfing_MiniGame.AfterGetLastPrize()

        } else {

            call CantGetLastPrize()

        }
    } else {

        call ShieldSurfing_MiniGame.EndChkLastPrize()

    }
}
