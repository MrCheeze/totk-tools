-------- EventFlow: Npc_FaronHatago_001 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryOwningObjectPlayerInterference', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_FaronHatago_001
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice2', 'EventQueryCheckIsWildHorseAssociated', 'EventQueryCheckIsOwnedHorseAssociated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedKougen'})

}

void UmayadoMasterInside_Talk() {

    call InSide({'HorseInnBoolean': 'HorseInn_ArrivedKougen'})

}

void OutSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_OutsideTalk()

    Event0:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call Npc_HyruleWestHatago005.IsAfter_ReturnBCAfterBlackZelda_Message()


        call Npc_HyruleWestHatago005.IsByeTalk()

        Event27:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GiantHorse_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GiantHorse_IsCompleted_Exp'}) {
                Event35:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsAfter_Ready_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsCompleted_Exp'})
                    && !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': 'GameRomHorse01L', 'IsRidingAny': False, 'Type': 0}) {
                        if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
                            Event29:
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_ZonauRemains_AppearsSkyIsland_Exp'}) {
                                Npc_FaronHatago_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_1010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_FaronHatago_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_1000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                        }
                    } else
                    goto Event29
                } else {
                    Event32:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Owned_Large01_Horse'}) {
                goto Event35
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AlreadyTalked_FirstMeetingTalk', 'Index': -1}) {
                goto Event35
            } else {
                Event5:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2002', 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 5.0, 'IsRidden': False}) {
                  case [0, 1, 2, 3, 4, 6, 7]:
                    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 5.0}) {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 10]:
                        Event38:
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_FaronHatago_001_Talk01', 'Index': -1, 'Value': True})
                      case 9:
                        Event49:
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event38
                    }
                  case 5:
                    goto Event49
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Owned_Large01_Horse'}) {
            goto Event35
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AlreadyTalked_FirstMeetingTalk', 'Index': -1}) {
            goto Event35
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsAfter_Ready_Exp'}) {
            goto Event5
        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            goto Event5
        } else {
            goto Event32
        }
    } else {

        call Npc_HyruleWestHatago005.InsertBluePrint()


        call Npc_HyruleWestHatago005.IsByeTalk()

        goto Event27
    }
}

void InSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_InsideTalk()

    goto Event0
}

void DoNot_ZonauMagic_WakkaCharm_Highland() {

    call Npc_HyruleWestHatago005.UmayadoMasterInteractSetting()

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 5, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Highland'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:DoNotWakka_02', 'IsNotOpenIfSkipedMostRecent': False})
            Event25:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:DoNotWakka_01', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Highland'})
            goto Event25
        }
      case 6:

        call Npc_HyruleWestHatago005.Attacked_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_FaronHatago_001")})

      case 8:

        call Npc_HyruleWestHatago005.Burned_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_FaronHatago_001")})

    }
}
