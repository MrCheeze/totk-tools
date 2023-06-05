-------- EventFlow: Npc_HyruleDepthHatago005 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag']
queries: ['EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HyruleDepthHatago005
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_StableHostelFrame_A_01[HyruleDepthHatago]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedHeigen'})

}

void UmayadoMasterInside_Talk() {

    call InSide({'HorseInnBoolean': 'HorseInn_ArrivedHeigen'})

}

void OutSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_OutsideTalk()

    Event5:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call Npc_HyruleWestHatago005.IsAfter_ReturnBCAfterBlackZelda_Message()


        call Npc_HyruleWestHatago005.IsByeTalk()

        Event8:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Receive04', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call Npc_HyruleWestHatago005.InsertBluePrint()


        call Npc_HyruleWestHatago005.IsByeTalk()

        goto Event8
    }
}

void InSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_InsideTalk()

    goto Event5
}

void DoNot_ZonauMagic_WakkaCharm_HyruleDepthHatago() {

    call Npc_HyruleWestHatago005.UmayadoMasterInteractSetting()

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 5, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Outskirt'}) {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event23:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_Outskirt'})
            goto Event23
        }
      case 6:

        call Npc_HyruleWestHatago005.Attacked_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

      case 8:

        call Npc_HyruleWestHatago005.Burned_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

    }
}

void Map_CherryBlossom() {

    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HyruleDepthHatago005")})

    TwnObj_StableHostelFrame_A_01[HyruleDepthHatago].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago005_Talk01', 'Index': -1}) {
        Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1009', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1003', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HyruleDepthHatago005.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HyruleDepthHatago005', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'MoveTime': 45, 'Actor1ActorName': 'Npc_HyruleDepthHatago005', 'PosVector': [-0.9200000166893005, 1.6399999856948853, 3.369999885559082], 'AtVector': [0.009999999776482582, 1.7000000476837158, 0.5899999737739563], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago005_Talk01', 'Index': -1}) {
        Event30:
        Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1004', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotospotChallenge_Is_Available'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsCompleted_Exp'}) {
                Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1007', 'IsNotOpenIfSkipedMostRecent': False})
                Event61:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_04_IsAfter_Ready_Exp'}) {
                Event32:
                Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1008', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event61
            } else {
                Npc_HyruleDepthHatago005.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'HyruleDepthHatago', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1006', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event61
            }
        } else {
            goto Event32
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago005_Talk01', 'Index': -1, 'Value': True})
        Npc_HyruleDepthHatago005.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago005:Talk1005', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event30
    }
}
