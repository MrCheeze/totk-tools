-------- EventFlow: SageOfZora_Ready_Yonas --------

Actor: Npc_Zora033
entrypoint: None()
actions: ['EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EventMemberCreateMethod': 4, 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Npc_ZoraFencer[StartChallengeFencer]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerForceSetRecentTalkFlag', 'EventDisableRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant001[FinishHifumi]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant002[FinishImu]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora002[CleanStatue_IsComp_00]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 4, 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Npc_Zora014[CleanStatue_IsComp]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Npc_Zora006_Cleaning[CleanStatue_IsComp]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 4, 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Npc_Zora028[CleanStatue_IsComp]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': True, 'IsBindNearestActor': False}

Actor: Npc_Zora027[CleanStatue_IsComp]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataEnum', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_ZoraFencer_StartChallengeFencer_Talk() {
    Event7:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_StatueSlimeCleaned', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CleanStatue', 'Value': 'Ready', 'Index': -1}) {
            EventSystemActor.EventTransition({'EventName': 'Dm_ZO_0048', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        }
        EventSystemActor.EventTransition({'EventName': 'Dm_ZO_0003', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Zora033', 'InstanceName': '', 'IsWaitEnd': True})
        Npc_Zora033.EventTriggerForceSetRecentTalkFlag({'value': False})

        call WarpAnchor_AfterCleanedStatue()

        Npc_ZoraFencer[StartChallengeFencer].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_CleanStatue', 'Value': 'Ready', 'Index': -1}) {
        EventSystemActor.EventTransition({'EventName': 'Dm_ZO_0048', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'CleanStatue', 'StepName': 'CleanUp', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        Npc_ZoraFencer[StartChallengeFencer].EventDisableRecentTalkFlag({'IsWaitEnd': True})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerForceSetRecentTalkFlag({'value': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    } else {

        call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_ZoraFencer", sub_name="StartChallengeFencer"), 'Actor2': ActorIdentifier(name="Npc_Zora_Attendant001", sub_name="FinishHifumi"), 'Actor3': ActorIdentifier(name="Npc_Zora_Attendant002", sub_name="FinishImu"), 'Arg_Turn': 2, 'Spearker1ActorName': 'Npc_ZoraFencer', 'Spearker1InstanceName': 'StartChallengeFencer', 'Spearker2ActorName': 'Npc_Zora_Attendant001', 'Spearker2InstanceName': 'FinishHifumi', 'Spearker3ActorName': 'Npc_Zora_Attendant002', 'Spearker3InstanceName': 'FinishImu'})

        Npc_Zora_Attendant001[FinishHifumi].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_ZoraFencer[StartChallengeFencer].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Zora_Attendant002[FinishImu].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfZora:talk0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Attendant001[FinishHifumi].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfZora:talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ASName': '', 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfZora:talk0032', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Attendant002[FinishImu].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_Attendant001[FinishHifumi].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_ZoraFencer[StartChallengeFencer].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void WarpAnchor_AfterCleanedStatue() {

    fork {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_BaseCamp_Zora002', 'InstanceName': 'CleanStatue_IsComp_00', 'IsWaitEnd': True})
        Npc_BaseCamp_Zora002[CleanStatue_IsComp_00].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Zora014', 'InstanceName': 'CleanStatue_IsComp', 'IsWaitEnd': True})
        Npc_Zora014[CleanStatue_IsComp].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Zora006_Cleaning', 'InstanceName': 'CleanStatue_IsComp', 'IsWaitEnd': True})
        Npc_Zora006_Cleaning[CleanStatue_IsComp].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Zora028', 'InstanceName': 'CleanStatue_IsComp', 'IsWaitEnd': True})
        Npc_Zora028[CleanStatue_IsComp].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Zora027', 'IsWaitEnd': True, 'InstanceName': 'CleanStatue_IsComp'})
        Npc_Zora027[CleanStatue_IsComp].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

}

void Ready_Npc_Zora_Attendant001_FinishHifumi_Talk() {
    goto Event7
}

void Ready_Npc_Zora_Attendant002_FinishImu_Talk() {
    goto Event7
}

void SageOfZora_Ready_NearActorsTalk() {
    goto Event7
}
