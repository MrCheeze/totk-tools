-------- EventFlow: HorseInn_Register --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventOpenLastWildHorseInfo', 'EventCloseRupeeDisplay', 'EventInputHorseName', 'EventRegisterLastWildHorse', 'EventCloseOwnedHorseList', 'EventTriggerRequestAutoSave', 'EventTriggerIncreaseRupee', 'EventTriggerRemoveOwnedHorse', 'EventOpenOwnedHorseList', 'EventWaitOwnedHorseListInput', 'EventEventFadeIn', 'EventEventFadeOut', 'EventEntrustOutsideOwnedHorse', 'EventWait', 'EventTriggerCloseGuideForOwnedHorseList', 'EventTriggerOpenGuideForOwnedHorseList', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryCheckIsWildHorseAssociated', 'EventQueryCheckIsMaxRegisteredHorseNum', 'EventQueryTalkChoice2', 'EventQueryIsSuccessInputHorseName', 'EventQueryHasRuppe', 'EventQueryIsExistRegisteredHorseAny', 'EventQueryIsOwnedHorseListInput', 'EventQueryCheckIsOwnedHorseAssociated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Register_Horse() {
    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
      case [0, 1, 2, 3, 8, 9]:
        Event3:
        if !GameSystemActor.EventQueryCheckIsMaxRegisteredHorseNum() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register01', 'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Release_RegistTalk()

            } else
            Event173:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus03', 'Index': -1}) {
                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
                  case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register12_02', 'IsNotOpenIfSkipedMostRecent': False})
                  case 10:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register12_03', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register12', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 10:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register12_01', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

            call HorseImportCheck()

            Event14:
            GameSystemActor.EventOpenLastWildHorseInfo({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register23', 'ChoiceNumber': 2, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_RegisterFirstHorse', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHalfPrice'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register32', 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !GameSystemActor.EventQueryHasRuppe({'Value': 10}) {
                                GameSystemActor.EventTriggerIncreaseRupee({'Value': -10})
                                Event44:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register14', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call CheckFaronHatago_GiantHorseAtRegister()

                                Event1:
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                GameSystemActor.EventTriggerRequestAutoSave()

                                call HorseInnMaster.Register_NewHorse()


                                call HorseInnMaster.PresentCheck()

                                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
                                  case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register17', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event22:
                                    GameSystemActor.EventInputHorseName({'IsWaitEnd': True})
                                    if !GameSystemActor.EventQueryIsSuccessInputHorseName() {
                                        GameSystemActor.EventOpenLastWildHorseInfo({'IsWaitEnd': True})
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register06', 'IsNotOpenIfSkipedMostRecent': False})
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                                            Event6:
                                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Value': True, 'Index': -1})
                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 36, 'ChoiceLabel2': 37, 'ChoiceNumber': 2, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register07', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            if !GameSystemActor.EventQueryTalkChoice2() {
                                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'OutsideOwnedHorseIndex', 'Index': -1}) {
                                                  case 0:
                                                    GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
                                                    Event25:
                                                    GameSystemActor.EventRegisterLastWildHorse({'IsWaitEnd': True, 'IsLeaveRegisterHorse': False})
                                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HouseInn_GetUmayadoWagon', 'Index': -1}) {
                                                        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
                                                        switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
                                                          case [0, 1, 3, 6, 7]:
                                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                                            Event98:
                                                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isCustumSadle'})
                                                            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isCustumReins'}) {
                                                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'HorseRegisterCustomize_HarnessOnly'})
                                                            } else {
                                                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'HorseRegisterCustomize'})
                                                            }
                                                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseCustomised'}) {

                                                                call DmF_SY_HorseDecorate.HorseCustomisedTalk()

                                                            }
                                                            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Deliver04', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                                            call HorseInn_GuideWhistle()

                                                          case [2, 4, 5]:
                                                            Event199:
                                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                                            GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
                                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HouseInn_GetUmayadoWagon', 'Index': -1}) {
                                                                switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
                                                                  case [0, 1, 3, 6, 7]:
                                                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                                                    goto Event98
                                                                  case [2, 5]:
                                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register34', 'IsNotOpenIfSkipedMostRecent': False})
                                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register37', 'IsNotOpenIfSkipedMostRecent': False})
                                                                    Event158:
                                                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetMane3'}) {
                                                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register35', 'IsNotOpenIfSkipedMostRecent': False})
                                                                    }
                                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register36', 'IsNotOpenIfSkipedMostRecent': False})
                                                                  case 4:
                                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register34', 'IsNotOpenIfSkipedMostRecent': False})
                                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register38', 'IsNotOpenIfSkipedMostRecent': False})
                                                                    goto Event158
                                                                }
                                                            } else
                                                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
                                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register28', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            }

                                                            call HorseInn_GuideWhistle()

                                                        }
                                                    } else {
                                                        goto Event199
                                                    }
                                                  case [1, 2]:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
                                                    GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
                                                    goto Event25
                                                }
                                            } else {
                                                GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
                                                if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
                                                    Event111:
                                                    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                                                    Player.EventPlayerTurnAndLook({'Target': 1, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                                                    Event62:
                                                    GameSystemActor.EventRegisterLastWildHorse({'IsLeaveRegisterHorse': True, 'IsWaitEnd': True})
                                                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                                                    GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register10', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                } else
                                                if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 1, 'ActorFileName': ''}) {
                                                    goto Event111
                                                } else {
                                                    goto Event62
                                                }
                                            }
                                        } else {
                                            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})

                                            call RetryInputName()

                                        }
                                    } else {

                                        call RetryInputName()

                                    }
                                  case 1:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register20', 'ChoiceNumber': 2, 'ChoiceLabel1': 42, 'ChoiceLabel2': 43, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event34:
                                    if !GameSystemActor.EventQueryTalkChoice2() {
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                        goto Event6
                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 43, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register21', 'ChoiceLabel1': 42, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event34
                                    }
                                }
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register33', 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            }
                        } else
                        Event168:
                        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
                          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register16', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event0:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                          case 10:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register16_01', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event0
                        }
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register22', 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                                GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                                goto Event44
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event0
                            }
                        } else
                        goto Event168
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_RegisterFirstHorse', 'Index': -1, 'Value': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register27', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call HorseFirstRegister()

                }
            } else {
                GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                goto Event168
            }
        }
      case 4:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register00_1', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event86:

        call HorseImportCheck_NotRegister()

      case 6:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register00_3', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event86
      case 7:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register00', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event86
      case 10:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune09_IsCompleted_Exp'}) {
            goto Event3
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_TabantaHatago004'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago004:Register00_4', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register00_4', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Release_RegistTalk() {
    Event99:
    Npc_EventStarter.EventTalk({'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register02', 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventOpenOwnedHorseList({'IsWaitEnd': True})
    GameSystemActor.EventTriggerOpenGuideForOwnedHorseList()
    GameSystemActor.EventWaitOwnedHorseListInput({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsOwnedHorseListInput() {
        GameSystemActor.EventTriggerCloseGuideForOwnedHorseList()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register03', 'ChoiceNumber': 2, 'ChoiceLabel1': 32, 'ChoiceLabel2': 33, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register11', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventTriggerRemoveOwnedHorse()
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register04', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event72:

                call StartRegister()

              case 10:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register04_01', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event72
            }
        } else {
            goto Event99
        }
    } else
    goto Event173
}

void SecondTalk_RegisterHorse() {
    if !GameSystemActor.EventQueryIsExistRegisteredHorseAny() {
        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
          case [0, 1, 5, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:KyoukaiTalk04', 'ChoiceNumber': 2, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event57:
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Register_Horse()

            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:KyoukaiTalk05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [2, 3, 9]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:KyoukaiTalk04_02', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event57
          case 10:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune09_IsCompleted_Exp'}) {
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_TabantaHatago004'}) {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_TabantaHatago004:KyoukaiTalk04_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:KyoukaiTalk04_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event57
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_TabantaHatago004'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_TabantaHatago004:Register00_4', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 66, 'ChoiceLabel2': 67, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register00_4', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    }
}

void StartRegister() {
    goto Event14
}

void RetryInputName() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event22
}

void HorseInn_GuideWhistle() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Horse_Is_Registration', 'Index': -1}) {

        call HorseInnMaster.HorseRandomAdvice()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register18', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Common.OpenActionGuideScreen({'ActionGuideType': 24})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register19', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isWhistlingTalk', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Horse_Is_Registration', 'Index': -1, 'Value': True})
    }
}

