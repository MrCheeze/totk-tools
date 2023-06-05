-------- EventFlow: DmF_SY_HideCharaDiscovery --------

Actor: HiddenKorok_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerAppearHiddenKorok', 'EventTriggerSetAppearOwnGameData', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerHiddenKorokTurnToPlayer', 'EventTriggerRequestLookAtTheFront', 'EventHiddenKorokWaitInPlayEvent', 'EventTriggerSetHaveTalked', 'EventTriggerRequestRelocateRoundHiddenKorok']
queries: ['EventQueryHiddenKorokPlacementType', 'EventQueryHiddenKorokHideType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: ['EventQueryIsKorokComplete']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerPlayerRequestKeepLifting', 'EventTriggerParticipateEvent', 'EventPlayerOnStopMode', 'EventTriggerPlayerRequestParasail', 'EventCameraCollisionOffLiftingActor', 'EventCameraCollisionResetLiftingActor', 'EventDoNothing', 'EventPlayerTurnAndLookNow']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void DmF_SY_HideCharaDiscovery() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Player.EventTriggerPlayerRequestKeepLifting()
    HiddenKorok_EventStarter.EventTriggerHiddenKorokTurnToPlayer()
    HiddenKorok_EventStarter.EventTriggerRequestLookAtTheFront()

    fork {

        call StopAir()

    } {
        EventCamera.EventDoNothing({'IsWaitEnd': False})
        HiddenKorok_EventStarter.EventHiddenKorokWaitInPlayEvent({'IsWaitEnd': True})
    }

    HiddenKorok_EventStarter.EventTriggerRequestRelocateRoundHiddenKorok()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player.EventCameraCollisionOffLiftingActor()
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 2, 'PosVector': [0.0, 1.315000057220459, 1.781499981880188], 'AtVectorSetType': 2, 'AtVector': [0.0, 0.6499999761581421, 0.0], 'TargetFovy': 70.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_HideCharaDiscovery', 'CommandLife': 2, 'IsReleaseDucking': False})
    HiddenKorok_EventStarter.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_HideCharaDiscovery_HiddenKorok_Appear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if HiddenKorok_EventStarter.EventQueryHiddenKorokPlacementType() {
        HiddenKorok_EventStarter.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    }
    HiddenKorok_EventStarter.EventTriggerAppearHiddenKorok()
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
    if !HiddenKorok_EventStarter.EventQueryHiddenKorokPlacementType() {
        HiddenKorok_EventStarter.EventPlayAS({'ASName': 'Surprised', 'IsWaitEnd': True, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        HiddenKorok_EventStarter.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Event3:
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        HiddenKorok_EventStarter.EventTriggerSetAppearOwnGameData()
        HiddenKorok_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

        call Npc_HiddenKorokGround.Greetings()


        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_KorokNuts', 'IsSuccess': True})


        call Npc_HiddenKorokGround.AfterGreeting()

        if !GameSystemActor.EventQueryIsKorokComplete() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'OldKorok_FirstTalk', 'Index': -1}) {
                SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:CompTalk01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Npc_HiddenKorokGround:CompTalk02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event43:
            Player.EventCameraCollisionResetLiftingActor()

            fork {
                if !Player.EventQueryCheckPlayerState({'State': 5}) {
                    if !Player.EventQueryCheckPlayerState({'State': 15}) {
                        Event47:
                        Player.EventDoNothing({'IsWaitEnd': True})
                    } else {
                        Event55:
                        Player.EventPlayerTurnAndLookNow({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 1, 'OffsetBase': 0, 'IsWaitEnd': True, 'TurnFaceControlType': 0, 'ActorName': ''})
                    }
                } else
                if !Player.EventQueryCheckPlayerState({'State': 7}) {
                    goto Event55
                } else {
                    goto Event47
                }
            } {
                if !HiddenKorok_EventStarter.EventQueryHiddenKorokHideType({'HideType': 18}) {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'PosVector': [3.1600000858306885, 4.730000019073486, -6.170000076293945], 'AtVector': [0.0, 0.0, 0.0]})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [0.0, 3.0, -3.0], 'AtVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'AtVectorSetType': 1, 'TargetFovy': 50.0, 'Actor2ActorName': 'Player', 'PosVectorSetType': 4, 'Actor1ActorName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'MoveTime': 0})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 1.850000023841858, -5.340000152587891], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30})
                }
            }

        } else {
            goto Event43
        }
    } else {
        HiddenKorok_EventStarter.EventPlayAS({'ASName': 'Surprised', 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
        HiddenKorok_EventStarter.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Wait_Fly'})
        goto Event3
    }
}

void StopAir() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerOnStopMode({'StopAnm': True})
        Player.EventTriggerPlayerRequestParasail()
    } else {
        Player.EventTriggerParticipateEvent()
    }
}
