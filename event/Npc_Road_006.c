-------- EventFlow: Npc_Road_006 --------

Actor: Npc_Road_006
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos', 'EventTriggerBalloonMessage', 'EventDisableRecentTalkFlag', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Road_007
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventNPCChangePostureWithAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos', 'EventDisableRecentTalkFlag', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventWait', 'EventTriggerNPCChangePosture']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventWait']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryIsOwnedHorseNear']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave', 'EventClearActorsAroundAnchor']
queries: ['EventQueryIsDistanceBetweenActorsClose', 'EventQueryCheckIsWildHorseAssociated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_BaseCampSoldier_Hylia013
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[ScraClearMini]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[ScraClearGerudo]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_oasis024[Meeting(Actor3)]
entrypoint: Meeting(Actor3)
actions: ['EventPlayAS', 'EventTalk', 'EventDisableRecentTalkFlag']
queries: []
params: None

Actor: Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)]
entrypoint: Npc_Road_006_CreateGerudo_Talk_Main(Actor3)
actions: ['EventPlayAS', 'EventTalk', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag']
queries: []
params: None

Actor: Npc_oasis024[Npc_Road_006_Talk03_Talk_Main(Actor3)]
entrypoint: Npc_Road_006_Talk03_Talk_Main(Actor3)
actions: []
queries: []
params: None

Actor: Npc_oasis024[Npc_Road_006_Talk03_Talk_Chario_Main(Actor3)]
entrypoint: Npc_Road_006_Talk03_Talk_Chario_Main(Actor3)
actions: []
queries: []
params: None

void Talk() {
    Event3:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Spearker1ActorName': 'Npc_Road_006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker2InstanceName': ''})

    Npc_Road_006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Road_007.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GoronGuide_Talk01', 'Index': -1}) {
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_006', 'InstanceName': '', 'IsCheckInstanceName': False}) {
            Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event17:
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event115:
            Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1016', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_006.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_Road_007', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1018', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventTriggerCameraSavePoint()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

            fork {
                Npc_Road_007.EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'InstanceName': 'look_to_kakariko', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'IsWaitEnd': True, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
                Player.EventTriggerPlayerLookAtObject({'ActorName': 'DesignateMatrixActor', 'InstanceName': 'look_to_kakariko', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'TurnFaceControlType': 1})
            }

            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [352.8599853515625, 119.0199966430664, 1077.6300048828125], 'AtVector': [353.489990234375, 119.12000274658203, 1077.56005859375], 'TargetFovy': 50.0})
            Npc_Road_007.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [349.7261047363281, 115.27100372314453, 1081.10400390625], 'YAngle': 179.40499877929688})
            Npc_Road_006.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [347.23590087890625, 115.30390167236328, 1081.333984375], 'YAngle': 154.656494140625})
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case 0:
                Event122:
                Npc_Road_007.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventTriggerPlayerRequestLookAtTheFrontLock()

                fork {
                    EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [347.2099914550781, 117.02999877929688, 1076.530029296875], 'AtVector': [349.239990234375, 116.52999877929688, 1083.300048828125], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Npc_Road_007.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 3, 'ActorName': 'Npc_Road_006', 'ResetArriveTransformFixed': False})
                } {
                    Npc_Road_006.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
                } {
                    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [345.44000244140625, 115.33000183105469, 1076.1300048828125], 'YAngle': 170.0})
                    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
                } {
                    GameSystemActor.EventClearActorsAroundAnchor({'IsSweepOut': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'LinkWarp_AfterZoronaEvent', 'Radius': 5.0, 'Height': 4.0, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'IsWaitEnd': False})
                    if Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
                        if !Player.EventQueryIsOwnedHorseNear({'Distance': 15.0}) {
                            Event304:
                            LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [340.9800109863281, 115.36000061035156, 1073.31005859375]})
                        } else
                        if GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 15.0}) in [0, 1, 2, 3, 4, 5, 6, 8, 9, 10] {
                            goto Event304
                        }
                    }
                }

                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1010', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Road_006.EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'WorldPos': [344.82000732421875, 117.30000305175781, 1077.52001953125], 'ResetArriveTransformFixed': False})
                Npc_Road_007.EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'WorldPos': [344.82000732421875, 117.30000305175781, 1077.52001953125], 'ResetArriveTransformFixed': False})
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1020', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Road_006.EventTriggerRequestLookAtTheFront()
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_Road_007.EventTriggerRequestLookAtTheFront()
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                fork {
                    EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'PosVector': [345.0400085449219, 117.02999877929688, 1082.5799560546875], 'AtVector': [348.80999755859375, 117.12000274658203, 1076.5799560546875], 'TargetFovy': 40.0, 'MoveTotargetPosType': 0, 'StartAccelerateRate': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 100, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 10})
                } {
                    Npc_Road_006.EventAIScheduleMoveToPos({'IsWaitEnd': False, 'IsAlignPos': False, 'IsTurnToRot': False, 'DesiredGear': 1, 'ASName': 'Walk', 'Rot': 0.0, 'Pos': [357.46148681640625, 119.39859771728516, 1038.2340087890625], 'ForceIsNotAlignmentWaitPosition': False})
                    Npc_Road_007.EventAIScheduleMoveToPos({'DesiredGear': 1, 'IsTurnToRot': False, 'IsAlignPos': False, 'IsWaitEnd': False, 'ASName': 'Walk', 'Rot': 0.0, 'Pos': [352.1564025878906, 115.22470092773438, 1069.6839599609375], 'ForceIsNotAlignmentWaitPosition': False})
                }

                GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isTalked_KakarikoTraveller', 'Index': -1, 'Value': True})
                if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
                    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [345.44000244140625, 115.33000183105469, 1076.1300048828125], 'YAngle': 170.0})
                    Event234:
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.21999979019165], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
                    GameSystemActor.EventTriggerRequestAutoSave()
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } else {
                    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [345.44000244140625, 115.33000183105469, 1076.1300048828125], 'YAngle': 170.0})
                    if !Player.EventQueryIsOwnedHorseNear({'Distance': 15.0}) {
                        Event233:
                        LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [340.9800109863281, 115.36000061035156, 1073.31005859375]})
                        goto Event234
                    } else
                    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 15.0}) {
                      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10]:
                        goto Event233
                      case 7:
                        goto Event234
                    }
                }
              case 1:
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1011', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event122
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event122
            }
        } else {
            Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event17
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_006', 'InstanceName': '', 'IsCheckInstanceName': False}) {
        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1017', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1008', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1012', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'ActorName': 'Npc_Road_006', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1013', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_006.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_Road_007', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1021', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1022', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1014', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_006.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk1015', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    goto Event115
}