void HorseFirstRegister() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OwnedCustomizableHorseTack_Reins.GameRomHorseReins_00', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_00', 'Index': -1, 'Value': True})
    goto Event1
}

void HorseImportCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsExistImportHorse', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1}) {
            Event118:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Import04', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Import01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9022', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Import05', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1, 'Value': True})
        }
    } else {
        goto Event118
    }
}

void HorseImportCheck_NotRegister() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsExistImportHorse', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Import02', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1, 'Value': True})
    }
}

void CheckIsGetReins() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HouseInn_GetUmayadoWagon'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseReins_01', 'Index': -1}) {
            Event137:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_isCustumReins', 'Index': -1, 'Value': False})
            Event151:
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseReins_02', 'Index': -1}) {
            goto Event137
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseReins_03', 'Index': -1}) {
            goto Event137
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseReins_04', 'Index': -1}) {
            goto Event137
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseReins_05', 'Index': -1}) {
            goto Event137
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isCustumReins', 'Value': True})
        }
        goto Event151
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isCustumReins', 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void CheckIsGetSaddle() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HouseInn_GetUmayadoWagon'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isCustumReins'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseSaddle_02', 'Index': -1}) {
                Event150:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_isCustumSadle', 'Index': -1, 'Value': False})
                Event155:
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseSaddle_03', 'Index': -1}) {
                goto Event150
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseSaddle_04', 'Index': -1}) {
                goto Event150
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.GameRomHorseSaddle_05', 'Index': -1}) {
                goto Event150
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_isCustumSadle', 'Index': -1, 'Value': True})
            }
            goto Event155
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_isCustumSadle', 'Index': -1, 'Value': False})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInn_isCustumSadle'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void CheckFaronHatago_GiantHorseAtRegister() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_FaronHatago_001', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_FaronHatago_001_Talk01', 'Index': -1}) {
            Event192:
            if Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
                if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': 'GameRomHorse01L', 'Type': 0, 'IsRidingAny': False}) {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event188:
                    Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                } else
                if GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) == 9 {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_FaronHatago_001:Talk_2003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event188
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_11_IsAfter_Ready_Exp'}) {
            goto Event192
        }
    }
}
