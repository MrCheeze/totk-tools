-------- EventFlow: Npc_SouthHateru007 --------

Actor: Npc_SouthHateru007
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventPlayAS', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: ['EventQueryRandomChoice8', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWorldGetLunarAge', 'EventQueryWeather', 'EventQueryCheckDuringBloodyMoon', 'EventQueryCheckTime', 'EventQueryIsBloodyMoonDay', 'EventQueryTimeDivision', 'EventQueryIsAfterBloodyMoonDay']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent', 'EventQueryIsPouchContentForCooking']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_InCageAgain'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk26', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call BloodyMoonCheck()


        call CheckGameData()


        call SetGreetingTalk()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hino_BloodyMoon', 'Index': -1}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_SouthHateru007.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'EndDialogOption': 3, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 3}) {
                Npc_SouthHateru007.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

                call Gift_Bloody()

                Event45:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hino_BloodyMoon', 'Index': -1}) {

                    call BloodyMoonTalk()

                } else {

                    call Moon()

                    if !Npc_EventStarter.EventQueryHaveTalked() {
                        Event39:
                        switch GameSystemActor.EventQueryRandomChoice8() {
                          case 0:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event21:
                            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue'})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon_After', 'Value': False, 'Index': -1})

                            call RescueCount()

                            EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                          case 1:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event21
                          case 2:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event21
                          case 3:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event21
                          case [4, 5, 6, 7]:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event21
                        }
                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event21
                    }
                }
            } else {
                Event31:

                call Gift()

                goto Event45
            }
        } else
        if !Npc_EventStarter.EventQueryHaveTalked()
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hino_FirstRescue'}) {
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_EnemyBase_TalkGreetingNo'}) {
              case [0, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                Event283:
                switch GameSystemActor.EventQueryRandomChoice4() {
                  case 0:
                    Event12:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event31
                  case 1:
                    Event34:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event31
                  case 2:
                    Event33:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event31
                  case 3:
                    Event3:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event31
                }
              case 1:
                goto Event12
              case 2:
                goto Event34
              case 3:
                goto Event33
              case 4:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Defeat_Boss04'}) {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event31
                } else {

                    call NoDefeatBoss4()

                }
              case 5:
                goto Event3
            }
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk01', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !EventWorldManagerController.EventQueryIsBloodyMoonDay() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_FirstRescue', 'Index': -1, 'Value': True})
            goto Event31
        }
    }
}

void Near() {
    if Npc_SouthHateru007.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_SouthHateru007.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        Npc_SouthHateru007.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthHateru007:Near', 'DisplayFrame': 30, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Near00() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hino_FirstRescue'}) {
        if !EventWorldManagerController.EventQueryCheckDuringBloodyMoon() {
            if !EventWorldManagerController.EventQueryCheckTime({'Hour': 23, 'Minute': 30, 'CompareOparator': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Hour': 23, 'CompareOparator': 3, 'Minute': 45}) {
                    Event279:
                    Npc_SouthHateru007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthHateru007:BloodyNear_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_SouthHateru007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthHateru007:BloodyNear_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 4, 'Hour': 0, 'Minute': 5}) {
                goto Event279
            } else {
                Event280:
                Npc_SouthHateru007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthHateru007:Near00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        } else {
            goto Event280
        }
    } else {
        Npc_SouthHateru007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthHateru007:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Gift() {
    if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {
        if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 2}) {
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 3}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event174:
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:

                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Mushroom_E', 'MaterialActorName2': 'Item_Ore_H'})


                    call Give2ndGift()


                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Mushroom_D', 'MaterialActorName2': 'Item_FishGet_A'})


                    call Give3rdGift()


                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Animal_Insect_M', 'MaterialActorName2': 'Item_Enemy_77'})

                  case 1:

                    call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName1': 'Item_FishGet_A'})


                    call Give2ndGift()


                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Meat_01', 'MaterialActorName2': 'Item_Mushroom_A'})


                    call Give3rdGift()


                    call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Enemy_77', 'MaterialActorName1': 'Animal_Insect_B'})

                  case 2:

                    call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Ore_H', 'MaterialActorName1': 'Item_Meat_01'})


                    call Give2ndGift()


                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_FishGet_X', 'MaterialActorName2': 'Item_Meat_01'})


                    call Give3rdGift()


                    call GetPouchContent.GetCookResult1({'MaterialActorName1': 'Animal_Insect_F'})

                }
            } else {

                call GiftDish2()

            }
        } else {

            call GiftDish1()

        }
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk20', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

    }
}

void Complete() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_A'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Complete'})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk22', 'IsNotOpenIfSkipedMostRecent': False})
        Event101:

        call Moon()


        call ByeTalk()

    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk18', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Complete'})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

        goto Event101
    }
}

void CheckGameData() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Complete'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_01'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Clear_01'})

            call Check_EnemyBase02()

            Event36:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Clear_01', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Clear_02', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Clear_03', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Clear_04', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Clear_05', 'Index': -1}) {

                call Complete()

            }
        } else
        Event62:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_02'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Clear_02'})

            call Check_EnemyBase03()

            goto Event36
        } else
        Event63:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_03'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Clear_03'})

            call Check_EnemyBase04()

            goto Event36
        } else
        Event64:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_04'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Clear_04'})

            call Check_EnemyBase05()

            goto Event36
        } else
        Event65:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_05'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Clear_05'})
            goto Event36
        }
    }
}

