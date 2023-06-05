-------- EventFlow: DmF_SY_StatueDevil --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerAddMaxLife', 'EventTriggerSetShowStaminaGauge', 'EventTriggerSetDisplayHeartGauge', 'EventWait', 'EventTriggerIncreaseRupee', 'EventWaitStableNumDisplay', 'EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventTriggerSetVisibleHeartGauge', 'EventTriggerSetVisibleStaminaGauge']
queries: ['EventQueryTalkChoice3', 'EventQueryHasRuppe', 'EventQueryTalkChoice2', 'EventQueryDisplayModeIsPro']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_DemonStatue_A_01
entrypoint: None()
actions: ['EventTalk', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataFloat', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataFloat', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerMaxLife', 'EventQueryCurrentLife']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueDevil/DmF_SY_StatueDevil_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueDevil_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDiffuseAttenuate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '会話中', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DemoDevil_LinkPos', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_DemonStatue_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueDevil_Aureole'})
    } {
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.20000000298023224})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk17', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk31', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 13, 'ChoiceLabel3': 1, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event1:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call EntryPoint1()

      case 1:
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk18', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 13, 'ChoiceLabel3': 1, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event1
      case 2:
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk01', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
        TwnObj_DemonStatue_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_StatueDevil_Aureole', 'SLinkKey': '', 'IsKill': False})
    }
}

void EntryPoint1() {
    if !GameSystemActor.EventQueryDisplayModeIsPro() {
        GameSystemActor.EventTriggerSetVisibleHeartGauge({'IsDisplayHeartGauge': True})
        GameSystemActor.EventTriggerSetVisibleStaminaGauge({'IsDisplayHeartGauge': True})
        Event0:
        GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
        GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': True, 'EventName': 0})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Value': 0, 'Index': -1}) {
          case [0, 1]:
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk47', 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 3, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event76:
                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk68', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
                    Event122:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': True, 'Index': -1})
                    switch Player.EventQueryPlayerMaxLife({'Value': 12}) {
                      case [0, 1]:
                        Event100:
                        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk41', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event121:

                        call EntryPoint1()

                      case 2:
                        switch Player.EventQueryCurrentLife({'Value': 12}) {
                          case [0, 1]:
                            goto Event100
                          case 2:
                            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                            TwnObj_DemonStatue_A_01.EventTalk({'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk21', 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {

                                call EntryPoint7()


                                fork {
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                    GameSystemActor.EventTriggerAddMaxLife({'InstanceName': '', 'ActorName': 'Player', 'AddNum': -4})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                                }

                                switch Player.EventQueryPlayerMaxLife({'Value': 12}) {
                                  case [0, 1]:
                                    Event141:
                                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk37', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event145:

                                    call EntryPoint1()

                                  case 2:
                                    switch Player.EventQueryCurrentLife({'Value': 12}) {
                                      case [0, 1]:
                                        goto Event141
                                      case 2:
                                        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk34', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 15, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        switch GameSystemActor.EventQueryTalkChoice3() {
                                          case 0:

                                            call EntryPoint4()

                                          case 1:
                                            Event89:

                                            call EntryPoint1()

                                          case 2:
                                            Event181:

                                            call EntryPoint2()

                                        }
                                    }
                                }
                            } else {
                                goto Event121
                            }
                        }
                    }
                  case 1:
                    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
                    Event123:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': True, 'Index': -1})
                    switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Value': 1000.0, 'Index': -1}) {
                      case [0, 1]:
                        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk42', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event121
                      case 2:
                        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                        TwnObj_DemonStatue_A_01.EventTalk({'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk23', 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call EntryPoint7()


                            fork {
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                GameDataActor.EventTriggerAddOrSubGameDataFloat({'Index': -1, 'GameDataName': 'PlayerStatus.MaxStamina', 'Value': -200.0})
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                            }

                            switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Value': 1000.0, 'Index': -1}) {
                              case [0, 1]:
                                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk38', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event145
                              case 2:
                                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk36', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 15, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                switch GameSystemActor.EventQueryTalkChoice3() {
                                  case 0:

                                    call EntryPoint6()

                                  case 1:
                                    goto Event89
                                  case 2:
                                    goto Event181
                                }
                            }
                        } else {
                            goto Event121
                        }
                    }
                  case 2:
                    Event176:

                    call EntryPoint2()

                }
            } else {
                Event375:

                call EntryPoint2()

            }
          case 2:
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk26', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 26, 'ChoiceLabel2': 27, 'ChoiceLabel3': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event76
              case 1:
                if !GameSystemActor.EventQueryHasRuppe({'Value': 120}) {
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk69', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
                        Event86:
                        if !GameSystemActor.EventQueryHasRuppe({'Value': 120}) {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': False, 'Index': -1})
                            switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
                              case 0:
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                TwnObj_DemonStatue_A_01.EventTalk({'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk20', 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call EntryPoint7()


                                    fork {
                                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                                        call GetPouchContent.AddMaxLife()

                                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                                    }

                                    switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
                                      case 0:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Value': 0, 'Index': -1}) {
                                          case [0, 1]:
                                            Event289:

                                            call EntryPoint1()

                                          case 2:
                                            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk33', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 15, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            switch GameSystemActor.EventQueryTalkChoice3() {
                                              case 0:

                                                call EntryPoint3()

                                              case 1:
                                                goto Event89
                                              case 2:
                                                goto Event181
                                            }
                                        }
                                      case [1, 2]:
                                        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk39', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event145
                                    }
                                } else {
                                    goto Event121
                                }
                              case [1, 2]:
                                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk43', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event121
                            }
                        } else {
                            Event85:
                            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk05', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': False, 'Index': -1})

                            call EntryPoint1()

                        }
                      case 1:
                        GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
                        Event84:
                        if !GameSystemActor.EventQueryHasRuppe({'Value': 120}) {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': False, 'Index': -1})
                            switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                              case 0:
                                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                TwnObj_DemonStatue_A_01.EventTalk({'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk22', 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call EntryPoint7()


                                    fork {
                                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                        GameDataActor.EventTriggerAddOrSubGameDataFloat({'Index': -1, 'GameDataName': 'PlayerStatus.MaxStamina', 'Value': 200.0})
                                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                                    }

                                    switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                                      case 0:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Value': 0, 'Index': -1}) {
                                          case [0, 1]:
                                            goto Event289
                                          case 2:
                                            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk35', 'ChoiceNumber': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 15, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            switch GameSystemActor.EventQueryTalkChoice3() {
                                              case 0:

                                                call EntryPoint5()

                                              case 1:
                                                goto Event89
                                              case 2:
                                                goto Event181
                                            }
                                        }
                                      case [1, 2]:
                                        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk40', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event145
                                    }
                                } else {
                                    goto Event121
                                }
                              case [1, 2]:
                                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk44', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event121
                            }
                        } else {
                            goto Event85
                        }
                      case 2:
                        goto Event375
                    }
                } else {
                    goto Event85
                }
              case 2:
                goto Event176
            }
        }
    } else {
        goto Event0
    }
}

