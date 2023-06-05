-------- EventFlow: Npc_ZoraFencer --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventDisableRecentTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_ZoraFencer[StartChallengeFencer]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerForceSetRecentTalkFlag']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryAIScheduleCheckActorAction14_2', 'EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch', 'EventQueryIsPouchContent', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_ZoraB001[ClearShido]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Npc_ZoraFencer_ScheduleAfterMiniChallenge_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if Npc_ZoraFencer[StartChallengeFencer].EventQueryVolatileGeneralPurposeFlagOn() {
            switch Npc_ZoraFencer[StartChallengeFencer].EventQueryAIScheduleCheckActorAction14() {
              case [2, 3]:
                Npc_ZoraFencer[StartChallengeFencer].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_ZoraFencer:Near_09', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [8, 9]:
                Npc_ZoraFencer[StartChallengeFencer].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_ZoraFencer:Near_07', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if Npc_ZoraFencer[StartChallengeFencer].EventQueryIsIndoor() {
            Npc_ZoraFencer[StartChallengeFencer].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_ZoraFencer:Near_11', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Npc_ZoraFencer_ScheduleAfterMiniChallenge_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_ZoraFencer[StartChallengeFencer].EventQueryVolatileGeneralPurposeFlagOn() {

        call Check_Shido()

        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CreateArmor:CreateArmor_48', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch Npc_ZoraFencer[StartChallengeFencer].EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 4, 5, 6, 7, 10, 11, 12, 13]:

        call Check_Shido()

        Event159:
        if !Npc_ZoraFencer[StartChallengeFencer].EventQueryIsOnRecentTalkFlag() {
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3]:
        if !Npc_ZoraFencer[StartChallengeFencer].EventQueryIsOnRecentTalkFlag() {
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [8, 9]:
        goto Event159
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'CreateArmor_IsCompleted_Exp'}) {

        call CreateArmor.FirstTalkAfterMiniChallenge_Near()

    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_RepairArmor', 'Value': 'Ready', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'MessageID': 'EventFlowMsg/SageOfZora:Yona_24', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_RepairArmor', 'Value': 'SubmitMaterial', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_SubmitArmorMaterial', 'Index': -1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_ZoraFencer:Near_10', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_FishGet_AA', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'MessageID': 'EventFlowMsg/SageOfZora:Yona_25', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/SageOfZora:Yona_25', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'CreateArmor_IsCompleted_Exp'}) {

        call CreateArmor.FirstTalkAfterMiniChallenge()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'RepairArmor_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_SubmitArmorMaterial', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/SageOfZora:GoToLake_Yona_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/SageOfZora:GoToLake_Yona_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Armor_006_Upper', 'Num': 1}) {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfZora:Yona_28', 'IsNotOpenIfSkipedMostRecent': False})
                    Event382:

                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Armor_006_Upper', 'IsSuccess': True})

                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_24', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_CreateArmor_StartReady'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                    Npc_ZoraFencer[StartChallengeFencer].EventTriggerForceSetRecentTalkFlag({'value': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'RepairArmor', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                } else {
                    Event433:
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/SageOfZora:GoToLake_Yona_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'})
                Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_21', 'IsNotOpenIfSkipedMostRecent': False})
                if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Armor_006_Upper'}) {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_23', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event382
                } else {
                    goto Event433
                }
            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_FishGet_AA', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_26', 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event372:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call SageOfZora.RepairingArmor()

                    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                    Npc_ZoraFencer[StartChallengeFencer].EventTriggerForceSetRecentTalkFlag({'value': False})
                    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Armor_006_Upper'}) {
                        goto Event382
                    } else {
                        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/SageOfZora:GoToLake_Yona_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventTriggerRequestAutoSave()
                    }
                } else {
                    Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/SageOfZora:GoToLake_Yona_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'})
                Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_18', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event372
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_26', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'})
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'}) {
        Event170:
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call OnlyTerraceYonaLightOn()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'RepairArmor', 'StepName': 'SubmitMaterial', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_FishGet_AA', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            GameSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
            Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 10, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_20', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event372
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_RepairAromorHearSoftTalk'})
        Npc_ZoraFencer[StartChallengeFencer].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 8, 'ChoiceLabel4': 10, 'ChoiceLabel1': 12, 'IsAnonymous': False, 'ChoiceLabel3': 9, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_ZoraFencer:Comment_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event170
    }
}

void OnlyTerraceYonaLightOn() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_VillageYonaLightDelete', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_ParkYonaLightDelete', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_TerraceYonaLightDelete', 'Value': False})
}

void Check_Shido() {
    if Npc_ZoraFencer[StartChallengeFencer].EventQueryAIScheduleCheckActorAction14_2() == 3
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsGatherSages'}) {
        Npc_ZoraB001[ClearShido].EventTriggerParticipateEvent()
    }
}
