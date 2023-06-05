-------- EventFlow: Npc_HiddenKorokGround --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: HiddenKorok_EventStarter
entrypoint: None()
actions: ['EventTriggerSetRecentTalkFlag']
queries: ['EventQueryHiddenKorokPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: KorokCarry_Destination
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[Talk_Internal(Npc_Korok)]
entrypoint: Talk_Internal(Npc_Korok)
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_EventStarter[AfterGreeting_Common(Npc_Korok)]
entrypoint: AfterGreeting_Common(Npc_Korok)
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

void Talk_Internal() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {
            Event3:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ApperKorok_First_After_AccidentOfDekutree', 'Index': -1}) {

                call NormalTalk()

            } else {
                Npc_EventStarter[AfterGreeting_Common(Npc_Korok)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'ApperKorok_First_After_AccidentOfDekutree', 'Index': -1})
                Event20:
                if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ApperKorok_First', 'Index': -1})
                && EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarryPassenger_Pair', 'InstanceName': '', 'IsCheckInstanceName': False})
                && EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarry_Destination', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ApperKorok_First', 'Value': True, 'Index': -1})
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HiddenKorok_AccidentForest_Talked'}) {
            Event22:
            if !Npc_EventStarter[AfterGreeting_Common(Npc_Korok)].EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter[AfterGreeting_Common(Npc_Korok)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter[AfterGreeting_Common(Npc_Korok)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk05', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event20
        } else {
            Event4:
            Npc_EventStarter[AfterGreeting_Common(Npc_Korok)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HiddenKorok_AccidentForest_Talked', 'Value': True, 'Index': -1})
            goto Event20
        }
    } else {

        call NormalTalk()

    }
}

void Greetings() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ApperKorok_First', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk06', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void AfterGreeting() {
    HiddenKorok_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ApperKorok_First', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk07', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call AfterGreeting_Common({'Npc_Korok': ActorIdentifier(name="Npc_EventStarter"), 'Actor1ActorName': 'Npc_EventStarter'})

}

void NormalTalk() {
    if EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarryPassenger_Pair', 'InstanceName': '', 'IsCheckInstanceName': False})
    && EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarry_Destination', 'InstanceName': '', 'IsCheckInstanceName': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ApperKorok_First', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:Talk00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ApperKorok_First', 'Value': True, 'Index': -1})
        }
    }
}

void AfterGreeting_KorokCarry() {

    call AfterGreeting_Common({'Npc_Korok': ActorIdentifier(name="KorokCarry_Destination"), 'Actor1ActorName': 'KorokCarry_Destination'})

}

void AfterGreeting_Common() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {
            goto Event3
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarryPassenger_Pair', 'InstanceName': '', 'IsCheckInstanceName': False}) {
            Event31:
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.0, 1.315000057220459, 1.781499981880188], 'AtVector': [0.0, 0.6499999761581421, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveTime': 10, 'IsWaitEnd': True, 'Actor1ActorName': 'Actor1ActorName', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Event2:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HiddenKorok_AccidentForest_Talked'}) {
                goto Event22
            } else {
                goto Event4
            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'KorokCarry_Destination', 'InstanceName': '', 'IsCheckInstanceName': False}) {
            goto Event31
        } else
        if !HiddenKorok_EventStarter.EventQueryHiddenKorokPlacementType() {
            goto Event31
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'IsWaitEnd': True, 'Actor1ActorName': 'Actor1ActorName', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.3200000524520874, 1.9299999475479126], 'AtVector': [0.0, 0.6600000262260437, 0.14000000059604645], 'TargetFovy': 56.099998474121094, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
        goto Event2
    } else {

        call NormalTalk()

    }
}

void Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})


    call Talk_Internal({'Npc_Korok': ActorIdentifier(name="Npc_EventStarter")})

}
