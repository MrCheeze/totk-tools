-------- EventFlow: Npc_LakeSideHatago004 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag']
queries: ['EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_LakeSideHatago004
entrypoint: None()
actions: []
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedLakeSide'})

}

void UmayadoMasterInside_Talk() {

    call InSide({'HorseInnBoolean': 'HorseInn_ArrivedLakeSide'})

}

void OutSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {
        Event6:

        call HorseInnMaster.General_OutsideTalk()

        Event27:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAfterFirstTalk_Npc_LakeSideHatago004', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAfterFirstTalk_DefeatBZ_Npc_LakeSideHatago004', 'Index': -1}) {
                    Event30:
                    if !Npc_LakeSideHatago004.EventQueryAvoidDuplicationRandomChoice2() {

                        call Npc_HyruleWestHatago005.InsertBluePrint()

                        Event37:
                        if !Npc_LakeSideHatago004.EventQueryIsOnRecentTalkFlag() {

                            call Npc_HyruleWestHatago005.IsByeTalk()

                        } else {
                            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk17', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1, 4, 5, 8]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event37
                      case [2, 3, 6, 7]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event37
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsAfterFirstTalk_DefeatBZ_Npc_LakeSideHatago004'})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                    call Npc_HyruleWestHatago005.IsAfter_ReturnBCAfterBlackZelda_Message()

                    goto Event30
                }
            } else
            if !Npc_LakeSideHatago004.EventQueryAvoidDuplicationRandomChoice2() {

                call Npc_HyruleWestHatago005.InsertBluePrint()

                Event38:
                if !Npc_LakeSideHatago004.EventQueryIsOnRecentTalkFlag() {

                    call Npc_HyruleWestHatago005.IsByeTalk()

                } else {
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk17', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1, 4, 5, 8]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event38
              case [2, 3, 6, 7]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event38
            }
        } else
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event28:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsAfterFirstTalk_Npc_LakeSideHatago004', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call Npc_HyruleWestHatago005.IsByeTalk()

          case [2, 3, 6, 7]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event28
        }
    } else {

        call FirstTalk()


        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

        goto Event6
    }
}

void InSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {
        Event13:

        call HorseInnMaster.General_InsideTalk()

        goto Event27
    } else {

        call FirstTalk()


        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

        goto Event13
    }
}

void FirstTalk() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void DoNot_ZonauMagic_WakkaCharm_LakeSide() {

    call Npc_HyruleWestHatago005.UmayadoMasterInteractSetting()

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 5, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Lakeside'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:DoNotWakka_02', 'IsNotOpenIfSkipedMostRecent': False})
            Event25:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:DoNotWakka_01', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Lakeside'})
            goto Event25
        }
      case 6:

        call Npc_HyruleWestHatago005.Attacked_WakkaCharm_CommonFlow({'ActorName': ActorIdentifier(name="Npc_LakeSideHatago004"), 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:BurnedWakka_01'})

      case 8:

        call Npc_HyruleWestHatago005.Burned_WakkaCharm_CommonFlow({'ActorName': ActorIdentifier(name="Npc_LakeSideHatago004"), 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago004:BurnedWakka_01'})

    }
}