void PairTalk_Start() {
    goto Event3
}

void isTalked_KakarikoTraveller_Talk() {
    Event181:
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event184:
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_006', 'InstanceName': '', 'IsCheckInstanceName': False}) {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Road_006_Talk04'}) {
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2010', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Road_006_Talk04'}) {
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case 1:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Road_006', 'ActorNameB': 'Npc_Road_007', 'CheckDistance': 5.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': ''}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Road_006_Talk04'}) {

                call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Spearker1ActorName': 'Npc_Road_006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker2InstanceName': ''})


                fork {
                    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2014', 'IsPlayASAllSlot': False, 'ASName': 'Rest', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
                    Npc_Road_006.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
                }

                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Road_006.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Road_007.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2017', 'ASName': 'Rest', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Arg_Turn': 3, 'Spearker1ActorName': 'Npc_Road_006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker2InstanceName': ''})

                if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_006', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2010', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event49:
                    Npc_Road_007.EventNPCChangePostureWithAS({'Posture': 0, 'IsWaitEnd': True})
                    Npc_Road_007.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        Npc_Road_007.EventWait({'IsWaitEnd': True, 'Frames': 10})
                        Npc_Road_007.EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'InstanceName': 'look_to_kakariko2', 'IsConfront': False, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    } {
                        Npc_Road_006.EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'InstanceName': 'look_to_kakariko2', 'IsConfront': False, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    } {
                        Player.EventWait({'Frames': 15, 'IsWaitEnd': True})
                        Player.EventPlayerTurnAndLook({'ActorName': 'DesignateMatrixActor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'InstanceName': 'look_to_kakariko2', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                    }

                    EventCamera.EventTriggerCameraSavePoint()
                    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [1112.68994140625, 121.5199966430664, 577.989990234375], 'AtVector': [1113.280029296875, 121.69999694824219, 578.780029296875], 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1, 8]:
                        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event33:
                        Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2006', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_Road_007.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Road_006', 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        } {
                            Npc_Road_006.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Road_007', 'FaceControlType': 1, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        } {
                            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
                            Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Road_006', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                        } {
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'ReviseMode': 0, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
                            EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'Spearker1ActorName': 'Npc_Road_006', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_Road_007'})
                        }

                        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2007', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2008', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_Road_007.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                        Npc_Road_006.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        Npc_Road_007.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2009', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_Road_006.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
                        } {
                            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
                            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Road_007'})
                        } {
                            Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2012', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }

                        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Road_006_Talk01'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Road_006_Talk04'})
                        Npc_Road_007.EventTriggerNPCChangePosture({'Posture': 3, 'IsPlayCurrentAS': False})
                      case [2, 3, 4, 5, 6, 7]:
                        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2011', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event33
                    }
                } else {
                    Npc_Road_006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk2001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event49
                }
            }
        } else
        goto Event184
    }
}

