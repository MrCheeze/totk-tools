-------- EventFlow: KorokCarryPassenger_Pair --------

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventLookAtTargetCamera', 'EventLookAtStartKorokCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: KorokCarryPassenger_Pair
entrypoint: None()
actions: ['EventTalk', 'EventKorokCarrySetInProgress', 'EventKorokCarryGetGoalPos', 'EventKorokCarryStoreIsInProgress', 'EventKorokCarrySetLookIKTargetNone', 'EventKorokCarrySetLookIKTargetPlayer', 'EventKorokCarryWaitSleep', 'EventKorokCarryChimneyEmphasizeStart', 'EventKorokCarryChimneyEmphasizeEnd', 'EventKorokCarryChimneySetValid', 'EventKorokCarrySetLookIKTargetActor']
queries: ['EventQueryHaveTalked', 'EventQueryKorokCarryIsInProgress', 'EventQueryKorokCarryIsClear', 'EventQueryKorokCarryIsInClearDist', 'EventQueryKorokCarryEnableCameraAtGoal']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventSetForbidEnergyGaugeMax', 'EventTriggerEraseActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerStopInAir']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsClear() {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="KorokCarryPassenger_Pair")})

        KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetNone({'IsWaitEnd': True})
        KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'}) {
                Event48:
                KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk03', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk16', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            goto Event48
        }
    } else
    if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsInClearDist() {

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="KorokCarryPassenger_Pair"), 'Arg_Turn': 4})

        KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
        KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk03', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})

        call KorokCarry_Destination.KorokCarry_Arrived_FromStart()

    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="KorokCarryPassenger_Pair")})

        KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetNone({'IsWaitEnd': True})

        call Camera_StartKorok()

        if !KorokCarryPassenger_Pair.EventQueryHaveTalked() {
            KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
            KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk11', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            Event36:

            call KorokCarry_CommonTalk()

        } else {
            KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk10', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
            KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk14', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk28', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event36
        }
    }
}

void KorokCarry_Hand() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="KorokCarryPassenger_Pair"), 'Arg_Turn': 0})

    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetNone({'IsWaitEnd': True})

    call Camera_StartKorok()

    KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk04', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
    if !KorokCarryPassenger_Pair.EventQueryHaveTalked() {
        KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk12', 'IsNotOpenIfSkipedMostRecent': False})
        Event0:

        call KorokCarry_CommonTalk()

    } else {
        KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk14', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
        KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk28', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event0
    }
}

void KorokCarry_CommonTalk() {
    KorokCarryPassenger_Pair.EventKorokCarryStoreIsInProgress({'IsWaitEnd': True})
    if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsInProgress() {
        KorokCarryPassenger_Pair.EventKorokCarryWaitSleep({'IsWaitEnd': True})
        GameSystemActor.EventSetForbidEnergyGaugeMax()
        Event26:
        KorokCarryPassenger_Pair.EventKorokCarryGetGoalPos({'IsWaitEnd': True})
        if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsInProgress() {
            if !KorokCarryPassenger_Pair.EventQueryKorokCarryEnableCameraAtGoal() {
                Event55:
                KorokCarryPassenger_Pair.EventKorokCarryChimneyEmphasizeStart({'IsWaitEnd': True})
                KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetActor({'IsWaitEnd': True, 'TargetActorName': 'KorokCarry_Destination'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                EventCamera.EventTriggerCameraSavePoint()
                EventCamera.EventLookAtTargetCamera({'IsWaitEnd': True, 'TargetFovy': 50.0, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'CameraCollisionMode': 0, 'TargetActorName': 'KorokCarry_Destination', 'CamPos': [0.0, 4.0, 0.0], 'MovingTime': 30.0})
                if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsInProgress() {
                    Event8:
                    KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk29', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
                    Event58:
                    if !KorokCarryPassenger_Pair.EventQueryKorokCarryIsInProgress() {
                        if !KorokCarryPassenger_Pair.EventQueryKorokCarryEnableCameraAtGoal() {
                            Event63:
                            KorokCarryPassenger_Pair.EventKorokCarrySetLookIKTargetPlayer({'IsWaitEnd': True})
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                            KorokCarryPassenger_Pair.EventKorokCarryChimneyEmphasizeEnd({'IsWaitEnd': True})
                            Event24:
                            KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk30', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            goto Event24
                        }
                    } else {
                        goto Event63
                    }
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    fork {
                        KorokCarryPassenger_Pair.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/KorokCarryPassenger_Talk:Talk29', 'ASName': 'Wait', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    }

                    goto Event58
                }
            } else {
                goto Event8
            }
        } else {
            goto Event55
        }
    } else {
        GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'GoalKorokAnchor', 'Radius': 8.0, 'Height': 3.0, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': True})
        KorokCarryPassenger_Pair.EventKorokCarrySetInProgress({'IsWaitEnd': True})
        KorokCarryPassenger_Pair.EventKorokCarryWaitSleep({'IsWaitEnd': True})
        KorokCarryPassenger_Pair.EventKorokCarryChimneySetValid({'IsWaitEnd': True})
        goto Event26
    }
}

void Camera_StartKorok() {
    EventCamera.EventLookAtStartKorokCamera({'IsWaitEnd': True, 'TargetFovy': 50.0, 'LatShiftRange': 20.0, 'LongShiftRange': 20.0, 'CamPos': [0.0, 3.0, 4.0], 'MovingTime': 15.0, 'CameraCollisionMode': 2})
}
