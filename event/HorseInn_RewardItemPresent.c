-------- EventFlow: HorseInn_RewardItemPresent --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSubGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerExpandOwnedHorseList', 'EventWait']
queries: ['EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[PointGift_For_You(Npc_EventStarter)]
entrypoint: PointGift_For_You(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[GetContinuousCheck(Npc_EventStarter)]
entrypoint: GetContinuousCheck(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[PointGift_GetProcess(Npc_EventStarter)]
entrypoint: PointGift_GetProcess(Npc_EventStarter)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Next_PointGift(Npc_EventStarter)]
entrypoint: Next_PointGift(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

void HorseInnPointGift_Check() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 3}) {
      case 0:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInn_NextRewardNeetPoint', 'Value': 'DecrementPoint', 'Index': -1})
      case 1:
        Event8:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 1})

        call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 5})

      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 5}) {
          case 0:
            goto Event8
          case 1:
            Event9:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 2})

            call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 7})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 7}) {
              case 0:
                goto Event9
              case 1:
                Event18:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 3})

                call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 10})

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 10}) {
                  case 0:
                    goto Event18
                  case 1:
                    Event19:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 4})

                    call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 13})

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 13}) {
                      case 0:
                        goto Event19
                      case 1:
                        Event22:
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 5})

                        call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 16})

                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 16}) {
                          case 0:
                            goto Event22
                          case 1:
                            Event23:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 6})

                            call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 20})

                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Value': 20, 'Index': -1, 'GameDataName': 'HorseInnMemberPoint'}) {
                              case 0:
                                goto Event23
                              case 1:
                                Event25:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 7})

                                call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 23})

                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 23}) {
                                  case 0:
                                    goto Event25
                                  case 1:
                                    Event28:
                                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 8})

                                    call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 26})

                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 26}) {
                                      case 0:
                                        goto Event28
                                      case 1:
                                        Event29:
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 9})

                                        call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 30})

                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 30}) {
                                          case 0:
                                            goto Event29
                                          case 1:
                                            Event31:
                                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 10})

                                            call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 35})

                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 35}) {
                                              case 0:
                                                goto Event31
                                              case 1:
                                                Event107:
                                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 11})

                                                call StatetoPresent({'DecrementPoint': 'DecrementPoint', 'NextRewardNeetPoint': 40})

                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'HorseInnMemberPoint', 'Value': 40}) {
                                                  case 0:
                                                    goto Event107
                                                  case [1, 2]:

                                                    call EndLoopPresents()

                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void PointGift_For_You() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
        Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0003', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Next_PointGift({'Npc_EventStarter': 'Npc_EventStarter'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isGetReward_HorseInn', 'Value': False, 'Index': -1})
    } else {

        call GetContinuousCheck({'Npc_EventStarter': 'Npc_EventStarter'})

        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 0}) {
          case 1:
            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1003', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseSaddle_07'})

            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HouseInn_GetUmayadoWagon', 'Index': -1, 'Value': True})
            Event132:

            call PointGift_GetProcess({'Npc_EventStarter': 'Npc_EventStarter'})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 1}) {
              case 1:
                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1019', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_09'})

                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1020', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInn_GetCloth'})
                goto Event132
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 2}) {
                  case 1:
                    Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1005', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetHorseGodBed', 'Index': -1, 'Value': True})
                    goto Event132
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 3}) {
                      case 1:
                        Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1022', 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventTriggerExpandOwnedHorseList()
                        goto Event132
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 4}) {
                          case 1:
                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1006', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseSaddle_01'})

                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1014', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseReins_01'})

                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetSaddleReins_01', 'Index': -1, 'Value': True})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ExcludeChoice_HorseSaddleReinsCustom'})
                            Event12:

                            call PointGift_GetProcess({'Npc_EventStarter': 'Npc_EventStarter'})

                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 5}) {
                              case 1:
                                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1007', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetMane3', 'Index': -1, 'Value': True})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ExcludeChoice_HorseManeCustom'})
                                goto Event12
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 6}) {
                                  case 1:
                                    Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1008', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventTriggerExpandOwnedHorseList()
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus01', 'Index': -1, 'Value': True})
                                    goto Event12
                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 7}) {
                                      case 1:
                                        Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1009', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseSaddle_03'})

                                        Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseReins_03'})

                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetSaddleReins_02', 'Index': -1, 'Value': True})
                                        Event34:

                                        call PointGift_GetProcess({'Npc_EventStarter': 'Npc_EventStarter'})

                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 8}) {
                                          case 1:
                                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseSaddle_05'})

                                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1016', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseReins_05'})

                                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetSaddleReins_03', 'Index': -1, 'Value': True})
                                            goto Event34
                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 9}) {
                                              case 1:
                                                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1010', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                GameSystemActor.EventTriggerExpandOwnedHorseList()
                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus02', 'Index': -1, 'Value': True})
                                                goto Event34
                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 10}) {
                                                  case 1:
                                                    Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1012', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    GameSystemActor.EventTriggerExpandOwnedHorseList()
                                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus03', 'Index': -1, 'Value': True})
                                                    goto Event34
                                                  case 2:
                                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1, 'Value': 11}) {
                                                      case 1:
                                                        Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1013', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_isTopMember', 'Index': -1, 'Value': True})
                                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_GetHalfPrice', 'Index': -1, 'Value': True})
                                                        goto Event34
                                                      case 2:
                                                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_NextGift_Carrot', 'Index': -1}) {
                                                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1017', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'Item_PlantGet_Q'}) {

                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Plant_Q_Bundle_B'})

                                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_NextGift_Carrot', 'Value': False, 'Index': -1})
                                                                goto Event34
                                                            } else {
                                                                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1023', 'IsNotOpenIfSkipedMostRecent': False})
                                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Index': -1, 'Value': True})
                                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isGetReward_HorseInn', 'Value': False, 'Index': -1})
                                                            }
                                                        } else {
                                                            Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1004', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 5, 'Actor': 'Item_StableHostelAccommodationCoupon_A'}) {

                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_StableHostelAccommodationCoupon_A_Bundle_A'})

                                                                Event142:
                                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_NextGift_Carrot', 'Index': -1, 'Value': True})
                                                                goto Event34
                                                            } else {
                                                                Npc_EventStarter[PointGift_For_You(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Explain1021', 'IsNotOpenIfSkipedMostRecent': False})

                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                                                                goto Event142
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void GetContinuousCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isGetReward_HorseInn', 'Index': -1}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter[GetContinuousCheck(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0005', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_EventStarter[GetContinuousCheck(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0006', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_EventStarter[GetContinuousCheck(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0007', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void PointGift_GetProcess() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'HorseInn_RewardItemPresentedCount', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isGetReward_HorseInn', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Value': False, 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call PointGift_For_You({'Npc_EventStarter': 'Npc_EventStarter'})

}

void EndLoopPresents() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 12}) {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 12})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
            Event108:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'HorseInn_NextRewardNeetPoint', 'Value': 45})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'HorseInn_NextRankNeetPoint', 'Value': 45})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Event35:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInnMemberPoint', 'GameDataA': 'HorseInn_NextRankNeetPoint', 'Operator': 2}) {
                GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'HorseInn_NextRewardNeetPoint', 'SrcGameDataName': 'HorseInn_NextRankNeetPoint', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
                GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'HorseInn_NextRewardNeetPoint', 'GameDataB': 'HorseInnMemberPoint'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            } else {
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Index': -1, 'Value': True})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UmayadoBook_NextGift_Carrot'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'UmayadoBook_NextGift_Carrot'})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'UmayadoBook_NextGift_Carrot'})
                }
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'HorseInn_NextRankNeetPoint', 'Value': 5})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'HorseInn_NextRankNeetPoint', 'DstGameDataName': 'HorseInn_NextRewardNeetPoint'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                call ReCheck()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event108
        }
      case 1:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
            goto Event35
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event35
        }
      case 2:
        goto Event35
    }
}

