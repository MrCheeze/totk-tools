-------- EventFlow: Npc_Zelda_Opening --------

Actor: Npc_Zelda_Opening
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Accessory1': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerWait', 'EventPlayerClimbOff', 'EventPlayerMoveToAnchor', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventTriggerRequestReplaceEventSkipDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Zelda_Opening")})

    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Opening_ZledaTalkState01', 'Value': '01'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Opening_ZledaTalkState01', 'Value': '02', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Opening_ZledaTalkState01', 'Value': '02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Opening_ZledaTalkState01', 'Value': '03', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Opening_ZledaTalkState01', 'Value': '03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Opening_ZledaTalkState01', 'Value': '04', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Opening_ZledaTalkState01', 'Value': '04'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Opening_ZledaTalkState01', 'Value': '05', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Opening_ZledaTalkState01', 'Value': '05'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Opening_ZledaTalkState01', 'Value': 'Loop', 'Index': -1})
    } else {
        Npc_Zelda_Opening.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_00', 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void CheckedRemain1_Talk() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        Event49:

        fork {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'PosVector': [2.9700000286102295, 3.2799999713897705, -2.4100000858306885], 'AtVector': [2.4200000762939453, 2.8399999141693115, -1.7000000476837158], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain1', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Event11:
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_07', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_FocusLow', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Opening_CheckedRemain1', 'Index': -1, 'Value': True})
            Npc_Zelda_Opening.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Act_Focus_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        }

    } else {

        call Talk()

    }
}

void CheckedRemain1_OnArea() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Opening_CheckedRemain1', 'Index': -1}) {

        call Common.AirStartUP_Player()

        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
            goto Event49
        } else {

            call NotArrivedTalk_Remain1()


            fork {
                Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'InstanceName': 'Remain1', 'AnchorType': 4, 'DesiredGear': 1, 'ASName': 'Walk_Fast_Approach', 'IsAlignAnchorPos': False, 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
                Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_FocusLow', 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'PosVector': [2.9700000286102295, 3.2799999713897705, -2.4100000858306885], 'AtVector': [2.4200000762939453, 2.8399999141693115, -1.7000000476837158], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain1', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            goto Event11
        }
    }
}

void CheckedRemain2_OnArea() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_CheckedRemain2'}) {

        call Common.AirStartUP_Player()

        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
            Event18:

            fork {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain2', 'PosVector': [3.640000104904175, 2.2100000381469727, -5.570000171661377], 'AtVector': [3.0899999141693115, 2.1600000858306885, -4.71999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                Event202:

                fork {
                    Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_09', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_FocusMiddle', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                }

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Opening_CheckedRemain2', 'Index': -1, 'Value': True})
                Npc_Zelda_Opening.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Act_Focus_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
            }

        } else {

            call NotArrivedTalk_Remain2()


            fork {
                Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'InstanceName': 'Remain2', 'AnchorType': 6, 'DesiredGear': 1, 'IsAlignAnchorPos': False, 'ASName': 'Walk_Fast_Approach', 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain2', 'PosVector': [3.640000104904175, 2.2100000381469727, -5.570000171661377], 'AtVector': [3.0899999141693115, 2.1600000858306885, -4.71999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            goto Event202
        }
    }
}

void CheckedRemain3_OnArea() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_CheckedRemain3'}) {

        call Common.AirStartUP_Player()

        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
            Event25:

            fork {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain3', 'PosVector': [4.949999809265137, 4.420000076293945, -1.840000033378601], 'AtVector': [4.289999961853027, 4.099999904632568, -1.159999966621399], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                Event90:
                SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 3})
                Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_11', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_FocusHigh', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Opening_CheckedRemain3'})
                Npc_Zelda_Opening.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Act_Focus_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
            }

        } else {

            call NotArrivedTalk_Remain3()


            fork {
                Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'AnchorType': 8, 'InstanceName': 'Remain3', 'DesiredGear': 1, 'IsAlignAnchorPos': False, 'ASName': 'Walk_Fast_Approach', 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain3', 'PosVector': [4.949999809265137, 4.420000076293945, -1.840000033378601], 'AtVector': [4.289999961853027, 4.099999904632568, -1.159999966621399], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            goto Event90
        }
    }
}

void CheckedRemain2_Talk() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
        goto Event18
    } else {

        call Talk()

    }
}

void CheckedRemain3_Talk() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
        goto Event25
    } else {

        call Talk()

    }
}

void CheckedMural_Talk() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 5}) {
        Event4:

        call InitTalk.InitTalkEquipOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Zelda_Opening")})

        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_20', 'ASName': 'GuardWait', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch Npc_Zelda_Opening.EventQueryCheckTerrorLevel() {
      case 0:

        call Talk02()

      case [1, 2, 3, 4, 5]:
        goto Event4
    }
}

void CheckedMammy_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_ZeldaLookAtMummy'}) {

        call Talk04()

    } else {

        call Talk03()

    }
}

void LuminousSword_Talk() {
    if Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) in [0, 1] {

        call Talk()

    }
}

void TalkOnTheLanding_OnArea() {
    Event200:
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OP_0034'})
    SoundSystemActor.EventTriggerRequestReplaceEventSkipDucking()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OP_0017', 'FadeInTypeEventEnd': 2})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [64.04685974121094, 30.539730072021484, -166.9010009765625], 'YAngle': 0.0, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3})
    Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 0, 'InstanceName': 'LookAround', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'TargetFovy': 45.66699981689453, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsWaitEnd': False, 'PosVector': [63.176849365234375, 32.68225860595703, -169.42860412597656], 'AtVector': [64.34681701660156, 32.56105041503906, -165.80780029296875], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void LookAround_Talk() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        goto Event200
    } else {

        call Talk()

    }
}

