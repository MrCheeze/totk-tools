-------- EventFlow: Npc_Wanderer_RitoVillage --------

Actor: Npc_Wanderer_RitoVillage
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventPlayAS']
queries: ['EventQueryOrderedBranch', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Kakariko005_RitoVillage
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Near() {
    Event0:
    Npc_Wanderer_RitoVillage.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Near_0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Talk() {
    Event2:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 2, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Wanderer_RitoVillage"), 'Actor2': ActorIdentifier(name="Npc_Kakariko005_RitoVillage"), 'Spearker1ActorName': 'Npc_Wanderer_RitoVillage', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Kakariko005_RitoVillage', 'Spearker2InstanceName': ''})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Wanderer_RitoVillage_IsFirstTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MemoryOfTheDragon_IsAfter_GoTemple2_Exp'}) {

            call DT_Talk()

        } else
        if !Npc_Wanderer_RitoVillage.EventQueryIsOnRecentTalkFlag() {
            Npc_Wanderer_RitoVillage.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            Event7:
            Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0004', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Yiga', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
                Event64:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Wanderer_RitoVillage_IsFirstTalk', 'Index': -1, 'Value': True})
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Naked', 'CheckHead': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_48', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event64
        } else {
            Npc_Kakariko005_RitoVillage.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_00', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event7
        }
    } else {
        Npc_Kakariko005_RitoVillage.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MemoryOfTheDragon_IsAfter_GoTemple2_Exp'}) {
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event37:
            switch Npc_Wanderer_RitoVillage.EventQueryOrderedBranch({'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': False, 'Key': 'MemoryOfTheDragon_WandererTalk'}) {
              case 0:
                Npc_Wanderer_RitoVillage.EventTalk({'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_22', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})
                Event38:
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Yiga', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
                    Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
                    Event41:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Wanderer_RitoVillage_IsFirstTalk', 'Index': -1, 'Value': True})
                } else
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Naked', 'CheckHead': False}) {
                    Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_48', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event41
              case 1:
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_26', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_29', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event38
              case 2:
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event38
              case 3:
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_25', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event38
            }
        } else {
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Wanderer_RitoVillage:Talk_0003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Yiga', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
                Event3:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Wanderer_RitoVillage_IsFirstTalk', 'Index': -1, 'Value': True})
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Naked', 'CheckHead': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_48', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event3
        }
    }
}

void NearActorsTalk() {
    goto Event2
}

void NearActorsNear() {
    goto Event0
}

void DT_Talk() {
    if !Npc_Wanderer_RitoVillage.EventQueryIsOnRecentTalkFlag() {
        Npc_Kakariko005_RitoVillage.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        switch Npc_Wanderer_RitoVillage.EventQueryOrderedBranch({'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': False, 'Key': 'MemoryOfTheDragon_WandererTalk'}) {
          case 0:
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_32', 'IsNotOpenIfSkipedMostRecent': False})
            Event43:
            Npc_Kakariko005_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Yiga', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Naked', 'CheckHead': False}) {
                Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 21, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_48', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event43
          case 2:
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_35', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event43
          case 3:
            Npc_Wanderer_RitoVillage.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MemoryOfTheDragon:Talk_36', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event43
        }
    } else
    goto Event37
}
