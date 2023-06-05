-------- EventFlow: Dm_ZN_0062 --------

Actor: Npc_HatenoGate001[ZonauRemains]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventNPCTurnToObjectGreeting', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[ZonauRemains]
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventWait', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk01() {
    Event1:

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !Npc_EventStarter[ZonauRemains].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            Event16:

            call 01()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkInside', 'Index': -1}) {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_010', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event16
        }
      case [2, 3, 6, 7, 8]:
        if !Npc_EventStarter[ZonauRemains].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {

            call 01()

        } else {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_009', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Balloon01() {
    Event20:
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1, 2, 3, 4, 5]:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5]:
            Npc_HatenoGate001[ZonauRemains].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0062:Near_001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3, 6, 7, 8]:
            Npc_HatenoGate001[ZonauRemains].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0062:Near_002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [6, 7]:
        Npc_HatenoGate001[ZonauRemains].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0062:Near_003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Balloon02() {

    call 02()

}

void Talk02() {
    Event4:

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !Npc_EventStarter[ZonauRemains].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            Event38:

            call 03()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkInside', 'Index': -1}) {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_010', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event38
        }
      case [2, 3, 6, 7, 8]:
        if !Npc_EventStarter[ZonauRemains].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {

            call 03()

        } else {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_009', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Balloon03() {

    call 02()

}

void Talk03() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedFrontCannon'}) {

        call 05()

    } else {

        call 04()

    }
}

void 02() {
    goto Event20
}

void 01() {
    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_000', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 6]:
        Npc_HatenoGate001[ZonauRemains].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'Target': 0, 'IsWaitEnd': True, 'IsConfront': True, 'FaceControlType': 1, 'WorldPos': [590.7529907226562, 200.36700439453125, 2111.967041015625], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Event164:
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'WorldPos': [590.7529907226562, 200.36700439453125, 2111.967041015625], 'Direction': 0.0, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0]})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_001', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 6]:
            Npc_HatenoGate001[ZonauRemains].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event165:
            Player.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_HatenoGate001', 'InstanceName': 'ZonauRemains', 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0]})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1, 2, 3, 4, 5]:
                Npc_HatenoGate001[ZonauRemains].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_002', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event126:
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_ZonauRemains_ArriveObservatory_Exp'}) {
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'ZonauRemains_TalkResearcher', 'ChallengeName': 'GotoFironeZonauRemains'})
                }
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedFrontCannon'})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
              case [6, 7]:
                Npc_HatenoGate001[ZonauRemains].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_007', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event126
            }
          case [2, 3, 7, 8]:
            Npc_HatenoGate001[ZonauRemains].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
            goto Event165
        }
      case [2, 3, 7, 8]:
        Npc_HatenoGate001[ZonauRemains].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'Target': 0, 'WorldPos': [590.7529907226562, 200.36700439453125, 2111.260009765625], 'ResetArriveTransformFixed': False})
        goto Event164
    }
}

void 03() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedTauro', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedCannon', 'Index': -1})
    if Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
        Npc_HatenoGate001[ZonauRemains].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HatenoGate001[ZonauRemains].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZN_0063', 'Index': -1}) {
                if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event100:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call MeetTauro()

                      case 1:

                        call CanonTalk()

                      case 2:

                        call GoodBy()

                    }
                } else {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event99:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call MeetTauro()

                      case 1:

                        call CanonTalk()

                      case 2:

                        call GoodBy()

                    }
                }
            } else
            if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event98:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call NotMeet2()

                  case 1:

                    call CanonTalk()

                  case 2:

                    call GoodBy()

                }
            } else {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event97:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call NotMeet()

                  case 1:

                    call CanonTalk()

                  case 2:

                    call GoodBy()

                }
            }
          case [6, 7]:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZN_0063', 'Index': -1}) {
                if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Q4()

                } else {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Q3()

                }
            } else
            if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Q2()

            } else {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Q1()

            }
        }
      case [2, 3, 6, 7, 8]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZN_0063', 'Index': -1}) {
            if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Q4()

            } else {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_014', 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Q3()

            }
        } else
        if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Q2()

        } else {
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_014', 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Q1()

        }
    }
}

