-------- EventFlow: Mercenary_Hebra_Bloody --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventWait']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_TamourHatago004[Hebra]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia004[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia005[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia006[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia007[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia008[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia009[Hebra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_TamourHatago004[Finale(Reader)]
entrypoint: Finale(Reader)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TamourHatago004[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_TamourHatago004[MasterSword_Check(Reader)]
entrypoint: MasterSword_Check(Reader)
actions: ['EventTalk']
queries: []
params: None

void Ready_Npc_TamourHatago004_Hebra_Walking_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'}) {
        Event51:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_BattleEventTalkOn'}) {
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat', 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Mercenary_Hebra_Bloody', 'IsWaitEnd': True})

            call MercenaryChallenge_Hebra.Hebra_MercenarySoldier_BattleStart_StepStart()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'}) {
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1022', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1021', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Move', 'IsWaitEnd': True, 'ChallengeName': 'Mercenary_Hebra_Bloody'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Run({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra"), 'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra")})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat', 'Value': True})
        }
    } else {
        Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event51
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1021', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1022', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1023', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia005_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1024', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia007_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1026', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia001_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1011', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call WeatherTalk()

        }
    } else {

        call Ready_Npc_TamourHatago004_MercenaryChallenge_BattleStart_Talk()

    }
}

void Exterminate_Npc_MercenarySoldier_Hylia006_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1025', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia008_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1027', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia009_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1028', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Report_Npc_MercenarySoldier_Hylia001_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Mercenary_Hosta_IsCamperPresent', 'Value': False, 'Index': -1})

    call Finale({'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra")})

}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {

        fork {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1065', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'ActorName': 'Npc_TamourHatago004', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Hebra', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra")})

        }

        Npc_TamourHatago004[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia007', 'InstanceName': 'Hebra', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TamourHatago004', 'Actor1InstanceName': 'Hebra', 'LeaderActor': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra")})

        Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1066', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat'}) {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1067', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1046', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event173:
        Npc_TamourHatago004[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'RideWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


        call MercenaryChallenge_Hebra.MercenaryChallenge_Hebra_Finish()


        call MercenaryChallenge_Hebra.HebraFinaleEventCamera()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra")})

    } else {

        fork {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1018', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'ActorName': 'Npc_TamourHatago004', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Hebra', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra")})

        }

        Npc_TamourHatago004[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TamourHatago004', 'Actor1InstanceName': 'Hebra', 'LeaderActor': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra")})

        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat'}) {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1021', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1046', 'ASName': 'RideForward', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event173
    }
}

void Clear_Talk() {

    call MasterSword_Check({'Reader': 'Reader'})

    Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch({'ActorName': 'Npc_TamourHatago004', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra"), 'InstanceName': 'Hebra', 'Reader': 'Reader'})

    Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1048', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_HyrulePlain.LastGreeting_Hosta({'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'Hebra', 'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1049'})

    Event5:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call ResetFlag()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Mercenary_Hebra_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Ready', 'IsWaitEnd': True})
}

void MasterSword_Check() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat'}) {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1025', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedHosta'}) {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedHosta'})
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia002_HyrulePlain_Talk() {

    call MercenaryChallenge_HyrulePlain.Ready_Npc_MercenarySoldier_Hylia002_HyrulePlain_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia003_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia003_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia006_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia006_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia008_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia008_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia002_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia002_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia004_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia004_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia005_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia005_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia007_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia007_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia009_Talk() {

    call MercenaryChallenge_HyrulePlain.Exterminate_Npc_MercenarySoldier_Hylia009_Talk()

}

void Ready_Npc_TamourHatago004_BattleStart_StepStart() {
    Npc_TamourHatago004[Hebra].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1006', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_TamourHatago004[Hebra].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
}

void Exterminate_Npc_MercenarySoldier_Hylia001_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1011', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_TamourHatago004_MercenaryChallenge_BattleStart_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'}) {
        Event143:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Mercenary_Hebra_Bloody', 'IsWaitEnd': True})
    } else {
        Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event143
    }
}

void Ready_Npc_TamourHatago004_MercenaryChallenge_BattleStart_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1017', 'IsChallenge': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1011', 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void WeatherTalk() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [4, 5]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk_020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_MercenarySoldier_CommonTalk() {
    Npc_TamourHatago004[Hebra].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Broken'}) {

        fork {

            call MercenaryChallenge_HyrulePlain.HostaMember_OneTalk()

        } {
            Npc_TamourHatago004[Hebra].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }


        fork {
            Npc_TamourHatago004[Hebra].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'Hebra', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }


        call MercenaryChallenge_Hebra.ReadyClearEvent()

    } else {

        fork {

            call MercenaryChallenge_HyrulePlain.HostaMember_OneTalk()

        } {
            Npc_TamourHatago004[Hebra].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="Hebra"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="Hebra"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="Hebra"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="Hebra"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="Hebra"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="Hebra"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="Hebra"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="Hebra")})

        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_BattleEventTalkOn'}) {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn({'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1020', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'TurntoActorName': 'Npc_TamourHatago004', 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk', 'LeaderActorName': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra"), 'TurntoInstanceName': 'Hebra'})

        } else {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow({'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1020', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'TurntoActorName': 'Npc_TamourHatago004', 'MessageId_Last': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1047', 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk', 'LeaderActorName': ActorIdentifier(name="Npc_TamourHatago004", sub_name="Hebra"), 'TurntoInstanceName': 'Hebra'})

        }

        call Ready_Npc_LeaderTalk()

    }
}

void Ready_Npc_LeaderTalk() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'}) {
        Npc_TamourHatago004[Hebra].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hebra:Talk1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event51
}

void Ready_Npc_MercenarySoldier_Hylia001_Hebra_Near_StartWalk() {

    call MercenaryChallenge_Hebra.Ready_Npc_MercenarySoldier_Hylia001_Hebra_Near_StartWalk()

}

void EndFlow() {
    goto Event5
}

void ResetFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_BattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_IsDoneBattleEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_PreBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_002_TalkLeaderBeforeDefeat', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HebraDelete', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_Hebra_Replay', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Replay', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_BloodyMoonStandby'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HyrulePlainDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_BattleEventTalkOn'})
}

void MercenaryChallenge_Hebra_Broken_ReadyTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_TamourHatago004[Hebra].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_Hebra.ReadyClearEvent()

}