void Talk02() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Zelda_Opening")})

    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '01', 'GameDataName': 'Opening_ZledaTalkState02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '02', 'GameDataName': 'Opening_ZledaTalkState02', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '02', 'GameDataName': 'Opening_ZledaTalkState02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '03', 'GameDataName': 'Opening_ZledaTalkState02', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '03', 'GameDataName': 'Opening_ZledaTalkState02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '04', 'GameDataName': 'Opening_ZledaTalkState02', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '04', 'GameDataName': 'Opening_ZledaTalkState02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '05', 'GameDataName': 'Opening_ZledaTalkState02', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '05', 'GameDataName': 'Opening_ZledaTalkState02'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': 'Loop', 'GameDataName': 'Opening_ZledaTalkState02', 'Index': -1})
    } else {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Talk03() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Zelda_Opening")})

    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '01', 'GameDataName': 'Opening_ZledaTalkState03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '02', 'GameDataName': 'Opening_ZledaTalkState03', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '02', 'GameDataName': 'Opening_ZledaTalkState03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '03', 'GameDataName': 'Opening_ZledaTalkState03', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '03', 'GameDataName': 'Opening_ZledaTalkState03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '04', 'GameDataName': 'Opening_ZledaTalkState03', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '04', 'GameDataName': 'Opening_ZledaTalkState03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': '05', 'GameDataName': 'Opening_ZledaTalkState03', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': '05', 'GameDataName': 'Opening_ZledaTalkState03'}) {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataEnum({'Value': 'Loop', 'GameDataName': 'Opening_ZledaTalkState03', 'Index': -1})
    } else {
        Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Talk04() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Zelda_Opening")})

    Npc_Zelda_Opening.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void CheckedMural_EachFrame() {
    Event7:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Opening_ZeldaNoticeEnemy'}) {
        Event6:
        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Opening_CheckedMural'}) {
            goto Event7
        }
    } else
    switch Npc_Zelda_Opening.EventQueryCheckTerrorLevel() {
      case 0:
        if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 5}) {
            Event8:
            Npc_Zelda_Opening.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Zelda_Opening:near_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            Npc_Zelda_Opening.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Opening_ZeldaNoticeEnemy'})
            goto Event6
        } else {
            goto Event6
        }
      case [1, 2, 3, 4, 5]:
        goto Event8
    }
}

void CheckedRemain1_Do() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        goto Event49
    } else {

        call NotArrivedTalk_Remain1()


        fork {
            Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'InstanceName': 'Remain1', 'AnchorType': 4, 'DesiredGear': 1, 'ASName': 'Walk_Fast_Approach', 'IsAlignAnchorPos': False, 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
            Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_FocusLow', 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'PosVector': [2.9700000286102295, 3.2799999713897705, -2.4100000858306885], 'AtVector': [2.4200000762939453, 2.8399999141693115, -1.7000000476837158], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain1', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.10000000149011612, 'AnchorInstanceName': 'PlayerRemain1'})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Remain1', 'TurnFaceControlType': 2, 'PosOffset': [0.0, 0.0, -1.0], 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        goto Event11
    }
}

void CheckedRemain2_Do() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
        goto Event18
    } else {

        call NotArrivedTalk_Remain2()


        fork {
            Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'InstanceName': 'Remain2', 'AnchorType': 6, 'DesiredGear': 1, 'IsAlignAnchorPos': False, 'ASName': 'Walk_Fast_Approach', 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain2', 'PosVector': [3.640000104904175, 2.2100000381469727, -5.570000171661377], 'AtVector': [3.0899999141693115, 2.1600000858306885, -4.71999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.10000000149011612, 'AnchorInstanceName': 'PlayerRemain2'})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'TurnFaceControlType': 2, 'InstanceName': 'Remain2', 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        goto Event202
    }
}

void CheckedRemain3_Do() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
        goto Event25
    } else {

        call NotArrivedTalk_Remain3()


        fork {
            Npc_Zelda_Opening.EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ActionType': 0, 'AnchorType': 8, 'InstanceName': 'Remain3', 'DesiredGear': 1, 'IsAlignAnchorPos': False, 'ASName': 'Walk_Fast_Approach', 'ForceIsNotAlignmentWaitPosition': True, 'WaitCancelPathFinding': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Remain3', 'PosVector': [4.949999809265137, 4.420000076293945, -1.840000033378601], 'AtVector': [4.289999961853027, 4.099999904632568, -1.159999966621399], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.10000000149011612, 'AnchorInstanceName': 'PlayerRemain3'})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'TurnFaceControlType': 2, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Remain3', 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        goto Event90
    }
}

void NotArrivedTalk_Remain3() {

    fork {
        Npc_Zelda_Opening.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'TargetRemain3', 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_16', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    Player.EventPlayerUnequip({'IsWaitEnd': True})
}

void NotArrivedTalk_Remain2() {

    fork {
        Npc_Zelda_Opening.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'DesignateMatrixActor', 'IsConfront': False, 'InstanceName': 'TargetRemain2', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zelda_Opening.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    Player.EventPlayerUnequip({'IsWaitEnd': True})
}

void NotArrivedTalk_Remain1() {

    fork {
        Npc_Zelda_Opening.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'DesignateMatrixActor', 'IsConfront': False, 'InstanceName': 'TargetRemain1', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zelda_Opening:talk_14', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    Player.EventPlayerUnequip({'IsWaitEnd': True})
}