void Moon() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hino_BloodyMoon_After'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_After', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon_After', 'Value': False, 'Index': -1})
        } else
        if !EventWorldManagerController.EventQueryCheckDuringBloodyMoon()
        && !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 22}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !EventWorldManagerController.EventQueryIsBloodyMoonDay()
        && !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_Before', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        switch EventWorldManagerController.EventQueryWorldGetLunarAge() {
          case 0:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    Event50:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_Full', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event51:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event50
            }
          case 1:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event51
                } else {
                    Event52:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event51
            }
          case 2:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event52
                } else {
                    Event53:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event52
            }
          case 3:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event53
                } else {
                    Event54:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event53
            }
          case 4:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event54
                } else {
                    Event55:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event54
            }
          case 5:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event55
                } else {
                    Event56:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event55
            }
          case 6:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event56
                } else {
                    Event57:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event56
            }
          case 7:
            if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 3}) {
                if !EventWorldManagerController.EventQueryCheckTime({'Minute': 0, 'CompareOparator': 3, 'Hour': 12}) {
                    goto Event57
                } else {
                    goto Event50
                }
            } else {
                goto Event57
            }
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_Rain_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [5, 6, 7]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Moon_Rain_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void ByeTalk() {
    goto Event39
}

void BloodyMoonTalk() {
    Npc_SouthHateru007.EventPlayAS({'ASName': 'Act_Tired_A', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Tired_A', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event93:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue'})

        call RescueCount()

        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
      case 1:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event93
      case 2:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event93
      case 3:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:BloodyTalk_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event93
    }
}

void BloodyMoonCheck() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon_After', 'Value': False, 'Index': -1})
    if !EventWorldManagerController.EventQueryCheckDuringBloodyMoon() {
        if !EventWorldManagerController.EventQueryCheckTime({'Hour': 23, 'Minute': 30, 'CompareOparator': 3}) {
            Event267:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon', 'Index': -1, 'Value': True})
        } else
        if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 4, 'Hour': 0, 'Minute': 5}) {
            goto Event267
        } else
        Event269:
        if !EventWorldManagerController.EventQueryIsAfterBloodyMoonDay()
        && !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 4, 'Minute': 0, 'Hour': 3}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hino_BloodyMoon_After', 'Index': -1, 'Value': True})
        }
    } else
    goto Event269
}

void RescueCount() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue01', 'Index': -1}) {
            Event85:

            call Check02()

            Event49:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Rescue', 'Value': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue01'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 1})
            goto Event85
        }
    } else
    Event156:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_02'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue02', 'Index': -1}) {
            Event112:

            call Check03()

            goto Event49
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue02'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 2})
            goto Event112
        }
    } else
    Event157:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_03'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue03', 'Index': -1}) {
            Event145:

            call Check04()

            goto Event49
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue03'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 3})
            goto Event145
        }
    } else
    Event158:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_04'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue04', 'Index': -1}) {
            Event153:

            call Check05()

            goto Event49
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue04'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 4})
            goto Event153
        }
    } else
    Event159:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_05'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue05', 'Index': -1}) {
            goto Event49
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_EnemyBase_Rescue05'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 5})
            goto Event49
        }
    } else {
        goto Event49
    }
}

void Check02() {
    goto Event156
}

void Check03() {
    goto Event157
}

void Check04() {
    goto Event158
}

void Check05() {
    goto Event159
}

void Check_EnemyBase02() {
    goto Event62
}

void Check_EnemyBase03() {
    goto Event63
}

void Check_EnemyBase04() {
    goto Event64
}

void Check_EnemyBase05() {
    goto Event65
}

void GiftDish2() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Mushroom_D', 'MaterialActorName2': 'Item_FishGet_A'})


        call Give2ndGift()


        call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Animal_Insect_M', 'MaterialActorName2': 'Item_Enemy_77'})

        Event220:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk25', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

      case 1:

        call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Meat_01', 'MaterialActorName2': 'Item_Mushroom_A'})


        call Give2ndGift()


        call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Enemy_77', 'MaterialActorName1': 'Animal_Insect_B'})

        goto Event220
      case 2:

        call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_FishGet_X', 'MaterialActorName2': 'Item_Meat_01'})


        call Give2ndGift()


        call GetPouchContent.GetCookResult1({'MaterialActorName1': 'Animal_Insect_F'})

        goto Event220
    }
}

void GiftDish1() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Animal_Insect_M', 'MaterialActorName2': 'Item_Enemy_77'})

        Event207:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk25', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

      case 1:

        call GetPouchContent.GetCookResult2({'MaterialActorName2': 'Item_Enemy_77', 'MaterialActorName1': 'Animal_Insect_B'})

        goto Event207
      case 2:

        call GetPouchContent.GetCookResult1({'MaterialActorName1': 'Animal_Insect_F'})

        goto Event207
    }
}

void Give2ndGift() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk23', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk23_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Give3rdGift() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk24', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthHateru007:Talk24_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Gift_Bloody() {
    goto Event174
}

void SetGreetingTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue01', 'Index': -1}) {
            Event28:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_02'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue02', 'Index': -1}) {
                    Event29:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_03'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue03', 'Index': -1}) {
                            Event30:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_04'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue04', 'Index': -1}) {
                                    Event234:
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_EnemyBase_Encount_05'})
                                    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_EnemyBase_Rescue05', 'Index': -1}) {
                                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 5})
                                    }
                                } else {
                                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 4})
                                }
                            } else
                            goto Event234
                        } else {
                            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 3})
                        }
                    } else
                    goto Event30
                } else {
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 2})
                }
            } else
            goto Event29
        } else {
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_EnemyBase_TalkGreetingNo', 'Value': 1})
        }
    } else
    goto Event28
}

void NoDefeatBoss4() {
    goto Event283
}
