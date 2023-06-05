-------- EventFlow: Npc_TamourPlainHatago_004 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag']
queries: ['EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_TamourPlainHatago_004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedMinakare'})

}

void UmayadoMasterInside_Talk() {

    call InSide({'HorseInnBoolean': 'HorseInn_ArrivedMinakare'})

}

void OutSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_OutsideTalk()

    Event3:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call Npc_HyruleWestHatago005.IsAfter_ReturnBCAfterBlackZelda_Message()


        call Npc_HyruleWestHatago005.IsByeTalk()

        Event8:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_004:Goodbye_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call Npc_HyruleWestHatago005.InsertBluePrint()


        call Npc_HyruleWestHatago005.IsByeTalk()

        goto Event8
    }
}

void InSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call Minigame()

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_InsideTalk()

    goto Event3
}

void DoNot_ZonauMagic_WakkaCharm() {

    call Npc_HyruleWestHatago005.UmayadoMasterInteractSetting()

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 5, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_NewSouthAkkal'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_004:DoNotWakka_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event23:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_004:DoNotWakka_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_NewSouthAkkal'})
            goto Event23
        }
      case 6:

        call Npc_HyruleWestHatago005.Attacked_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_004:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_TamourPlainHatago_004")})

      case 8:

        call Npc_HyruleWestHatago005.Burned_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_004:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_TamourPlainHatago_004")})

    }
}

void Minigame() {
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_Tribune10', 'Value': 'FirstOracle'}) {
        Event18:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_TabantaBridgeHatago006:10001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_Tribune10', 'Value': 'SecondOracle'}) {
        goto Event18
    }
}