void 04() {
    goto Event1
}

void GoodBy() {
    Npc_HatenoGate001[ZonauRemains].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void NotMeet() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_AskedTauro', 'Index': -1})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_019', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_003', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            Event143:
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_AskedCannon', 'Index': -1}) {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 4, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_018', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call CanonTalk()

                } else {

                    call GoodBy()

                }
            }
          case [6, 7]:
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_019', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_008', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event143
        }
      case [2, 3, 6, 7, 8]:
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_019', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_003', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event143
    }
}

void MeetTauro() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_AskedTauro', 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedAfterMeetTauro'}) {
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_005', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        Event131:

        call MeetTauro_2()

    } else {
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_004', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkedAfterMeetTauro', 'Value': True, 'Index': -1})
        goto Event131
    }
}

void CanonTalk() {
    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_025', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_AskedCannon', 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkInside', 'Index': -1}) {

        fork {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'WorldPos': [602.364990234375, 213.53500366210938, 2119.47412109375], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_HatenoGate001[ZonauRemains].EventTriggerLookAtObject({'WorldPos': [602.364990234375, 213.53500366210938, 2119.47412109375], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }

    } else {

        fork {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'WorldPos': [602.364990234375, 213.53500366210938, 2119.47412109375], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_HatenoGate001[ZonauRemains].EventNPCTurnToTarget({'WorldPos': [602.364990234375, 213.53500366210938, 2119.47412109375], 'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

    }
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVector': [583.27001953125, 198.99000549316406, 2104.06005859375], 'AtVector': [585.3800048828125, 203.39999389648438, 2106.1201171875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True})
    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_020', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': False, 'IsWaitEnd': True, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkInside', 'Index': -1}) {

        fork {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'ActorName': 'Npc_HatenoGate001', 'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'ZonauRemains', 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_HatenoGate001[ZonauRemains].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})
            Npc_HatenoGate001[ZonauRemains].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
        }

    } else {

        fork {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'ActorName': 'Npc_HatenoGate001', 'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'ZonauRemains', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_HatenoGate001[ZonauRemains].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})
            Npc_HatenoGate001[ZonauRemains].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_Cannon13_Confirmed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Cannon13_01_D_T'}) {

            call CanonTalk1()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsActivateCannon.Tower13'}) {

            call CanonTalk1()

        } else {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_021', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            Event167:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_AskedTauro'}) {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_024', 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZN_0063', 'Index': -1}) {
                if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_017', 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 6, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call MeetTauro()

                    } else {

                        call GoodBy()

                    }
                } else {
                    Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_017', 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 6, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call MeetTauro()

                    } else {

                        call GoodBy()

                    }
                }
            } else
            if !Npc_HatenoGate001[ZonauRemains].EventQueryIsOnRecentTalkFlag() {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_017', 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call NotMeet2()

                } else {

                    call GoodBy()

                }
            } else {
                Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_017', 'ChoiceLabel2': 5, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call NotMeet()

                } else {

                    call GoodBy()

                }
            }
        }
    } else {

        call CanonTalk1()

    }
}

void Q1() {
    goto Event97
}

void Q2() {
    goto Event98
}

void Q3() {
    goto Event99
}

void Q4() {
    goto Event100
}

void 05() {
    goto Event4
}

void NotMeet2() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_AskedTauro', 'Index': -1})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_003', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            Event69:

            call NotMeet2_2()

          case [6, 7]:
            Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_008', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event69
        }
      case [2, 3, 6, 7, 8]:
        Npc_HatenoGate001[ZonauRemains].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0062:Talk_003', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event69
    }
}

void CanonTalk1() {
    goto Event167
}

void NotMeet2_2() {
    goto Event143
}

void MeetTauro_2() {
    goto Event143
}