void EntryPoint2() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_DemonStatue_Operation', 'Index': -1}) {
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk16', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk04', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_Operation', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Value': False, 'Index': -1})
    GameSystemActor.EventTriggerRequestAutoSave()
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
    TwnObj_DemonStatue_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_StatueDevil_Aureole', 'SLinkKey': '', 'IsKill': False})
}

void EntryPoint3() {
    goto Event86
}

void EntryPoint4() {
    goto Event122
}

void EntryPoint5() {
    goto Event84
}

void EntryPoint6() {
    goto Event123
}

void EntryPoint7() {
    TwnObj_DemonStatue_A_01.EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk45', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Index': -1}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': 100})
    } else {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -120})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_Operation', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_DemonStatue_FirstSell', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_DemonStatue_SellFlow', 'Index': -1}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Drain', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartDown', 'SLinkKey': 'Dm_StatuleDevil_HeartDown'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 134})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } else {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 54, 'IsWaitEnd': True})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartUp', 'SLinkKey': 'Dm_StatuleDevil_HeartUp'})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Recover', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }
}

void Talk_First() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '会話中', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DemoDevil_LinkPos', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_DemonStatue_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueDevil_Aureole'})
    } {
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.20000000298023224})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk52', 'ChoiceNumber': 1, 'IsCloseDialog': False, 'ChoiceLabel1': 25, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk53', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk54', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk32', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk77', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event230:
        if !GameSystemActor.EventQueryDisplayModeIsPro() {
            GameSystemActor.EventTriggerSetVisibleHeartGauge({'IsDisplayHeartGauge': True})
            GameSystemActor.EventTriggerSetVisibleStaminaGauge({'IsDisplayHeartGauge': True})
            Event64:
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk89', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch Player.EventQueryPlayerMaxLife({'Value': 12}) {
              case [0, 1]:
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Value': 1000.0, 'Index': -1}) {
                  case [0, 1]:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk80', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event209:
                    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
                    TwnObj_DemonStatue_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_StatueDevil_Aureole', 'SLinkKey': '', 'IsKill': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'StatueDevilTutorial', 'StepName': 'GetBackContainer', 'IsWaitEnd': True})
                  case 2:
                    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk78', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

                    fork {
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Drain', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
                        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartDown', 'SLinkKey': 'Dm_StatuleDevil_HeartDown'})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 134})
                    } {
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    }

                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    GameDataActor.EventTriggerAddOrSubGameDataFloat({'Index': -1, 'GameDataName': 'PlayerStatus.MaxStamina', 'Value': -200.0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    Event208:
                    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Index': -1})
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk82', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk65', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event209
                }
              case 2:
                GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGaugeExtra': False, 'IsDisplayHeartGauge': True, 'IsDisplayAtLT': True})
                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk78', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                Player.EventTriggerPlayerRequestLookAtTheFrontLock()

                fork {
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Drain', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
                    Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartDown', 'SLinkKey': 'Dm_StatuleDevil_HeartDown'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 134})
                } {
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                }

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                GameSystemActor.EventTriggerAddMaxLife({'InstanceName': '', 'ActorName': 'Player', 'AddNum': -4})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                goto Event208
            }
        } else {
            goto Event64
        }
    }
}