void chario_talk_from_isTalkedTraveller_Talked() {
    goto Event181
}

void chario_balloon_from_isTalked_KakarikoTraveller_Talked() {
    Npc_Road_007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Balloon2001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void chario_balloon_from_Near() {
    Npc_Road_007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Balloon1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void BaseCamp_CreateGoronGuide_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Road_006', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker3ActorName': 'Npc_BaseCampSoldier_Hylia013', 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Actor3': ActorIdentifier(name="Npc_BaseCampSoldier_Hylia013"), 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': ''})


    fork {
        Npc_Road_006.EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_Road_007', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'ActorName': 'Npc_Road_006', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_006', 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_BaseCampSoldier_Hylia013.EventNPCTurnToTarget({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Road_006', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True, 'OffsetBase': 1, 'PosOffset': [-2.25, 0.0, 0.0], 'FaceControlType': 2})
    } {
        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
    } {
        Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_006', 'ResetArriveTransformFixed': False})
    } {
        Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_Road_007.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'InstanceName': '', 'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
    Npc_Road_007.EventWait({'Frames': 30, 'IsWaitEnd': True})
    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4004', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_BaseCampSoldier_Hylia013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4011', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5]:
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 6, 7, 8]:
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4012', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        Npc_Road_007.EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': False, 'Target': 3, 'ActorName': 'Npc_Road_006', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_006', 'ResetArriveTransformFixed': False})
    }


    fork {
        Npc_BaseCampSoldier_Hylia013.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Road_007', 'ResetArriveTransformFixed': False})
    } {
        Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk4006', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GoronGuide_Talk01', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
}

void GerudoEntrance_Near_Chario() {
    Npc_Road_007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void isTalked_KakarikoTraveller_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 6, 7] {
        Npc_Road_006.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_08', 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_Road_006_CreateGerudo_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeRuby'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_CreateGerudo_Talk_ScraClearMini'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_CreateGerudo_Talk_ScraClearGerudo'})
    }
}

void Npc_Road_006_CreateGerudo_Near() {
    Npc_Road_006.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Npc_Road_006_Talk03_Near() {
    Event168:
    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
        Npc_Road_006.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_Road_006_Talk03_Talk() {
    Event267:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeRuby'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_Talk03_Talk_ScraClearMini'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_Talk03_Talk_ScraClearGerudo'})
    }
}

void Npc_Road_006_Talk03_Talk_Chario() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeRuby'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_Talk03_Talk_Chario_ScraClearMini'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_Road_006_Talk03_Talk_Chario_ScraClearGerudo'})
    }
}

void Npc_Road_006_Talk03_Near_Chario() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 1:
        Npc_Road_007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3]:
        Npc_Road_007.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_05', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Meeting() {

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_Road_006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Actor3': 'Actor3', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName'})

    Npc_oasis024[Meeting(Actor3)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Road_007.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Road_007.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'InstanceName': 'Spearker3InstanceName', 'ActorName': 'Spearker3ActorName'})
    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis024[Meeting(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_006.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'ActorName': 'Npc_Road_007', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_007.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_Road_006', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Road_006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_Road_007.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_oasis024[Meeting(Actor3)].EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void BaseCamp_CreateGoronGuide_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 6, 7, 8] {
        Npc_Road_006.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_06', 'NotOverriddenByInterestBalloon': False})
    }
}

void Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 6, 7, 8] {
        Npc_Road_006.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Road_006:Near_07', 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_Road_006_CreateGerudo_Talk_Main() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_006_Talk02', 'Index': -1}) {

        call Npc_Road_006_Talk03_Talk()

    } else {

        call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_Road_006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_007', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Road_006"), 'Actor2': ActorIdentifier(name="Npc_Road_007"), 'Actor3': 'Actor3', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName'})

        Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Road_007.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Road_007.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'InstanceName': 'Spearker3InstanceName', 'ActorName': 'Spearker3ActorName'})
        Npc_Road_007.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_006', 'InstanceName': '', 'IsCheckInstanceName': False}) {
            Npc_Road_006.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'ActorName': 'Npc_Road_007', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event23:
            Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_007.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_007.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Spearker3ActorName', 'InstanceName': 'Spearker3InstanceName', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_006.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Spearker3ActorName', 'InstanceName': 'Spearker3InstanceName', 'EnableAutomaticallyPlayWaitASAfterTurn': True})

            fork {
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_Road_007', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }

            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Road_006_Talk02'})
            Npc_Road_006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
            Npc_Road_007.EventDisableRecentTalkFlag({'IsWaitEnd': True})
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Spearker3ActorName', 'InstanceName': 'Spearker3InstanceName'}) {
            Npc_oasis024[Npc_Road_006_CreateGerudo_Talk_Main(Actor3)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event23
    }
}

void Npc_Road_006_CreateGerudo_Talk_ScraClearMini() {

    call Npc_Road_006_CreateGerudo_Talk_Main({'Spearker3ActorName': 'Npc_oasis024', 'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearMini"), 'Spearker3InstanceName': 'ScraClearMini'})

}

void Npc_Road_006_CreateGerudo_Talk_ScraClearGerudo() {

    call Npc_Road_006_CreateGerudo_Talk_Main({'Spearker3ActorName': 'Npc_oasis024', 'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearGerudo"), 'Spearker3InstanceName': 'ScraClearGerudo'})

}

void Npc_Road_006_Talk03_Talk_Main() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1]:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Road_006', 'ActorNameB': 'Npc_Road_007', 'CheckDistance': 5.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': ''})
        && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Road_006', 'CheckDistance': 5.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'ActorNameB': 'Spearker3ActorName', 'InstanceNameB': 'Spearker3InstanceName'}) {

            call Meeting({'Actor3': 'Actor3', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName'})

        } else {
            Event143:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        goto Event143
    }
}

void Npc_Road_006_Talk03_Talk_ScraClearGerudo() {

    call Npc_Road_006_Talk03_Talk_Main({'Spearker3ActorName': 'Npc_oasis024', 'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearGerudo"), 'Spearker3InstanceName': 'ScraClearGerudo'})

}

void Npc_Road_006_Talk03_Talk_ScraClearMini() {

    call Npc_Road_006_Talk03_Talk_Main({'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearMini"), 'Spearker3InstanceName': 'ScraClearMini', 'Spearker3ActorName': 'Npc_oasis024'})

}

void Npc_Road_006_Talk03_Talk_Chario_Main() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1]:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Road_006', 'ActorNameB': 'Npc_Road_007', 'CheckDistance': 5.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': ''})
        && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Road_006', 'CheckDistance': 5.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'ActorNameB': 'Spearker3ActorName', 'InstanceNameB': 'Spearker3InstanceName'}) {

            call Meeting({'Actor3': 'Actor3', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName'})

        } else {
            Event153:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        goto Event153
    }
}

void Npc_Road_006_Talk03_Talk_Chario_ScraClearMini() {

    call Npc_Road_006_Talk03_Talk_Chario_Main({'Spearker3ActorName': 'Npc_oasis024', 'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearMini"), 'Spearker3InstanceName': 'ScraClearMini'})

}

void Npc_Road_006_Talk03_Talk_Chario_ScraClearGerudo() {

    call Npc_Road_006_Talk03_Talk_Chario_Main({'Spearker3ActorName': 'Npc_oasis024', 'Actor3': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearGerudo"), 'Spearker3InstanceName': 'ScraClearGerudo'})

}

void Npc_Road_006_Talk03_NearActorsTalk() {
    goto Event267
}

void Npc_Road_006_Talk03_NearActorsNear() {
    goto Event168
}
