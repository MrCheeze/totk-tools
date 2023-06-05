-------- EventFlow: Orchestra_Common --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor[V]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[SubOrchestraClearedCheck(Npc_SpeakerName)]
entrypoint: SubOrchestraClearedCheck(Npc_SpeakerName)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[SubOrchestraClearedCheck(Npc_Beats)]
entrypoint: SubOrchestraClearedCheck(Npc_Beats)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_M_H[SubOrchestraClearedCheck(Npc_Euphol)]
entrypoint: SubOrchestraClearedCheck(Npc_Euphol)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[SubOrchestraClearedCheck(Npc_Fei)]
entrypoint: SubOrchestraClearedCheck(Npc_Fei)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_W_00[SubOrchestraClearedCheck(Npc_Violan)]
entrypoint: SubOrchestraClearedCheck(Npc_Violan)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra2and3_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra2and3_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra2_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra2_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra3_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra3_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra4_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra4_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra2and4_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra2and4_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra3and4_ThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra3and4_ThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Orchestra_AllThanksTalk(Npc_SpeakerName)]
entrypoint: Orchestra_AllThanksTalk(Npc_SpeakerName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[FinaleEvent(Npc_ActorName)]
entrypoint: FinaleEvent(Npc_ActorName)
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerSetRecentTalkFlag']
queries: []
params: None

Actor: Npc_Orchestra_M_P[FinaleEvent(Npc_Beats)]
entrypoint: FinaleEvent(Npc_Beats)
actions: ['EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_H[FinaleEvent(Npc_Euphol)]
entrypoint: FinaleEvent(Npc_Euphol)
actions: ['EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[FinaleEvent(Npc_Fei)]
entrypoint: FinaleEvent(Npc_Fei)
actions: ['EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[FinaleEvent(Npc_Violan)]
entrypoint: FinaleEvent(Npc_Violan)
actions: ['EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_00[FairyChallengeAllClear(Npc_ActorName)]
entrypoint: FairyChallengeAllClear(Npc_ActorName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_M_P[FairyChallengeAllClear(Npc_Beats)]
entrypoint: FairyChallengeAllClear(Npc_Beats)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_M_H[FairyChallengeAllClear(Npc_Euphol)]
entrypoint: FairyChallengeAllClear(Npc_Euphol)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[FairyChallengeAllClear(Npc_Fei)]
entrypoint: FairyChallengeAllClear(Npc_Fei)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_W_00[FairyChallengeAllClear(Npc_Violan)]
entrypoint: FairyChallengeAllClear(Npc_Violan)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_M_00[FairyChallengePlayerLook(Npc_Orchestra_M_00)]
entrypoint: FairyChallengePlayerLook(Npc_Orchestra_M_00)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[FairyChallengePlayerLook(Npc_Orchestra_W_00)]
entrypoint: FairyChallengePlayerLook(Npc_Orchestra_W_00)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_P[FairyChallengePlayerLook(Npc_Orchestra_M_P)]
entrypoint: FairyChallengePlayerLook(Npc_Orchestra_M_P)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[FairyChallengePlayerLook(Npc_Orchestra_BT_F)]
entrypoint: FairyChallengePlayerLook(Npc_Orchestra_BT_F)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_H[FairyChallengePlayerLook(Npc_Orchestra_M_H)]
entrypoint: FairyChallengePlayerLook(Npc_Orchestra_M_H)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)]
entrypoint: FinaleEvent_RiverSide(Npc_ActorName)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag']
queries: []
params: None

Actor: Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)]
entrypoint: FinaleEvent_RiverSide(Npc_Beats)
actions: ['EventPlayAS', 'EventWait', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)]
entrypoint: FinaleEvent_RiverSide(Npc_Euphol)
actions: ['EventPlayAS', 'EventWait', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)]
entrypoint: FinaleEvent_RiverSide(Npc_Fei)
actions: ['EventPlayAS', 'EventWait', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)]
entrypoint: FinaleEvent_RiverSide(Npc_Violan)
actions: ['EventPlayAS', 'EventWait', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[SubOrchestraClearedCheck_RiverSide(Npc_SpeakerName)]
entrypoint: SubOrchestraClearedCheck_RiverSide(Npc_SpeakerName)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[SubOrchestraClearedCheck_RiverSide(Npc_Beats)]
entrypoint: SubOrchestraClearedCheck_RiverSide(Npc_Beats)
actions: ['EventWait', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_M_H[SubOrchestraClearedCheck_RiverSide(Npc_Euphol)]
entrypoint: SubOrchestraClearedCheck_RiverSide(Npc_Euphol)
actions: ['EventWait', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[SubOrchestraClearedCheck_RiverSide(Npc_Fei)]
entrypoint: SubOrchestraClearedCheck_RiverSide(Npc_Fei)
actions: ['EventWait', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_W_00[SubOrchestraClearedCheck_RiverSide(Npc_Violan)]
entrypoint: SubOrchestraClearedCheck_RiverSide(Npc_Violan)
actions: ['EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

void SubOrchestraClearedCheck() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra_AllMember'}) {
        Npc_Orchestra_M_P[SubOrchestraClearedCheck(Npc_Beats)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
        Npc_Orchestra_M_P[SubOrchestraClearedCheck(Npc_Beats)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Orchestra_M_H[SubOrchestraClearedCheck(Npc_Euphol)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
        Npc_Orchestra_M_H[SubOrchestraClearedCheck(Npc_Euphol)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_Orchestra_BT_F[SubOrchestraClearedCheck(Npc_Fei)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
        Npc_Orchestra_BT_F[SubOrchestraClearedCheck(Npc_Fei)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
        Npc_Orchestra_W_00[SubOrchestraClearedCheck(Npc_Violan)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
        Npc_Orchestra_W_00[SubOrchestraClearedCheck(Npc_Violan)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        Event57:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isFirstTalk_Orchestra2Cleared', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra3Cleared'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra4Cleared'}) {

                    call Orchestra_AllThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

                } else {

                    call Orchestra2and3_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra4Cleared'}) {

                call Orchestra2and4_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

            } else {

                call Orchestra2_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra3Cleared'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra4Cleared'}) {

                call Orchestra3and4_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

            } else {

                call Orchestra3_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isFirstTalk_Orchestra4Cleared'}) {

            call Orchestra4_ThanksTalk({'Npc_SpeakerName': 'Npc_SpeakerName'})

        }
    } else
    goto Event57
}

void Orchestra2and3_ThanksTalk() {
    Npc_EventStarter[Orchestra2and3_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0023', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra2and3_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0024', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_Orchestra3Cleared', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra2Cleared', 'Index': -1})
}

void Orchestra2_ThanksTalk() {
    Npc_EventStarter[Orchestra2_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Fairy3:Talk0017', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra2_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Fairy3:Talk0018', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra2Cleared', 'Index': -1})
}

void Orchestra3_ThanksTalk() {
    Npc_EventStarter[Orchestra3_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Fairy4:Talk1044', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra3_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Fairy4:Talk1045', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_Orchestra3Cleared', 'Value': False, 'Index': -1})
}

void Orchestra4_ThanksTalk() {
    Npc_EventStarter[Orchestra4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0021', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0022', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra4Cleared', 'Index': -1})
}

void Orchestra2and4_ThanksTalk() {
    Npc_EventStarter[Orchestra2and4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0025', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra2and4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0026', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra2Cleared', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra4Cleared', 'Index': -1})
}

void Orchestra3and4_ThanksTalk() {
    Npc_EventStarter[Orchestra3and4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0027', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra3and4_ThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0028', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_Orchestra3Cleared', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra4Cleared', 'Index': -1})
}

void Orchestra_AllThanksTalk() {
    Npc_EventStarter[Orchestra_AllThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0029', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[Orchestra_AllThanksTalk(Npc_SpeakerName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0030', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_Orchestra3Cleared', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra2Cleared', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'isFirstTalk_Orchestra4Cleared', 'Index': -1})
}

void FinaleEvent() {
    Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Conductor_Relative', 'CameraCollisionMode': 0, 'Actor1InstanceName': 'Conductor_Relative_Ins', 'PosVector': [0.0, 0.8999999761581421, 2.880000114440918], 'AtVector': [0.0, 0.8999999761581421, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
    }

    Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0031', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0035', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 0, 'Target': 3, 'ActorName': 'Fei_ActorName', 'InstanceName': 'Fei_InstanceName', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3.369999885559082, 0.9200000166893005, 6.0], 'AtVector': [0.4099999964237213, 0.5799999833106995, 1.7100000381469727], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Fei_ActorName', 'Actor1InstanceName': 'Fei_InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0032', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Orchestra_M_P[FinaleEvent(Npc_Beats)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FinalEvent_JoyTalk'})
    } {
        Npc_Orchestra_M_H[FinaleEvent(Npc_Euphol)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FinalEvent_JoyTalk'})
    } {
        Npc_Orchestra_BT_F[FinaleEvent(Npc_Fei)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FinalEvent_JoyTalk_Fei'})
    } {
        Npc_Orchestra_W_00[FinaleEvent(Npc_Violan)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FinalEvent_JoyTalk'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

    fork {
        Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        Player.EventDoNothing({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
    }


    fork {
        Npc_Orchestra_M_P[FinaleEvent(Npc_Beats)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Orchestra_M_H[FinaleEvent(Npc_Euphol)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Orchestra_BT_F[FinaleEvent(Npc_Fei)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[V].EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_Orchestra_W_00[FinaleEvent(Npc_Violan)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra_AllMemberIsThankyouTalk', 'Index': -1, 'Value': True})
    Npc_EventStarter[FinaleEvent(Npc_ActorName)].EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void FairyChallengeAllClear() {
    Npc_Orchestra_M_00[FairyChallengeAllClear(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3201', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_W_00[FairyChallengeAllClear(Npc_Violan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3202', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_P[FairyChallengeAllClear(Npc_Beats)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3203', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_BT_F[FairyChallengeAllClear(Npc_Fei)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3204', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_H[FairyChallengeAllClear(Npc_Euphol)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3205', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_00[FairyChallengeAllClear(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3206', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Orchestra_M_00[FairyChallengeAllClear(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra01:Talk3207', 'IsNotOpenIfSkipedMostRecent': False})
}

void FairyChallengePlayerLook() {
    Npc_Orchestra_M_00[FairyChallengePlayerLook(Npc_Orchestra_M_00)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-0.800000011920929, 3.5, 6.28000020980835], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 0, 'PosVector': [1.7000000476837158, 0.27000001072883606, 21.90999984741211], 'TargetFovy': 19.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_W_00[FairyChallengePlayerLook(Npc_Orchestra_W_00)].EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Orchestra_W_00[FairyChallengePlayerLook(Npc_Orchestra_W_00)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {
            Npc_Orchestra_M_P[FairyChallengePlayerLook(Npc_Orchestra_M_P)].EventWait({'Frames': 26, 'IsWaitEnd': True})
            Npc_Orchestra_M_P[FairyChallengePlayerLook(Npc_Orchestra_M_P)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
            Npc_Orchestra_BT_F[FairyChallengePlayerLook(Npc_Orchestra_BT_F)].EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Orchestra_BT_F[FairyChallengePlayerLook(Npc_Orchestra_BT_F)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            Npc_Orchestra_M_H[FairyChallengePlayerLook(Npc_Orchestra_M_H)].EventWait({'Frames': 36, 'IsWaitEnd': True})
            Npc_Orchestra_M_H[FairyChallengePlayerLook(Npc_Orchestra_M_H)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }

}

void FinaleEvent_RiverSide() {
    Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0031', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0035', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 0, 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'Fei_ActorName', 'InstanceName': 'Fei_InstanceName', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra01:Talk0032', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Orchestra_M_00_FairyCotera', 'InstanceName': 'Fairy3', 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Orchestra_M_00_FairyCotera', 'InstanceName': 'Fairy3', 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventWait({'IsWaitEnd': True, 'Frames': 12})
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Orchestra_M_00_FairyCotera', 'InstanceName': 'Fairy3', 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Orchestra_M_00_FairyCotera', 'InstanceName': 'Fairy3', 'ResetArriveTransformFixed': False})
    }

    Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_W_00[FinaleEvent_RiverSide(Npc_Violan)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_BT_F[FinaleEvent_RiverSide(Npc_Fei)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventWait({'IsWaitEnd': True, 'Frames': 12})
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_P[FinaleEvent_RiverSide(Npc_Beats)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_H[FinaleEvent_RiverSide(Npc_Euphol)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra_AllMemberIsThankyouTalk', 'Index': -1, 'Value': True})
    Npc_EventStarter[FinaleEvent_RiverSide(Npc_ActorName)].EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void SubOrchestraClearedCheck_RiverSide() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra_AllMember'}) {

        fork {
            Npc_Orchestra_W_00[SubOrchestraClearedCheck_RiverSide(Npc_Violan)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Orchestra_W_00[SubOrchestraClearedCheck_RiverSide(Npc_Violan)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
            Npc_Orchestra_W_00[SubOrchestraClearedCheck_RiverSide(Npc_Violan)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        } {
            Npc_Orchestra_BT_F[SubOrchestraClearedCheck_RiverSide(Npc_Fei)].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_Orchestra_BT_F[SubOrchestraClearedCheck_RiverSide(Npc_Fei)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Orchestra_BT_F[SubOrchestraClearedCheck_RiverSide(Npc_Fei)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
            Npc_Orchestra_BT_F[SubOrchestraClearedCheck_RiverSide(Npc_Fei)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        } {
            Npc_Orchestra_M_P[SubOrchestraClearedCheck_RiverSide(Npc_Beats)].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Orchestra_M_P[SubOrchestraClearedCheck_RiverSide(Npc_Beats)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Orchestra_M_P[SubOrchestraClearedCheck_RiverSide(Npc_Beats)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
            Npc_Orchestra_M_P[SubOrchestraClearedCheck_RiverSide(Npc_Beats)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        } {
            Npc_Orchestra_M_H[SubOrchestraClearedCheck_RiverSide(Npc_Euphol)].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Orchestra_M_H[SubOrchestraClearedCheck_RiverSide(Npc_Euphol)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Orchestra_M_H[SubOrchestraClearedCheck_RiverSide(Npc_Euphol)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
            Npc_Orchestra_M_H[SubOrchestraClearedCheck_RiverSide(Npc_Euphol)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        }

    }
    goto Event57
}
