-------- EventFlow: CallHorseMaster_NewMaritta --------

Actor: Npc_HyruleWestHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTalk', 'EventPlayerUnequip', 'EventPlayerTurnAndLook', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago005[ReturnChoice(ActorName)]
entrypoint: ReturnChoice(ActorName)
actions: ['EventTalk', 'EventTriggerTalk', 'EventAIScheduleMoveToAnchor', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_HyruleWestHatago005[ScheduleReset(ActorName)]
entrypoint: ScheduleReset(ActorName)
actions: ['EventTriggerNPCChangePosture', 'EventAIScheduleMoveToAnchor']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: None

Actor: Npc_HyruleWestHatago005[CommonFlow(ActorName)]
entrypoint: CommonFlow(ActorName)
actions: ['EventTriggerNPCChangePosture', 'EventNPCTurnToTarget', 'EventTalk', 'EventTriggerTalk', 'EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_HyruleWestHatago005[HaveTalkedCheck(ActorName)]
entrypoint: HaveTalkedCheck(ActorName)
actions: ['EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: None

void CallHorseMaster() {

    call CommonFlow({'TurnToActorName': 'Npc_HyruleWestHatago005', 'ActorName': ActorIdentifier(name="Npc_HyruleWestHatago005")})

}

void ReturnChoice() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/TwnObj_UmayadoBook_07:Talk04', 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
    Event27:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TurnToActorName', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerTalk({'HelloType': 2, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HatagoMasterInnReceptionNearby', 'Index': -1}) {
                Event7:
                Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})

                call HorseInn_RewardItemPresent.PointGift_For_You({'Npc_EventStarter': 'ActorName'})


                call HaveTalkedCheck({'ActorName': 'ActorName'})


                call ScheduleReset({'ActorName': 'ActorName'})

            } else {
                Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventTriggerTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0001', 'IsEndDialogOptionAuto': False, 'EndDialogOption': 2, 'NotPlayLipSyncAnim': False})
                Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'InstanceName': 'UmayadoBell', 'ASName': '', 'IsTurnToAnchorRot': False, 'DesiredGear': 1, 'ActionType': 0, 'IsAlignAnchorPos': True, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                fork {
                    Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TurnToActorName', 'KeepTalkWait': True, 'OffsetBase': 0})
                }

                goto Event7
            }
        } else {
            Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0004', 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call HaveTalkedCheck({'ActorName': 'ActorName'})


            call ScheduleReset({'ActorName': 'ActorName'})

        }
      case 1:

        call TwnObj_UmayadoBook_07.ReadBook()


        call ReturnChoice({'ActorName': 'ActorName', 'TurnToActorName': 'TurnToActorName'})

      case 2:

        call ScheduleReset({'ActorName': 'ActorName'})

    }
}

void ScheduleReset() {
    Npc_HyruleWestHatago005[ScheduleReset(ActorName)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': False})
    if Npc_HyruleWestHatago005[ScheduleReset(ActorName)].EventQueryAIScheduleCheckActorAction14() == 5 {
        Npc_HyruleWestHatago005[ScheduleReset(ActorName)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'IsWaitEnd': False, 'InstanceName': '', 'ASName': '', 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'IsTurnToAnchorRot': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    }
}

void CommonFlow() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'ActorName'})

    Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_HyruleWestHatago005[CommonFlow(ActorName)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/TwnObj_UmayadoBook_07:Talk02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event27
}

void HaveTalkedCheck() {
    if Npc_HyruleWestHatago005[HaveTalkedCheck(ActorName)].EventQueryHaveTalked() {
        Npc_HyruleWestHatago005[HaveTalkedCheck(ActorName)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    }
}
