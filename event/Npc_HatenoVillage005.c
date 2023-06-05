-------- EventFlow: Npc_HatenoVillage005 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryAIScheduleCheckActorAction14_2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage005
entrypoint: None()
actions: ['EventTalk', 'EventNPCChangePostureWithAS', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventTriggerLookAtObject']
queries: ['EventQueryHaveTalked', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryAIScheduleCheckActorAction14_2', 'EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestKeepLifting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    if !Npc_EventStarter.EventQueryHaveTalked() {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:
            Event154:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_08', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Event99:

                call Weather()

                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_07', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_06', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                call Call()

                Event24:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage005_Talk03'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk04', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk05', 'Value': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event34:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 1:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk03', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk04', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk05', 'Value': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk09'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event34
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk09', 'Value': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event34
                    }
                  case 2:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk03', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk04', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk05', 'Value': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWithSensors_IsAfter_Ready_Exp'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event34
                }
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_04', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event99
            }
          case 7:
            switch Npc_HatenoVillage005.EventQueryCheckTerrorLevel() {
              case 0:

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_08', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Farmer', 'IsNotOpenIfSkipedMostRecent': False})
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Event82:
                    Npc_HatenoVillage005.EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
                    Npc_HatenoVillage005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    goto Event99
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_04', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Farmer', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event82
                }
              case [1, 2, 3, 4, 5]:
                goto Event154
            }
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:
        Event134:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

        Event3:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event24
      case 7:
        switch Npc_HatenoVillage005.EventQueryCheckTerrorLevel() {
          case 0:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_15', 'ASName': 'Act_Farmer', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage005.EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
            Npc_HatenoVillage005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            goto Event3
          case [1, 2, 3, 4, 5]:
            goto Event134
        }
    }
}

void TakePumpkin() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk07'}) {
        Event0:

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage005"), 'Arg_Turn': 1})

        switch Npc_HatenoVillage005.EventQueryAIScheduleCheckActorAction14() {
          case [0, 2, 4, 6, 8, 10]:
            Event9:
            Npc_HatenoVillage005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk06', 'Index': -1}) {
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event36:
                if Npc_HatenoVillage005.EventQueryHaveTalked() {
                    Npc_HatenoVillage005.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk06', 'Index': -1, 'Value': True})
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event36
            }
          case [1, 3, 5, 7, 9, 11, 12, 13]:
            switch Npc_HatenoVillage005.EventQueryAIScheduleCheckActorAction14_2() {
              case [0, 2, 3]:
                goto Event9
              case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                switch Npc_HatenoVillage005.EventQueryCheckTerrorLevel() {
                  case 0:
                    Npc_HatenoVillage005.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk06', 'Index': -1}) {
                        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_20', 'ASName': 'Talk_Farmer', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event36
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk06', 'Index': -1, 'Value': True})
                        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_12', 'ASName': 'Talk_Farmer', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event36
                    }
                  case [1, 2, 3, 4, 5]:
                    goto Event9
                }
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk10'}) {
        goto Event0
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:System_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 120, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage005:near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Hateno_RevitalizeByNewSpeciality_IsCompleted_Exp_Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 2, 3, 4, 5, 7, 9, 11, 12, 13]:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
              case 0:
                Event89:

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_08', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Event112:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk02'}) {

                        call Weather()

                        Event46:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                          case 1:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk09'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk09', 'Value': True})
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                          case 2:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWithSensors_IsAfter_Ready_Exp'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage005_Talk02'})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event46
                    }
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_04', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event112
                }
              case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                switch Npc_HatenoVillage005.EventQueryCheckTerrorLevel() {
                  case 0:

                    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_08', 'ASName': 'Talk_Farmer', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        Event113:
                        Npc_HatenoVillage005.EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
                        Npc_HatenoVillage005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        goto Event112
                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_04', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Farmer', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event113
                    }
                  case [1, 2, 3, 4, 5]:
                    goto Event89
                }
              case [2, 3]:

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk02'}) {
                    goto Event89
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage005_Talk02'})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case [6, 8, 10]:
            goto Event89
        }
      case 11:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Hateno_RevitalizeByNewSpeciality_IsCompleted_Exp_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 6:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 120, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage005:near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 7:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 120, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage005:near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 10:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 120, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage005:near_04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Weather() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1, 4, 5] {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_01', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case 0:
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_02', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [1, 2, 3, 4, 5, 6, 7, 8]:
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_05', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [5, 6, 7]:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
                switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
                  case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
                    Event10:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_03', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 10:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_17', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event10
            }
        }
    }
}

void Call() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk03'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_19', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk04'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_21', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage005_Talk05'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_22', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Npc_HatenoVillage005_ReturnHome() {

    call OwnerOfHouseSuprised.Init_OwnerOfHouseSurprised({'Npc': ActorIdentifier(name="Npc_HatenoVillage005")})


    fork {
        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_27', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call OwnerOfHouseSuprised.Staging_OwnerOfHouseSurprised({'InstanceName': '', 'Npc': 'Npc_HatenoVillage005'})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_ReturningHomeEvent_02'}) {
        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_29', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hateno_ReturningHomeEvent_02'})
        Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_HatenoVillage005.EventQueryHaveTalked() {
            Npc_HatenoVillage005.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
    }
}

void TakeCarrot_Hateno() {
    Player.EventTriggerParticipateEvent()
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:System_01', 'IsNotOpenIfSkipedMostRecent': False})
}

void Watering_Natsuyuki() {
    Player.EventTriggerPlayerRequestKeepLifting()

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage005")})

    switch Npc_HatenoVillage005.EventQueryCheckTerrorLevel() {
      case 0:
        Npc_HatenoVillage005.EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
        Event136:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsAfter_NotReady_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
                Event135:
                Npc_HatenoVillage005.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage005'})
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1, 4, 5]:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3, 6, 7, 8]:
                    Npc_HatenoVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage005:Talk_32', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_HatenoVillage.EventTriggerParticipateEvent()
                Npc_HatenoVillage.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                Npc_HatenoVillage.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                goto Event135
            }
        } else
        switch Npc_HatenoVillage005.EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 2, 3, 4, 5, 7, 9, 11, 12, 13]:
            if Npc_HatenoVillage005.EventQueryAIScheduleCheckActorAction14_2() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
                goto Event135
            }
          case [6, 8, 10]:
            goto Event135
        }
      case [1, 2, 3, 4, 5]:
        goto Event136
    }
}
