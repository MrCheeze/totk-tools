-------- EventFlow: MercenaryChallenge_Akkare --------

Actor: Npc_MercenarySoldier_Hylia002A[Akkare]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003A[Akkare]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia004A[Akkare]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia005A[Akkare]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMessageDialog', 'EventWait']
queries: ['EventQueryNothing']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventPlayerWarpToNearAnchorWithRidableActor']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[Akkare]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

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

Actor: Npc_TabantaBridgeHatago005[ClothPresentCheck(Reader)]
entrypoint: ClothPresentCheck(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_TabantaBridgeHatago005[ReadyClearEvent_Akkare(Reader)]
entrypoint: ReadyClearEvent_Akkare(Reader)
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)]
entrypoint: ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)]
entrypoint: ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)]
entrypoint: ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)]
entrypoint: ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

void Clear_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsAfter_Ready_Exp'}) {
            Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1023', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1022', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event111:

        call MasterSword_Check({'Reader': 'Reader'})

        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Elite({'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'InstanceName': 'Akkare', 'Reader': 'Reader'})


        call ClothPresentCheck({'Reader': 'Reader'})

        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1039', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1042', 'IsNotOpenIfSkipedMostRecent': False})

        call MercenaryChallenge_Eldin.LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1041'})

        Event115:
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Akkare'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

        call FlagReset()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        Npc_TabantaBridgeHatago005[Clear_Talk(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1024', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event111
    }
}

void MasterSword_Check() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'})
    && !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedVenire'})
        Npc_TabantaBridgeHatago005[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_MercenarySoldier_Akkare_Near_StartWalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Broken'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'DisplayFrame': 300, 'NotOverriddenByInterestBalloon': False})
    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_LeaderArrival'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Akkare:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_CommonTalk() {
    Npc_TabantaBridgeHatago005[Akkare].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Broken'}) {

        fork {

            call MercenaryChallenge_Eldin.ToryuMember_OneTalk()

        } {
            Npc_TabantaBridgeHatago005[Akkare].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }


        fork {
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }


        call ReadyClearEvent()

    } else {

        fork {

            call MercenaryChallenge_Eldin.ToryuMember_OneTalk()

        } {
            Npc_TabantaBridgeHatago005[Akkare].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare")})

        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_BattleEventTalkOn'}) {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn({'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1020', 'TurntoActorName': 'Npc_TabantaBridgeHatago005', 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'TurntoInstanceName': 'Akkare', 'LeaderActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        } else {

            call MercenaryChallenge_CommonTalk.Ready_MercenarySoldier_CommonFlow({'MessageId_GameDataName_True': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1020', 'TurntoActorName': 'Npc_TabantaBridgeHatago005', 'MessageId_Last': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1048', 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk', 'MessageId_GameDataName_False': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'TurntoInstanceName': 'Akkare', 'LeaderActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        }

        call Ready_Npc_LeaderTalk()

    }
}

void Ready_Npc_LeaderTalk() {
    Event258:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_BattleEventTalkOn'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Akkare', 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'})

        call Akkare_MercenarySoldier_BattleStart_StepStart()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Move', 'IsWaitEnd': True, 'ChallengeName': 'MercenaryChallenge_Akkare'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Start_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'})
    }
}

void Ready_Npc_TabantaBridgeHatago005_BattleStart_StepStart() {
    Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_TabantaBridgeHatago005[Akkare].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
}

void Ready_Npc_TabantaBridgeHatago005_Akkare_Walking_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare")})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event258
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_AnyoneTalked', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1051', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event152:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'MercenaryChallenge_Akkare', 'IsWaitEnd': True})
    } else {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'RideForward', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event152
    }
}

void Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsCompleted_Exp'}) {

        call Mercenary_Akkare_Bloody.Ready_Npc_TabantaBridgeHatago005_MercenaryChallenge_BattleStart_Near()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Broken'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_LeaderArrival'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsAfter_Ready_Exp'}) in [0, 1] {
            Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsAfter_Ready_Exp'}) in [0, 1] {
        Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1018', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
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
    && Npc_EventStarter.EventQueryIsBattle() {
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

void Npc_MercenarySoldier_Hylia005A_BattleStart_StepStart() {
    ;
}

void Ready_Npc_MercenarySoldier_Hylia002A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1037', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1010', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia005A_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1036', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1009', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
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
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Exterminate_Npc_MercenarySoldier_TabantaBridgeHatago005_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat', 'Index': -1}) {

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

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1043', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Akkare', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Akkare', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1044', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1058', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_028', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event91:
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'RideWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


        call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Finish_Elite({'ActorName': 'Npc_TabantaBridgeHatago005', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'InstanceName': 'Akkare', 'Reader': 'Reader'})


        call AkkareFinaleEventCamera()

        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

        call Clear_Talk({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

    } else {

        fork {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1018', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Elite({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare")})

        }

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia002A', 'InstanceName': 'Akkare', 'ResetArriveTransformFixed': False})

        call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'Actor1InstanceName': 'Akkare', 'LeaderActor': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1030', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat'}) {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1045', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_TabantaBridgeHatago005[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk_028', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event91
    }
}

