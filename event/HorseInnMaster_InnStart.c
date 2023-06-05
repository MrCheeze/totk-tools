-------- EventFlow: HorseInnMaster_InnStart --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventCloseRupeeDisplay', 'EventTriggerSetDisplayTime', 'EventTriggerIncreaseRupee', 'EventTriggerSetShowStaminaGauge', 'EventOpenRupeeDisplay', 'EventTriggerSetDisplayHeartGauge', 'EventOpenCouponDisplay', 'EventCloseCouponDisplay']
queries: ['EventQueryHasRuppe', 'EventQueryTalkChoice4', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryOrderedBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HorseGodTextNPC[HorseGod]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void NotEnoughRupee() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHalfPrice'}) {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk21', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk03', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event29:
    GameSystemActor.EventTriggerSetDisplayTime({'IsDisplay': False})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02', 'Value': False})
}

void InnTalkEnd() {
    goto Event29
}

void HorseGodTalk() {
    EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 10})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_INNExtraHorseGod', 'IsWaitEnd': True, 'TimeoutFrame': 30})
    Event287:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MaronBed_Priority1st'}) {

        call WhereisMaron()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MaronBed_Priority2nd'}) {

        call GoToOrchestra()

    } else {

        call MaronBed_Priority3rd()

    }
}

void UMaster_Inn() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBed'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoiceTemp_MaronBedDescription', 'Value': False, 'Index': -1})
    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': True, 'IsDisplayAtLT': True})
    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': True, 'EventName': 2, 'IsDisplay': False})
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    GameSystemActor.EventTriggerSetDisplayTime({'IsDisplay': True})

    call UmayadoCheck()

    Event276:
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': 'ExcludeChoiceTemp_MaronBedDescription', 'ChoiceExcludeGameData2': 'ExcludeChoiceTemp_MaronBed'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHalfPrice'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 4, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk8060', 'ChoiceLabel2': 7005, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7016, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 4, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk8060', 'ChoiceLabel2': 7005, 'ChoiceLabel3': 7014, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Event52:
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_StableHostelAccommodationCoupon_A', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

                    call InnStart_Normal_HaveFreeTicket({'DisplayRupee': 10, 'DecrementRupee': -10})

                } else {

                    call InnStart_Normal({'DisplayRupee': 10, 'DecrementRupee': -10})

                }
              case 1:

                call InnStart_God({'DisplayRupee': 25, 'DecrementRupee': -25})

              case 2:

                call PhotospotChallengeCheck()

              case 3:

                call InnTalkEnd()

            }
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 4, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk8060', 'ChoiceLabel2': 7005, 'ChoiceLabel3': 7011, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                goto Event52
              case 1:

                call InnStart_God({'DisplayRupee': 25, 'DecrementRupee': -25})

              case 2:

                call GodBed_Description()

              case 3:

                call InnTalkEnd()

            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBed'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk27', 'ChoiceLabel3': 7016, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceNumber': 4, 'ChoiceLabel3': 7014, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk27', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event167:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Event184:
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_StableHostelAccommodationCoupon_A', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

                    call InnStart_Normal_HaveFreeTicket({'DisplayRupee': 20, 'DecrementRupee': -20})

                } else {

                    call InnStart_Normal({'DisplayRupee': 20, 'DecrementRupee': -20})

                }
              case 1:

                call InnStart_God({'DisplayRupee': 50, 'DecrementRupee': -50})

              case 2:

                call PhotospotChallengeCheck()

              case 3:

                call InnTalkEnd()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'}) {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7016, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceNumber': 4, 'ChoiceLabel3': 7014, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event167
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBed'}) {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceLabel3': 7011, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk27', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel4': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 7005, 'ChoiceLabel3': 7011, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        goto Event184
      case 1:

        call InnStart_God({'DisplayRupee': 50, 'DecrementRupee': -50})

      case 2:

        call GodBed_Description()

      case 3:

        call InnTalkEnd()

    }
}

void GodBed_Description_End() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9022', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event276
}

void InnStart_Normal() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 'DisplayRupee'}) {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk04', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event3:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Morning()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk08', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event324:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameSystemActor.EventCloseCouponDisplay({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

                Event7:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'isSuccessInnNormal'})

                call HorseInnMaster.PresentCheck()


                call InnStart_End()

            } else {
                goto Event7
            }
          case 1:
            GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Noon()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk09', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event324
          case 2:
            GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Night()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk10', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event324
          case 3:

            call ReturnChoice_FromNormalBed()

        }
    } else {

        call NotEnoughRupee()

    }
}

void InnStart_God() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHorseGodBed'}) {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 'DisplayRupee'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 4, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk22', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk07', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DmF_SY_SleepHotel.INN_Morning_HorseGod()

                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk11', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event126:
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})


                call HorseInnMaster.PresentCheck()


                call InnStart_End()

              case 1:
                GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk07', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DmF_SY_SleepHotel.INN_NoonExtra_HorseGod()

                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk12', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event126
              case 2:
                GameSystemActor.EventTriggerIncreaseRupee({'Value': 'DecrementRupee'})
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk07', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call DmF_SY_SleepHotel.INN_NightExtra_HorseGod()

                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk13', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event126
              case 3:

                call Return_Choice_BedType()

            }
        } else {

            call NotEnoughRupee()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBed', 'Value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9020', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Return_Choice_BedType()

    }
}

void InnStart_End() {
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventTriggerSetDisplayTime({'IsDisplay': False})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}

void GodBed_Description() {
    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9017', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoiceTemp_MaronBedDescription', 'Index': -1, 'Value': True})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHorseGodBed'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoiceTemp_MaronBed'})
    }

    call GodBed_Description_End()

}