void Talk_First_2() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '会話中', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DemoDevil_LinkPos', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'SceneName': 'C01-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_DemonStatue_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueDevil_Aureole'})
    } {
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.20000000298023224})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk57', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event230
}

void EntryPoint0() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStatueDevilEvent', 'Index': -1, 'Value': True})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_StatueDevil'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DemonStatue_CompleteTutorial', 'Index': -1}) {

            call Talk()

            Event276:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStatueDevilEvent', 'Value': False, 'Index': -1})
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Value': 0, 'Index': -1}) {
          case [0, 1]:

            call Talk_First_2()

            goto Event276
          case 2:

            call Talk_Second()

            goto Event276
        }
    } else {

        call Talk_First()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LookingForTheVoiceLord_Talk02', 'Index': -1, 'Value': True})
        goto Event276
    }
}

void Talk_Second() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '会話中', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DemoDevil_LinkPos', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'SceneName': 'C01-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_DemonStatue_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueDevil_Aureole'})
    } {
        EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.20000000298023224})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk17', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 17, 'ChoiceLabel2': 24, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryDisplayModeIsPro() {
            GameSystemActor.EventTriggerSetVisibleHeartGauge({'IsDisplayHeartGauge': True})
            GameSystemActor.EventTriggerSetVisibleStaminaGauge({'IsDisplayHeartGauge': True})
            Event238:
            GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGaugeExtra': False, 'IsDisplayHeartGauge': True, 'IsDisplayAtLT': True})
            GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'EventName': 0, 'IsDisplay': True})
            TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk84', 'ChoiceNumber': 3, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
                switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
                  case 0:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk87', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                    fork {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartUp', 'SLinkKey': 'Dm_StatuleDevil_HeartUp'})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 14})
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Recover', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    } {
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'SceneName': 'C02-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    }

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})

                    call GetPouchContent.AddMaxLife()

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    Event268:
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NpcDemonStatue_UtuwaSum', 'Index': -1})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk88', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DemonStatue_CompleteTutorial', 'Value': True, 'Index': -1})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'StatueDevilTutorial', 'StepName': 'Complete', 'IsWaitEnd': True})
                    Event235:
                    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
                    TwnObj_DemonStatue_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_StatueDevil_Aureole', 'SLinkKey': '', 'IsKill': False})
                    if !GameSystemActor.EventQueryDisplayModeIsPro() {
                        GameSystemActor.EventTriggerSetVisibleHeartGauge({'IsDisplayHeartGauge': False})
                        GameSystemActor.EventTriggerSetVisibleStaminaGauge({'IsDisplayHeartGauge': False})
                    }
                  case [1, 2]:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk43', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event248:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event235
                }
              case 1:
                GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                  case 0:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk87', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_DmF_StatueDevil', 'IsUseSuspendFade': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                    fork {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueDevil_HeartUp', 'SLinkKey': 'Dm_StatuleDevil_HeartUp'})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 14})
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Recover', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    } {
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'SceneName': 'C02-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    }

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStartMoveGaugeForDevilEvent', 'Index': -1, 'Value': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'TwnObj_DemonStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
                    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_StatueDevil', 'CommandLife': 2, 'IsReleaseDucking': False})
                    GameDataActor.EventTriggerAddOrSubGameDataFloat({'Index': -1, 'GameDataName': 'PlayerStatus.MaxStamina', 'Value': 200.0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    goto Event268
                  case [1, 2]:
                    TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk44', 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event248
                }
              case 2:
                TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk59', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event235
            }
        } else {
            goto Event238
        }
    } else {
        TwnObj_DemonStatue_A_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueDevil:talk59', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event235
    }
}
