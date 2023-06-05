-------- EventFlow: Picture_NorthHatelHatago_Talk --------

Actor: Npc_NorthHatelHatago006
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventWait', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Npc_NorthHatelHatago006.EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'Target': 0, 'WorldPos': [888.1544799804688, 133.21299743652344, 173.11000061035156], 'ActorName': '', 'OffsetBase': 0})
    Npc_NorthHatelHatago006.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'MoveTime': 25, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [883.9099731445312, 134.00999450683594, 172.80999755859375], 'AtVector': [886.530029296875, 133.2899932861328, 171.5399932861328], 'TargetFovy': 60.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Picture_NorthHatelHatago_TalkFinale', 'Index': -1}) {

            fork {
                Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1014', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call TurnPlayer()

            }

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Picture_NorthHatelHatago_TalkSecond', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune06_IsAfter_Search_Exp'}) {

                fork {
                    Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1013', 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
                } {

                    call TurnPlayer()

                }

                Event18:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event19:
                        Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

                        Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Picture_NorthHatelHatago_TalkFinale', 'Index': -1, 'Value': True})
                    } else {
                        Event7:
                        Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1007', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 1:
                    goto Event19
                  case 2:
                    goto Event7
                }
            } else {

                fork {
                    Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1013', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } {

                    call TurnPlayer()

                }

                Event6:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1005', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    goto Event7
                }
            }
        } else {

            fork {
                Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call TurnPlayer()

            }

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Picture_NorthHatelHatago_TalkSecond', 'Index': -1, 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune06_IsAfter_Search_Exp'}) {
                Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1006', 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event18
            } else {
                Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1006', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
            }
        }
    } else {

        fork {
            Npc_NorthHatelHatago006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NorthHatelHatago006:Talk1015', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call TurnPlayer()

        }

    }
}

void TurnPlayer() {
    Player.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'KeepTalkWait': True, 'ActorName': 'Npc_NorthHatelHatago006', 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}