void Report_Npc_MercenarySoldier_Talk() {

    call MercenaryChallenge_HyrulePlain.SoundControl_ClearEventStart()


    call MercenaryChallenge_HyrulePlain.InitClearEvent()

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Mercenary_Toryu_IsCamperPresent', 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsCompleted_Exp'}) {

        call Mercenary_Akkare_Bloody.Finale({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

    } else {

        call Finale({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

    }
}

void ClothPresentCheck() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Hebra_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Hateru_IsCompleted_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_ClothPresent'}) {
        Npc_TabantaBridgeHatago005[ClothPresentCheck(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_SubstituteCloth_07', 'IsSuccess': True})

        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_ClothPresent'})
    }
}

void EndFlow() {
    goto Event115
}

void Npc_TabantaBridgeHatago005_Akkare_NearBattlePoint() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Broken'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_LeaderArrival'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_TabantaBridgeHatago005[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Akkare_MercenarySoldier_BattleStart_StepStart() {
    Npc_MercenarySoldier_Hylia002A[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia003A[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia004A[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia005A[Akkare].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Eldin:Near1009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_BattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_IsDoneBattleEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_PreBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MercenaryChallenge_004_TalkLeaderBeforeDefeat', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_AkkareDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_BloodyMoonStandby_Toryu'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_Eldin_Replay'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_EldinDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Akkare_BattleEventTalkOn'})
}

void ReadyClearEvent() {
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

    call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'ReadyClearEvent_Akkare_Link'})


    call ReadyClearEvent_Akkare({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'InstanceName_SoldierWarp': 'ReadyClearEvent_Akkare', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare"), 'Npc_MercenarySoldier_Hylia002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'Npc_MercenarySoldier_Hylia003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'Npc_MercenarySoldier_Hylia004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'Npc_MercenarySoldier_Hylia005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare")})

    Npc_TabantaBridgeHatago005[Akkare].EventTriggerBecomeSpeaker()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_TabantaBridgeHatago005', 'PosVector': [6.25, -0.05999999865889549, 5.489999771118164], 'AtVector': [2.609999895095825, -0.7099999785423279, 2.109999895095825], 'TargetFovy': 42.18000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'Akkare', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1053', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Toryu_IsDefeatedFirst'}) {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1056', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1060', 'IsNotOpenIfSkipedMostRecent': False})
        Event145:

        call MasterSword_Check({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})


        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Elite({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'Player': ActorIdentifier(name="Player"), 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})


        call ClothPresentCheck({'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare")})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsCompleted_Exp'}) {
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1027', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1042', 'IsNotOpenIfSkipedMostRecent': False})

            call MercenaryChallenge_Eldin.LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1041'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Toryu_IsDefeatedFirst'})

            call Mercenary_Akkare_Bloody.EndFlow()

        } else {
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1039', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1042', 'IsNotOpenIfSkipedMostRecent': False})

            call MercenaryChallenge_Eldin.LastGreeting_Toryu({'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'Akkare', 'Reader': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="Akkare"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002A", sub_name="Akkare"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003A", sub_name="Akkare"), 'MercenarySoldier004': ActorIdentifier(name="Npc_MercenarySoldier_Hylia004A", sub_name="Akkare"), 'MercenarySoldier005': ActorIdentifier(name="Npc_MercenarySoldier_Hylia005A", sub_name="Akkare"), 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1041'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Toryu_IsDefeatedFirst'})

            call EndFlow()

        }
    } else {
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1059', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Eldin:Talk1057', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event145
    }
}

void MercenaryChallenge_Akkare_Broken_ReadyTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_TabantaBridgeHatago005[Akkare].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Akkare:Talk1001', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call ReadyClearEvent()

}

void ReadyClearEvent_Akkare() {
    Npc_TabantaBridgeHatago005[ReadyClearEvent_Akkare(Reader)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ReadyClearEvent_Akkare_Link', 'UseDemoWait': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_TabantaBridgeHatago005[ReadyClearEvent_Akkare(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia002A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia002)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia003A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia003)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia004A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia004)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventAIScheduleMoveToAnchor({'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'AnchorType': 22, 'InstanceName': 'InstanceName_SoldierWarp', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia005A[ReadyClearEvent_Akkare(Npc_MercenarySoldier_Hylia005)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void AkkareFinaleEventCamera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3012.320068359375, 390.2300109863281, -1194.280029296875], 'AtVector': [3007.77001953125, 388.8399963378906, -1195.81005859375], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}
