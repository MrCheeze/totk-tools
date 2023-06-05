-------- EventFlow: Npc_HighMountain033 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain033
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event6:

    call Npc_HighMountain031.NearActorsTalk_genko()

}

void rito_Npc_HighMountain009_hearts_AfterTalk_Talk() {

    call Genkos_Kitchen.JoinNear()

    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genkos_Kitchen_Thank'}) {
        switch Npc_HighMountain033.EventQueryAIScheduleCheckActorAction14() {
          case 0:

            call Genko_CookMove()

          case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
            Event5:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_TouchSecretStone_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Genko_TalkAbout_RitoClear', 'Index': -1}) {
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case 0:
                        Npc_HighMountain033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_TalkAbout_RitoClear', 'Value': False})
                        Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk10_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})

                        call ReserchCooking_Select()

                      case [1, 2, 3, 4, 5, 6, 7, 8]:
                        Event33:
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_TalkAbout_RitoClear', 'Value': False})

                        call ReserchCooking()

                    }
                } else {
                    goto Event33
                }
            } else
            if Npc_HighMountain033.EventQueryIsOnRecentTalkFlag() {
                Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk24_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_HighMountain033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 10:

            call Genko_SleepMove()

          case 11:
            Event21:

            call Sleepy()

        }
    } else
    switch Npc_HighMountain033.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        if !Npc_HighMountain033.EventQueryIsOnRecentTalkFlag() {
            Npc_HighMountain033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk08', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Genkos_Kitchen_Thank'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Genkos_Kitchen_Thank'})
            goto Event5
        }
      case 11:
        goto Event21
    }
}

void rito_Npc_HighMountain009_hearts_AfterTalk_Near() {
    Event9:
    switch Npc_HighMountain033.EventQueryAIScheduleCheckActorAction14() {
      case 0:

        call Genko_CookMoveBalloon()

      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_TouchSecretStone_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Genko_TalkAbout_RitoClear', 'Index': -1}) {
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case 0:
                    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near30', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                  case [1, 2, 3, 4, 5, 6, 7, 8]:
                    Event29:
                    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near50', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else {
                goto Event29
            }
        } else {
            Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near29', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 10:

        call Genko_SleepMoveBalloon()

      case 11:

        call SleepyBalloon()

    }
}

void Sleepy() {
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Genko_SleepMove() {
    Npc_HighMountain033.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Genko_CookMove() {
    Npc_HighMountain033.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk29', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Genko_SleepMoveBalloon() {
    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near31', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Genko_CookMoveBalloon() {
    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near33', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SleepyBalloon() {
    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain033:Near28', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Near() {
    Event12:
    Npc_HighMountain033.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain031:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void ReserchCooking_Select() {
    Event50:
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_CookingResearchNo'}) {

            call CookingResearch2()

        } else {

            call CookingResearch1()

        }
    } else {
        Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk58', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReserchCooking() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch1'}) {
        if !Npc_HighMountain033.EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch_ThisCreate'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_CookingResearchNo'}) {

                    call CookingResearch2_Replay()

                } else {

                    call CookingResearch1_Replay()

                }
            } else
            Event49:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch2'}) {
                Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk52', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Genko_CookingResearchNo'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_CookingResearchNo', 'Value': False})

                        call CookingResearch1()

                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Genko_CookingResearchNo'})

                        call CookingResearch2()

                    }
                } else {
                    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk58', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Genko_CookingResearchNo'})
                Event31:
                Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk51', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event50
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch_ThisCreate', 'Value': False})
            goto Event49
        }
    } else {
        goto Event31
    }
}

void CookingResearch1() {
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk53', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk54', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Event56:
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk55', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk57', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch1', 'Value': True})
    Event61:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Genko_HeardCookingResearch_ThisCreate'})
}

void CookingResearch2() {
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk53', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Event58:
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk56', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain033.EventTalk({'MessageId': 'EventFlowMsg/Npc_HighMountain033:Talk57', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Genko_HeardCookingResearch2', 'Value': True})
    goto Event61
}

void CookingResearch1_Replay() {
    goto Event56
}

void CookingResearch2_Replay() {
    goto Event58
}

void Genko_Distant_Near() {
    goto Event9
}

void Genko_Distant_Talk() {
    goto Event0
}

void NearActorsNear() {
    goto Event12
}

void NearActorsTalk() {
    goto Event6
}
