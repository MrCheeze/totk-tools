-------- EventFlow: Dm_BZ_0006 --------

Actor: Dm_Locator[zelda]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Chase
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventTriggerStartFadeOut', 'EventTriggerStartFadeIn', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_BZ_0006/Dm_BZ_0006_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_BZ_0006_Npc_Zelda_AncientHyrule.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetActor', 'EventPlayerStopInAir', 'EventPlayerClimbOff', 'EventPlayerHorseGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_BZ_0006/Dm_BZ_0006_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_BZ_0006_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint2() {

    call Common.AirStartUP_Player()

    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    fork {
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_BZ_0006:Dm_BZ_0006_Text_000_b', 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
        } else {

            call Common.InitPlayState({'IsRidableGetOff': False, 'IsUnequip': True})

            if !Player.EventQueryCheckPlayerState({'State': 24}) {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        }
    }

    SystemTextNPC.EventTalk({'IsCloseDialog': False, 'EndDialogOption': 4, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_BZ_0006:Dm_BZ_0006_Text_001_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void EntryPoint5() {
    Npc_Zelda_Black_Chase.EventTriggerParticipateEvent()

    call CloseUp()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void CloseUp() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            }
            Event1:
            Dm_Locator[zelda].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Zelda_Black_Chase', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 10.0], 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0})
            Npc_Zelda_Black_Chase.EventTriggerEmitXLink({'ELinkKey': 'Dm_BZ_0006_05_Zelda_Black_Disappear_First', 'SLinkKey': 'Dm_BZ_0006_05_00_Zelda_Black_Disappear_First'})
            Npc_Zelda_Black_Chase.EventTriggerStartFadeOut({'FadeFrame': 8})
            if !Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})

                call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
                Npc_Zelda_Black_Chase.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Event13:

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [-1.1699999570846558, 0.9300000071525574, 1.7300000190734863], 'AtVector': [0.17000000178813934, 1.409999966621399, -0.23999999463558197], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                } {
                    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'zelda', 'YAngle': 165.0, 'IsWaitEnd': False, 'PositionOffset': [1.2999999523162842, 0.0, -5.0], 'UseDemoWait': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'DemoLookAround_Ed', 'ClothWarpMode': 0})
                } {
                    Npc_Zelda_Black_Chase.EventTriggerStartFadeIn({'FadeFrame': 1})
                    Npc_Zelda_Black_Chase.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'DemoWait', 'ForceFadeInFrame': -5.0})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'zelda', 'StartAccelerateRate': 0.5, 'PosVector': [2.309999942779541, 1.4800000190734863, -6.690000057220459], 'AtVector': [1.1799999475479126, 1.4600000381469727, -4.0], 'TargetFovy': 9.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'StartAccelerateRate': 0.0, 'MoveTime': 30, 'Actor1InstanceName': 'zelda', 'PosVector': [2.3299999237060547, 1.4800000190734863, -6.650000095367432], 'AtVector': [1.3200000524520874, 1.4600000381469727, -3.950000047683716], 'TargetFovy': 9.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                } {
                    Npc_Zelda_Black_Chase.EventWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 1, 'IsWaitEnd': False, 'ActorName': 'Dm_Locator', 'InstanceName': 'zelda', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                    Npc_Zelda_Black_Chase.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'DemoWait', 'ForceFadeInFrame': -5.0})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Zelda_Black_Chase.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'LookBack', 'ForceFadeInFrame': -1.0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                    Npc_Zelda_Black_Chase.EventTriggerStartFadeOut({'FadeFrame': 10})
                } {
                    Npc_Zelda_Black_Chase.EventTriggerEmitXLink({'ELinkKey': 'Dm_BZ_0006_05_Zelda_Black_Disappear', 'SLinkKey': 'Dm_BZ_0006_05_01_Zelda_Black_Disappear'})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 1.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'PosVector': [-155.47300720214844, 391.29901123046875, -880.7949829101562], 'AtVector': [-157.10499572753906, 390.9580078125, -878.4409790039062], 'TargetFovy': 42.04899978637695, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 40, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                } {
                    Npc_Zelda_Black_Chase.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                }

                Npc_Zelda_Black_Chase.EventWarpToTargetActor({'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': '', 'PositionOffset': [0.0, -20.0, 0.0], 'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Player'})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
                EventRequestActor.EventTriggerSetEventBool({'Bool': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
            } else {

                call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
                Npc_Zelda_Black_Chase.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Player.EventPlayerPlayASForFlowchart({'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'DemoLookAround_St', 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
                goto Event13
            }
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
            goto Event1
        }
    } else {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        goto Event1
    }
}