void UmayadoCheck() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_01'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'PhotoSpot_Challenge_01', 'StepName': 'Step01', 'IgnoreShowedTarget': False}) {
                Event145:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_MaronBedDescription', 'Index': -1, 'Value': True})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_01', 'Value': 'Step02'}) {
            Event314:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_01_Talk02'})
            goto Event145
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_13'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_13', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_13', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_06'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_06', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_06', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_08'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_08', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_08', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_GerudoCanyonHatago001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_09'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_09', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_11'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_11', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_11', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_10'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_10', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_10', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_12'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_12', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_12', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_04'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_04', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_04', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_05'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_05', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_05', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_14'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_14', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_14', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_07'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_07', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_07', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Step01', 'GameDataName': 'Step_PhotoSpot_Challenge_03'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_03', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_PhotoSpot_Challenge_03', 'Value': 'Step02'}) {
            goto Event314
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_PhotoSpot_Challenge_02', 'Index': -1, 'Value': 'Step01'}) {
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_02', 'IgnoreShowedTarget': False}) {
                goto Event145
            }
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_PhotoSpot_Challenge_02', 'Index': -1, 'Value': 'Step02'}) {
            goto Event314
        }
    }
}

void PhotospotChallengeCheck() {
    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
    GameSystemActor.EventTriggerSetShowStaminaGauge({'EventName': 2, 'IsDisplay': False, 'IsDisplayEx': False})
    GameSystemActor.EventTriggerSetDisplayTime({'IsDisplay': False})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleWestHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'EventName': 'TalkDirectly', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourPlainHatago_004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_SouthHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HutagoHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_HutagoHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathEastHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_DeathMountainHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_HeightHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_LakeSideHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_LakesideHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TamourHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_EastHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_HyruleDepthHatago005', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_HyruleDepthHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_RiverSideHatago003', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_RiversideHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaHatago004', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_SnowfieldHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_TabantaBridgeHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_TabantaBridgeHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHatelHatago006', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_NorthHatelHatago'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_DeathWestHatago_002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'TalkDirectly_ForestHatago'})
    }
}

void InnStart_Normal_HaveFreeTicket() {
    GameSystemActor.EventOpenCouponDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'ChoiceLabel1': 7002, 'ChoiceLabel2': 7003, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk23', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'Actor': 'Item_StableHostelAccommodationCoupon_A', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Morning_HaveFreeTicket()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk08', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event325:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameSystemActor.EventCloseCouponDisplay({'IsWaitEnd': True})

            call InnStart_End()

          case 1:
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'Actor': 'Item_StableHostelAccommodationCoupon_A', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Noon_HaveFreeTicket()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk09', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event325
          case 2:
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'Actor': 'Item_StableHostelAccommodationCoupon_A', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk06', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_SleepHotel.INN_Night_HaveFreeTicket()

            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk10', 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event325
          case 3:
            GameSystemActor.EventCloseCouponDisplay({'IsWaitEnd': True})

            call ReturnChoice_FromNormalBed()

        }
    } else {
        GameSystemActor.EventCloseCouponDisplay({'IsWaitEnd': True})
        if !GameSystemActor.EventQueryHasRuppe({'Value': 'DisplayRupee'}) {

            call GotoNormalBed()

        } else {

            call NotEnoughRupee()

        }
    }
}

void GotoNormalBed() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHalfPrice'}) {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk28', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event3
}

void Return_Choice_BedType() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event276
}

void HorseGodFlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance01', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance02', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance03', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance04', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance05', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance06', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance07', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance08', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance09', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance10', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance11'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance12'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance13'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance14'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance15'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance16'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance17'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance18'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance19'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance20'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance21'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance22'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MaronBed_TipsGuidance23'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void HorseGodTalk2() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': True, 'Key': 'HorseInn_Maronbed_EnhancedFood'}) {
      case 0:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9037', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance11'})
      case 1:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9038', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance12'})
      case 2:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9040', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance13'})
      case 3:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9039', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance14'})
      case 4:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9044', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance15'})
      case 5:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9045', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance16'})
      case 6:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9046', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance17'})
      case 7:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9047', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance18'})
      case 8:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9048', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance19'})
      case 9:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9049', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance20'})
      case 10:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9050', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance21'})
      case 11:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9051', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance22'})
      case 12:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9052', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MaronBed_TipsGuidance23'})
      case 15:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance03', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call HorseGodTalk()

    }
}

void ReturnChoice_FromNormalBed() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoiceTemp_MaronBedDescription'}) {

            call InnTalkEnd()

        } else {

            call GodBed_Description_End()

        }
    } else {

        call Return_Choice_BedType()

    }
}

void WhereisMaron() {
    HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9018', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance01', 'Index': -1, 'Value': True})
}

void GoToOrchestra() {
    HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9021', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance02', 'Index': -1, 'Value': True})
}

void MaronBed_Priority3rd() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'Key': 'HorseInn_Maronbed', 'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': True}) {
      case [0, 1, 2, 10, 11, 12, 13]:

        call HorseGodTalk2()

      case 3:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9041', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance04', 'Index': -1, 'Value': True})
      case 4:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9042', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance05', 'Index': -1, 'Value': True})
      case 5:
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9043', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance06', 'Index': -1, 'Value': True})
      case 6:
        HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9028', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance07', 'Index': -1, 'Value': True})
      case 7:
        HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9031', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance08', 'Index': -1, 'Value': True})
      case 8:
        HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9035', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        HorseGodTextNPC[HorseGod].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9053', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance09', 'Index': -1, 'Value': True})
      case 9:
        HorseGodTextNPC[HorseGod].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9036', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MaronBed_TipsGuidance10', 'Index': -1, 'Value': True})
      case 15:

        call HorseGodFlagReset()

        goto Event287
    }
}