void ReCheck() {
    goto Event35
}

void Next_PointGift() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Value': 0, 'Index': -1}) {
      case 1:
        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0009', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event169:
        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Value': 1, 'Index': -1}) {
          case 1:
            Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event169
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Value': 2, 'Index': -1}) {
              case 1:
                Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event169
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 3}) {
                  case 1:
                    Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event169
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 4}) {
                      case 1:
                        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0012', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event169
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 5}) {
                          case 1:
                            Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0014', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event169
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 6}) {
                              case 1:
                                Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event169
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 7}) {
                                  case 1:
                                    Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0013', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event169
                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 8}) {
                                      case 1:
                                        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0017', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event169
                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 9}) {
                                          case 1:
                                            Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0016', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event169
                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 10}) {
                                              case 1:
                                                Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0019', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event169
                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'HorseInn_RewardItemPresentNum', 'Index': -1, 'Value': 11}) {
                                                  case 1:
                                                    Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    goto Event169
                                                  case 2:
                                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_NextGift_Carrot', 'Index': -1}) {
                                                        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    } else {
                                                        Npc_EventStarter[Next_PointGift(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0010', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    }
                                                    goto Event169
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void StatetoPresent() {
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInn_NextRewardNeetPoint', 'Value': 'DecrementPoint', 'Index': -1})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_StatetoPresent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'HorseInn_NextRewardNeetPoint', 'Value': 'NextRewardNeetPoint'})
        GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'HorseInn_NextRewardNeetPoint', 'GameDataB': 'HorseInnMemberPoint'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}
