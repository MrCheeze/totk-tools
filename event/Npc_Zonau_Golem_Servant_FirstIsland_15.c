-------- EventFlow: Npc_Zonau_Golem_Servant_FirstIsland_15 --------

Actor: Npc_Zonau_Golem_Servant_FirstIsland_15
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerClimbOff', 'EventPlayerTalk']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_15")})

    if !Npc_Zonau_Golem_Servant_FirstIsland_15.EventQueryHaveTalked() {
        if !Npc_Zonau_Golem_Servant_FirstIsland_15.EventQueryIsOnRecentTalkFlag() {
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_03', 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfSky_IsTeachedAboutLightBall'}) {
                if !Npc_Zonau_Golem_Servant_FirstIsland_15.EventQueryIsOnRecentTalkFlag() {
                    Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event18:

                fork {
                    Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_04', 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'LightBallBud_Small', 'Actor1InstanceName': 'LightFlower_EventLookAt', 'PosVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'PosVector': [0.0, 4.0, -9.0], 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                }


                fork {
                    Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_07', 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                }

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_IsTeachedAboutLightBall'})
            }
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Event6:
        Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_05', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_01', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event18
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Npc_Zonau_Golem_Servant_FirstIsland_15_Suspend() {
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }

    fork {
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_15.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_15:talk_06', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_15")})

    goto Event6
}
