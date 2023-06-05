-------- EventFlow: TheStrongestWeapon --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryEquipWeaponAttachmentActor', 'EventQueryIsEquipentAttachmentExist', 'EventQueryEquipWeaponSlotType', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTriggerForceSetRecentTalkFlag', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Attacked_005_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 6]:
            Event11:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/TheStrongestWeapon:Near_01', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3, 7, 8]:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/TheStrongestWeapon:Near_03', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        goto Event11
    }
}

void Ready_Npc_Attacked_005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 6]:
            Event62:

            call CheckWeapon()

            if !Player.EventQueryIsEquipentAttachmentExist({'EquipmentSlot': 0}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk00', 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event166:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk05', 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                Npc_EventStarter.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'TheStrongestWeapon', 'StepName': 'Search', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk01', 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event166
            }
          case [2, 3, 7, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk_0022', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event62
    }
}

void Search_Npc_Attacked_005_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 6]:
            Event80:

            call Baloon_WeaponCheck()

            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/TheStrongestWeapon:Near_01', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/TheStrongestWeapon:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [2, 3, 7, 8]:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/TheStrongestWeapon:Near_03', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        goto Event80
    }
}

void Search_Npc_Attacked_005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 6]:
            Event84:

            call CheckWeapon()

            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 17, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 22, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event90:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk13', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 17, 'ChoiceLabel4': 14, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event159:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Appearance', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk33', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Appearance', 'Index': -1, 'Value': True})
                    }
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk16', 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call TalkSelect_Appearance()

                  case 1:
                    Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Habitat', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk33', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Habitat', 'Index': -1, 'Value': True})
                    }
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call TalkSelect_Habitat()

                  case 2:
                    Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Strategy', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk33', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Strategy', 'Index': -1, 'Value': True})
                    }
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call TalkSelect_Strategy()

                  case 3:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 3, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Appearance', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Habitat', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_TalkSelect_Strategy', 'Value': False, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk12', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event90
            }
          case [2, 3, 7, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk_0022', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event84
    }
}

void CheckWeapon() {
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_151', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': True, 'Index': -1})
        Event27:

        call CheckTalk()

        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 3})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SearchAndGetWeapon()

    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_218', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': False, 'Index': -1})
        goto Event27
    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_150', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': True, 'Index': -1})
        Event33:

        call CheckTalk()

        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 2})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SearchAndGetWeapon()

    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_217', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': False, 'Index': -1})
        goto Event33
    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_149', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': True, 'Index': -1})
        Event34:

        call CheckTalk()

        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SearchAndGetWeapon()

    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_216', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': False, 'Index': -1})
        goto Event34
    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_148', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': True, 'Index': -1})
        Event36:

        call CheckTalk()

        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 0})

        call SearchAndGetWeapon()

    } else
    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_215', 'EquipmentSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Value': False, 'Index': -1})
        goto Event36
    }
}

void SearchAndGetWeapon() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'StrongestWeapon_WeaponType', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 2}) {
      case 0:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 1}) {
          case 0:
            if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'StrongestWeapon_TypeLynel', 'Value': 0}) in [0, 1, 2] {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                Event37:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTriggerForceSetRecentTalkFlag({'value': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'TheStrongestWeapon', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
          case [1, 2]:

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

            goto Event37
        }
      case [1, 2]:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

        goto Event37
    }
}

void Baloon_WeaponCheck() {
    if Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_151', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_218', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_150', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_217', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_149', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_216', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_148', 'EquipmentSlot': 0})
    && Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Item_Enemy_215', 'EquipmentSlot': 0}) {
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void CheckTalk() {
    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TheStroingestWeapon_HaveTalked_ShowWeapon'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk21', 'ChoiceNumber': 2, 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TheStrongestWeapon_RidingTalk', 'Index': -1}) in [0, 1] {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk36', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TheStrongestWeapon_RidingTalk', 'Index': -1, 'Value': True})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else
        switch Player.EventQueryEquipWeaponSlotType() {
          case 1:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowSword', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Event97:
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk24', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowLSword', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            goto Event97
          case 3:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowSpear', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            goto Event97
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk22', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TheStroingestWeapon_HaveTalked_ShowWeapon'})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void TalkSelect_Appearance() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk20', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 17, 'ChoiceLabel4': 22, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event159
}

void TalkSelect_Habitat() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 17, 'ChoiceLabel4': 22, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk35', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event159
}

void TalkSelect_Strategy() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 17, 'ChoiceLabel4': 22, 'MessageId': 'EventFlowMsg/TheStrongestWeapon:Talk34', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event159
}
