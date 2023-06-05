-------- EventFlow: Mercenary_Eldin_Bloody --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsDown', 'EventQueryIsBattle', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

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

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: ['EventQueryNothing']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[Eldin]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002A[Eldin]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003A[Eldin]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia004A[Eldin]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia005A[Eldin]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)]
entrypoint: MasterSword_Check(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[Finale(Reader)]
entrypoint: Finale(Reader)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

void Ready_Npc_MercenarySoldier_CommonTalk() {
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerParticipateEvent()

    fork {

        call MercenaryChallenge_Eldin.ToryuMember_OneTalk()

    } {

        call MercenaryChallenge_Eldin.RequestCouplerInvisible()

    } {
        Npc_TabantaBridgeHatago005[Eldin].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

    }

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'}) {

        call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow({'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk', 'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1020', 'TurntoActorName': 'Npc_TabantaBridgeHatago005', 'TurntoInstanceName': 'Eldin', 'MessageId_Last': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1048', 'LeaderActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1026'})


        call Ready_Npc_LeaderTalk()

    }
}

void Ready_Npc_LeaderTalk() {
    Event0:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1002', 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Mercenary_Eldin_Bloody', 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})

        call MercenaryChallenge_Eldin.Eldin_MercenarySoldier_BattleStart_StepStart()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Move', 'ChallengeName': 'Mercenary_Eldin_Bloody', 'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin")})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1012', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1013', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1015', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia005A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1014', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_MercenarySoldier_Hylia004A_BattleStart_StepStart() {
    ;
}

void Npc_MercenarySoldier_Hylia002A_BattleStart_StepStart() {
    ;
}

void Npc_MercenarySoldier_Hylia003A_BattleStart_StepStart() {
    ;
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia002A_Talk() {

    call MercenaryChallenge_Akkare.Ready_Npc_MercenarySoldier_Hylia002A_Talk()

}

void WeatherTalk() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [4, 5]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk_025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_026', 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_027', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Talk() {

    call MercenaryChallenge_Akkare.Exterminate_Npc_MercenarySoldier_Hylia004A_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Talk() {

    call MercenaryChallenge_Akkare.Exterminate_Npc_MercenarySoldier_Hylia002A_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Talk() {

    call MercenaryChallenge_Akkare.Exterminate_Npc_MercenarySoldier_Hylia003A_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia005A_Talk() {

    call MercenaryChallenge_Akkare.Exterminate_Npc_MercenarySoldier_Hylia005A_Talk()

}

void Ready_Npc_TabantaBridgeHatago005_Eldin_Walking_Talk() {

    call MercenaryChallenge_Eldin.RequestCouplerInvisible()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1046', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event0
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Talk() {

    call MercenaryChallenge_Eldin.RequestCouplerInvisible()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1046', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1049', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event47:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Mercenary_Eldin_Bloody', 'IsWaitEnd': True})
    } else {
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Eldin].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_HyrulePlain:Talk1002', 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event47
    }
}

void Ready_Npc_MercenarySoldier_Eldin_Near_StartWalk() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_LeaderArrival'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call WeatherTalk()

        }
    } else {

        call Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Talk()

    }
}

void MasterSword_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'}) {
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'})
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
                Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1024', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1043', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Eldin', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Eldin', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1044', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1058', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1062', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event39:
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'RideWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Finish_Elite({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'Reader': 'Reader'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor2ActorName': '', 'PosVector': [2409.16796875, 556.1680297851562, -2958.988037109375], 'AtVector': [2413.385009765625, 554.9660034179688, -2961.468994140625], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

    } else {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1018', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Eldin', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Eldin', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1030', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1045', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1062', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event39
    }
}

void Report_Npc_MercenarySoldier_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Mercenary_Toryu_IsCamperPresent', 'Index': -1})

    call Finale({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin")})

}

void Clear_Talk() {

    call MasterSword_Check({'Reader': 'Reader'})

    Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Elite({'InstanceName': 'Eldin', 'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin"), 'Reader': 'Reader'})

    Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1027', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_Eldin.LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Eldin', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1040', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Eldin"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Eldin"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Eldin"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Eldin"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Eldin")})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call ResetFlag()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Mercenary_Eldin_Bloody', 'StepName': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Mercenary_Akkare_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'MeetAgain', 'IsWaitEnd': True})
}

void Ready_Npc_MercenarySoldier_Eldin_Near_StartBattle() {
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1018', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_SoldierAllDead', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_TabantaBridgeHatago005_BattleStart_StepStart() {
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_TabantaBridgeHatago005[Eldin].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
}

void ResetFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_BattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_IsDoneBattleEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_PreBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_003_TalkLeaderBeforeDefeat', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_EldinDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_Replay'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_Akkare_Replay'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_AkkareDelete', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Eldin_BattleEventTalkOn'})
}
