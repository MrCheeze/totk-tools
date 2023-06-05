-------- EventFlow: Mercenary_HyrulePlain_Bloody --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
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

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TamourHatago004[HyrulePlain]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerEmitXLink', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia004[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia005[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia006[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia007[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia009[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia008[HyrulePlain]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

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
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1026', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat', 'Index': -1}) {
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

    call Finale({'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {

        fork {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1065', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'HyrulePlain', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain")})

        }

        Npc_TamourHatago004[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia007', 'InstanceName': 'HyrulePlain', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TamourHatago004', 'Actor1InstanceName': 'HyrulePlain', 'LeaderActor': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

        Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1066', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat'}) {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1067', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1068', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event187:
        Npc_TamourHatago004[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'RideWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Finish({'ActorName': 'Npc_TamourHatago004', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'InstanceName': 'HyrulePlain', 'Reader': 'Reader'})


        call MercenaryChallenge_HyrulePlain.HyrulePlainFinaleEventCamera()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

    } else {

        fork {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1018', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'HyrulePlain', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain")})

        }

        Npc_TamourHatago004[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TamourHatago004', 'Actor1InstanceName': 'HyrulePlain', 'LeaderActor': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

        Npc_TamourHatago004[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat'}) {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1021', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1068', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event187
    }
}

void Clear_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat'}) {
        Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1013', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1022_01', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call MasterSword_Check({'Reader': 'Reader'})

    Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch({'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'HyrulePlain', 'Reader': 'Reader', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain"), 'Player': ActorIdentifier(name="Player")})

    Npc_TamourHatago004[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1062', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_HyrulePlain.LastGreeting_Hosta({'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1063', 'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'ActorName': 'Npc_TamourHatago004', 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'InstanceName': 'HyrulePlain', 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain")})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call ResetFlag()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Mercenary_HyrulePlain_Bloody', 'StepName': 'Ready', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'MeetAgain', 'ChallengeName': 'Mercenary_Hebra_Bloody', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
}

void MasterSword_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedHosta'}) {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedHosta'})
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1046', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1014', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
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

void Exterminate_Npc_MercenarySoldier_Hylia001_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1011', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia001_HyrulePlain_Near_StartWalk() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_LeaderArrival'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain"), 'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

        Npc_TamourHatago004[HyrulePlain].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1001', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia001_HyrulePlain_Near_StartBattle() {
    Npc_TamourHatago004[HyrulePlain].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1018', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_TamourHatago004_MercenaryChallenge_BattleStart_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1048', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1002', 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'ChallengeName': 'Mercenary_HyrulePlain_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
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
    Npc_TamourHatago004[HyrulePlain].EventTriggerParticipateEvent()

    fork {

        call MercenaryChallenge_HyrulePlain.HostaMember_OneTalk()

    } {
        Npc_TamourHatago004[HyrulePlain].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain")})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_BattleEventTalkOn'}) {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1020'})

        fork {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'HyrulePlain'})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_TamourHatago004[HyrulePlain].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'PosVector': [-0.3199999928474426, 0.6899999976158142, 2.5199999809265137], 'AtVector': [0.6200000047683716, 0.23000000417232513, -4.730000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Npc_TamourHatago004', 'Actor1InstanceName': 'HyrulePlain'})

        call Ready_Npc_LeaderTalk_BattleEventTalkOn()

    } else {

        call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow({'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk', 'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1020', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'TurntoActorName': 'Npc_TamourHatago004', 'TurntoInstanceName': 'HyrulePlain', 'MessageId_Last': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1047', 'LeaderActorName': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})


        call Ready_Npc_LeaderTalk()

    }
}

void Ready_Npc_TamourHatago004_BattleStart_StepStart() {
    Npc_TamourHatago004[HyrulePlain].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1006', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_TamourHatago004[HyrulePlain].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
}

void Ready_Npc_TamourHatago004_MercenaryChallenge_BattleStart_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1017', 'IsChallenge': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Near1011', 'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_TamourHatago004_HyrulePlain_Walking_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_BattleEventTalkOn'}) {
        Event68:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat', 'Value': True, 'Index': -1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1011', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1048', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1002', 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'ChallengeName': 'Mercenary_HyrulePlain_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk', 'Index': -1, 'Value': True})

        call MercenaryChallenge_HyrulePlain.HyrulePlain_MercenarySoldier_BattleStart_StepStart()

    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk'}) {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1001', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event121:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk'}) {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1019', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[HyrulePlain].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1017', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Move', 'ChallengeName': 'Mercenary_HyrulePlain_Bloody', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Run({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002", sub_name="HyrulePlain"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003", sub_name="HyrulePlain"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004", sub_name="HyrulePlain"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005", sub_name="HyrulePlain"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Hylia006", sub_name="HyrulePlain"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Hylia007", sub_name="HyrulePlain"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008", sub_name="HyrulePlain"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009", sub_name="HyrulePlain"), 'Reader': ActorIdentifier(name="Npc_TamourHatago004", sub_name="HyrulePlain")})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk', 'Index': -1, 'Value': True})
    }
}

void Ready_Npc_LeaderTalk() {
    goto Event121
}

void ResetFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HyrulePlain_BattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_IsDoneBattleEvent', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HyrulePlain_PreBattle', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HyrulePlainDelete', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HyrulePlain_Replay', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_Hebra_Replay', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hebra_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HebraDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HyrulePlain_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_001_TalkLeaderBeforeDefeat', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_HyrulePlain_BattleEventTalkOn', 'Value': False, 'Index': -1})
}

void Ready_Npc_LeaderTalk_BattleEventTalkOn() {
    goto Event68
}
