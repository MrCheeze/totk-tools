-------- EventFlow: FldObj_LinkHouse_M_01 --------

Actor: FldObj_LinkHouse_M_01
entrypoint: None()
actions: ['EventTriggerFldObjLinkHouseMWriteRoomIdToGameData']
queries: ['EventQueryIsExistHorseInHorseRoom']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientAssistant003
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventEntrustOutsideOwnedHorse', 'EventOpenOwnedHorseList', 'EventWaitOwnedHorseListInput', 'EventCloseOwnedHorseList', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerCloseGuideForOwnedHorseList', 'EventTriggerOpenGuideForOwnedHorseList']
queries: ['EventQueryCheckIsWildHorseAssociated', 'EventQueryIsOwnedHorseListInput', 'EventQueryTalkChoice2', 'EventQueryIsOwnedHorseOneOrNot', 'EventQueryIsExistRegisteredHorseAny']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: CustomHouseControlActor
entrypoint: None()
actions: ['EventCstmHouseCtrlRegisterHorseToLastAccessedHorseRoom', 'EventCstmHouseCtrlUnregisterHorseFromLastAccessedHorseRoom']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Check() {
    Npc_AncientAssistant003.EventTriggerParticipateEvent()
    FldObj_LinkHouse_M_01.EventTriggerFldObjLinkHouseMWriteRoomIdToGameData()
    if !FldObj_LinkHouse_M_01.EventQueryIsExistHorseInHorseRoom() {

        call NpcCameraPan({'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1004'})

        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1008', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'OutsideOwnedHorseIndex', 'DstGameDataName': 'Horse_SelectIndex', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_WearingHarness', 'Index': -1}) {
            CustomHouseControlActor.EventCstmHouseCtrlUnregisterHorseFromLastAccessedHorseRoom({'IsAutoIgnition': True, 'IsWaitEnd': True, 'IsWithHarness': False})
        } else {
            CustomHouseControlActor.EventCstmHouseCtrlUnregisterHorseFromLastAccessedHorseRoom({'IsAutoIgnition': True, 'IsWaitEnd': True, 'IsWithHarness': False})
        }
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [4238.6201171875, 316.4599914550781, -1394.3900146484375], 'AtVector': [4237.35986328125, 315.3599853515625, -1390.550048828125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1006', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_KeepHorse', 'Value': False})
    } else {

        call NpcCameraPan({'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1003'})

        if !GameSystemActor.EventQueryIsExistRegisteredHorseAny() {
            Event55:
            Npc_AncientAssistant003.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1010', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventOpenOwnedHorseList({'IsWaitEnd': True})
            GameSystemActor.EventTriggerOpenGuideForOwnedHorseList()
            GameSystemActor.EventWaitOwnedHorseListInput({'IsWaitEnd': True})
            if !GameSystemActor.EventQueryIsOwnedHorseListInput() {
                GameSystemActor.EventTriggerCloseGuideForOwnedHorseList()
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1011', 'ChoiceNumber': 2, 'ChoiceLabel1': 120, 'ChoiceLabel2': 103, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1001', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'OutsideOwnedHorseIndex', 'GameDataB': 'Horse_SelectIndex', 'Operator': 0}) {
                        GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
                    }
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'OutsideOwnedHorseIndex', 'DstGameDataName': 'Horse_SelectIndex', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
                    CustomHouseControlActor.EventCstmHouseCtrlRegisterHorseToLastAccessedHorseRoom({'IsWaitEnd': True})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'FldObj_LinkHouse_M_01', 'PosVector': [-3.059999942779541, 3.2899999618530273, 1.5199999809265137], 'AtVector': [-0.9300000071525574, 2.4700000286102295, -0.4300000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_KeepHorse'})
                    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1007', 'IsNotOpenIfSkipedMostRecent': False})
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                } else
                if !GameSystemActor.EventQueryIsOwnedHorseOneOrNot() {
                    GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1012', 'IsNotOpenIfSkipedMostRecent': False})
                } else {

                    call HorseSelectReturn()

                }
            } else {
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1012', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
          case [0, 1, 2, 3, 4, 5, 8, 9, 10]:
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1005', 'IsNotOpenIfSkipedMostRecent': False})
            Event29:
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
          case [6, 7]:
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_1002', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event29
        }
    }
}

void NpcCameraPan() {

    fork {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'MessageId', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }


    fork {

        call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_AncientAssistant003"), 'Arg_Turn': 4})

    } {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_AncientAssistant003', 'PosVector': [0.550000011920929, 2.069999933242798, 4.559999942779541], 'AtVector': [-0.20999999344348907, 1.7200000286102295, -1.6399999856948853], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void HorseSelectReturn() {
    goto Event55
}
