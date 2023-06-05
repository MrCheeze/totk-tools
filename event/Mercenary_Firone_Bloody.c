-------- EventFlow: Mercenary_Firone_Bloody --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
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

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[Firone]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Goron001B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Goron002B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia008B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia009B[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Gerudo002_Mercenary[Firone]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: NPC_oasis004_fr02[Finale(Reader)]
entrypoint: Finale(Reader)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: NPC_oasis004_fr02[MasterSword_Check(Reader)]
entrypoint: MasterSword_Check(Reader)
actions: ['EventTalk']
queries: []
params: None

void Ready_Npc_MercenarySoldier_Firone_StartBattle() {
    NPC_oasis004_fr02[Firone].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_MercenarySoldier_Hylia001_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})

    } else {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone")})

    }

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1033', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1068', 'IsNotOpenIfSkipedMostRecent': False})
    Event8:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_Firone_Ready_isFirstTalk', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_BgmStart'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Mercenary_Firone_Bloody', 'IsWaitEnd': True})

    call MercenaryChallenge_Firone.Firone_MercenarySoldier_BattleStart_StepStart()

}

void Report_Npc_MercenarySoldier_Hylia001_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Mercenary_Amani_IsCamperPresent', 'Index': -1})

    call Finale({'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone")})

}

void Clear_Talk() {

    call MasterSword_Check({'Reader': 'Reader'})

    NPC_oasis004_fr02[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn({'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Firone', 'Reader': 'Reader', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})

    } else {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Amani({'ActorName': 'NPC_oasis004_fr02', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'Player': ActorIdentifier(name="Player"), 'InstanceName': 'Firone', 'Reader': 'Reader'})

    }
    NPC_oasis004_fr02[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1045', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_Firone.LastGreeting_Amani({'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Firone', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1049', 'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call ResetFlag()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Mercenary_Firone_Bloody', 'StepName': 'Ready', 'IsIgnoreChallengeProgressUI': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Mercenary_Hateru_Bloody', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'MeetAgain', 'IsWaitEnd': True})
}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {

        fork {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1063', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Firone', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

                call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})

            } else {

                call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone")})

            }
        }

        NPC_oasis004_fr02[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Goron001B', 'InstanceName': 'Firone', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'NPC_oasis004_fr02', 'Actor1InstanceName': 'Firone', 'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone")})

        NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1064', 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat'}) {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1065', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1067', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event63:
        NPC_oasis004_fr02[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'RideWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

            call MercenaryChallenge_Firone.MercenaryChallenge_Firone_Finish_Gerudoin({'NegativeAnime': 'Act_Tired_B'})

        } else {

            call MercenaryChallenge_Firone.MercenaryChallenge_Firone_Finish({'NegativeAnime': 'Act_Tired_B'})

        }

        call MercenaryChallenge_Firone.Camera_Player()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone")})

    } else {

        fork {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1018', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Firone', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

                call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})

            } else {

                call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone")})

            }
        }

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Mercenary_Firone_Bloody_IsAfter_Ready_Exp'}) {
            NPC_oasis004_fr02[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Goron001B', 'InstanceName': 'Firone', 'ResetArriveTransformFixed': False})

            call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'NPC_oasis004_fr02', 'Actor1InstanceName': 'Firone', 'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone")})

            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1023', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
            NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat'}) {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1066', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1067', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event63
        } else {

            call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'NPC_oasis004_fr02', 'Actor1InstanceName': 'Firone', 'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone")})

            NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1067', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event63
        }
    }
}

void MasterSword_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Index': -1}) {
            NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Value': True})
            NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1026_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Index': -1})
        && !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Value': True})
            NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1019', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia002B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia003B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia003B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Goron001B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Goron001B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia008B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia008B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Gerudo001B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Gerudo001B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Goron002B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Goron002B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia009B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia009B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Firone_Ready_isFirstTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event20:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat'})
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1, 4, 5, 8]:
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [4, 5]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [6, 7]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case [2, 3]:
                Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [6, 7]:
                Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1033', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1046', 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_Firone_Ready_isFirstTalk', 'Index': -1, 'Value': True})
        goto Event20
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia001_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1016', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1018', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia006A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1021', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia007A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1022', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia008A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1023', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia009A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1024', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Firone_BattleStart_StepStart() {
    NPC_oasis004_fr02[Firone].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_MercenarySoldier_CommonTalk_Goron() {

    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Goron()

    Event19:
    NPC_oasis004_fr02[Firone].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1033', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Firone', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        NPC_oasis004_fr02[Firone].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }


    call MercenaryChallenge_Firone.ReadyAmaniCamera({'TurntoActorName': 'NPC_oasis004_fr02', 'TurntoInstanceName': 'Firone'})

    NPC_oasis004_fr02[Firone].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1068', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event8
}

void Ready_Npc_MercenarySoldier_CommonTalk_Gerudo() {

    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Gerudo()

    goto Event19
}

void Ready_Npc_MercenarySoldier_CommonTalk() {

    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Firone"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Firone"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Firone"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Firone"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Firone"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Firone"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Firone"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Firone")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Hyrule()

    goto Event19
}

void ResetFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Firone_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Firone_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Firone_SoldierMember_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Firone_IsDoneBattleEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Firone_PreBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_FironeDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_Firone_Replay', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_Hateru_Replay', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_HateruDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_005_TalkLeaderBeforeDefeat', 'Value': False})
}

void Ready_NPC_oasis004_fr02_Firone_Near() {
    NPC_oasis004_fr02[Firone].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1025'})
}
