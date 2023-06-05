-------- EventFlow: Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Talked_First_Npc_TabanthaRoad_AncientAssistant'})
    if !Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventQueryHaveTalked() {
        if Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventQueryIsOnRecentTalkFlag() {
            Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTalk({'MessageId': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Talk_11', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event9:
        Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTalk({'MessageId': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTalk({'MessageId': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Talk_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event9
    }
}

void Near() {
    if !Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventQueryHaveTalked() {
        if Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventQueryIsOnRecentTalkFlag() {
            Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Near02'})
        }
    } else {
        Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_TabanthaRoad_AncientAssistant_SnowfieldHatago:Near01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}
