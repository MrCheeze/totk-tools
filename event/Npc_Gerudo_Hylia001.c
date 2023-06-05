-------- EventFlow: Npc_Gerudo_Hylia001 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCChangePostureWithAS', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis028[travel]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event46:
    Npc_oasis028[travel].EventTriggerParticipateEvent()
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Event35:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Talked_First_Npc_Gerudo_Hylia001', 'Index': -1}) {
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1, 2, 3, 4, 5, 6]:
                Event43:
                if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
                    Event34:

                    call Rain()

                } else
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:

                    call Carrot()

                  case [2, 3, 4, 5, 6, 7, 8]:
                    goto Event34
                }
              case 7:
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_oasis028', 'CheckDistance': 3.0, 'ActorNameA': 'Npc_Gerudo_Hylia001', 'InstanceNameB': 'travel', 'InstanceNameA': 'travel'}) {

                    call Night()

                } else
                goto Event43
            }
        } else {

            call FirstTalk()

        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            goto Event35
        } else
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {
            goto Event35
        } else {

            call RainMove()

        }
    }
}

void Near() {
    if EventWorldManagerController.EventQueryTimeDivision() in [0, 1, 2, 3, 4, 5, 6]
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_Hylia001:Balloon_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void StandUp() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_EventStarter.EventNPCChangePostureWithAS({'IsWaitEnd': True, 'Posture': 0})
            Event22:

            call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})

          case [2, 3, 4, 5, 6, 7, 8]:
            goto Event22
        }
    } else {
        goto Event22
    }
}

void SitDown() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1})
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 4, 'IsReleaseThreaten': False, 'Direction': 180.0, 'FaceControlType': 3, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventNPCChangePostureWithAS({'Posture': 1, 'IsWaitEnd': True})
    }
}

void Carrot() {

    fork {

        call StandUp()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_02', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {

        call Wife()

    }


    call SitDown()

}

void Talk_with() {
    goto Event46
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})


    fork {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_03', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call Wife()

    }

    Npc_oasis028[travel].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
}

void Night() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})


    fork {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_05', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_04', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {

        call Wife()

    }

    Npc_oasis028[travel].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
}

void Wife() {
    Npc_oasis028[travel].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_oasis028[travel].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_oasis028[travel].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void FirstTalk() {

    fork {

        call StandUp()

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_00', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call Wife()

    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Talked_First_Npc_Gerudo_Hylia001', 'Index': -1, 'Value': True})

    call SitDown()

}

void RainMove() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})


    fork {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_Hylia001:Talk_07', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call Wife()

    }

    Npc_oasis028[travel].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
}
