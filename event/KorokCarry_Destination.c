-------- EventFlow: KorokCarry_Destination --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventLookAtTargetCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: KorokCarry_Destination
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventNPCTurnToObjectGreeting', 'EventKorokCarryGoalKorokOnClear', 'EventKorokCarrySetLookIKTargetActor', 'EventNPCTurnToTarget']
queries: ['EventQueryKorokCarryIsClear', 'EventQueryKorokCarryIsInClearDist', 'EventQueryKorokCarryIsNearClearDist']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerRequestAutoSave']
queries: ['EventQueryIsKorokComplete']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: KorokCarry_EventStarter
entrypoint: None()
actions: ['EventKorokCarryDoOnClear1', 'EventKorokCarryDoOnClear2']
queries: ['EventQueryKorokCarryIsInStartKorokWarpArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToGameDataSafePos', 'EventWarpOnGround', 'EventPlayerHorseGetOff']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    if !KorokCarry_Destination.EventQueryKorokCarryIsClear() {

        call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 3})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {
                Event13:
                KorokCarry_Destination.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                KorokCarry_Destination.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk19', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            goto Event13
        }
    } else
    if !KorokCarry_Destination.EventQueryKorokCarryIsInClearDist() {

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="KorokCarry_Destination"), 'Arg_Turn': 1})

        Event49:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KorokCarry_IsClearAtLeastOnce'}) {
            KorokCarry_Destination.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk26', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            KorokCarry_Destination.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk27', 'IsNotOpenIfSkipedMostRecent': False})
        }

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_KorokNuts_Bundle_A'})


        call Npc_HiddenKorokGround.AfterGreeting_KorokCarry()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {
                Event23:
                KorokCarry_Destination.EventTalk({'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KorokCarry_IsClearAtLeastOnce'})
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            KorokCarry_EventStarter.EventKorokCarryDoOnClear1({'IsWaitEnd': True})
            if !KorokCarry_EventStarter.EventQueryKorokCarryIsInStartKorokWarpArea() {
                Player.EventPlayerWarpToGameDataSafePos({'SafePosGameDataVector3': 'SafePos_ForPlayerWarp', 'TargetPosGameDataVector3': 'TargetPos_ForPlayerWarp', 'IsWaitEnd': True, 'UseDemoWait': True})
                Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
                Event43:
                KorokCarry_EventStarter.EventKorokCarryDoOnClear2({'IsWaitEnd': True})
                KorokCarry_Destination.EventKorokCarryGoalKorokOnClear({'IsWaitEnd': True})
                GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
                GameSystemActor.EventTriggerRequestAutoSave()
                GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                if !GameSystemActor.EventQueryIsKorokComplete() {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'OldKorok_FirstTalk', 'Index': -1}) {
                        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:CompTalk01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:CompTalk02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                }
            } else {
                goto Event43
            }
        } else {
            goto Event23
        }
    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="KorokCarry_Destination")})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk20', 'IsNotOpenIfSkipedMostRecent': False})
        if !KorokCarry_Destination.EventQueryKorokCarryIsNearClearDist() {
            Event4:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk21', 'IsNotOpenIfSkipedMostRecent': False})
            if !KorokCarry_Destination.EventQueryKorokCarryIsNearClearDist() {
                Event5:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk22', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                KorokCarry_Destination.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'MoveFrame': 0, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                goto Event5
            }
        } else {
            KorokCarry_Destination.EventKorokCarrySetLookIKTargetActor({'TargetActorName': 'KorokCarryPassenger_Pair', 'IsWaitEnd': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventTriggerCameraSavePoint()
            EventCamera.EventLookAtTargetCamera({'IsWaitEnd': True, 'TargetFovy': 50.0, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'CameraCollisionMode': 0, 'CamPos': [0.0, 4.0, 0.0], 'MovingTime': 30.0, 'TargetActorName': 'KorokCarryPassenger_Pair'})
            goto Event4
        }
    }
}

void KorokCarry_Arrived_FromStart() {
    KorokCarry_Destination.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    KorokCarry_Destination.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
    KorokCarry_Destination.EventNPCTurnToObjectGreeting({'GreetType': 3, 'IsWaitEnd': True, 'TurnType': 3})
    goto Event49
}

void Near() {
    if KorokCarry_Destination.EventQueryKorokCarryIsClear()
    && !KorokCarry_Destination.EventQueryKorokCarryIsInClearDist() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/KorokCarryPassenger_Talk:Near03', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}
