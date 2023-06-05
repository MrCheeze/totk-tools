-------- EventFlow: Dm_OT_0009 --------

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerRequestFullWet', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundStartSound', 'EventTriggerSoundStopSound', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    if !Player.EventQueryCheckPlayerState({'State': 10})
    && !Player.EventQueryCheckPlayerState({'State': 13})
    && !Player.EventQueryCheckPlayerState({'State': 21})
    && !Player.EventQueryCheckPlayerState({'State': 11})
    && !Player.EventQueryCheckPlayerState({'State': 18}) {
        Event21:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        Dm_Locator.EventWarpToTargetPosAndRot({'Position': [-579.7999877929688, 132.00999450683594, 1532.050048828125], 'IsWaitEnd': True, 'YAngle': 144.552001953125})

        fork {

            fork {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'RootType': 1, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
            } {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Connect_FirstIsland_NearWater'}) {
                    if Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
                        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'WaitDamage', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    }
                    Event11:
                    Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
                } else {
                    goto Event11
                }
            } {
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Zonau_BlockMaster_CoreRegistBreakDown', 'Length': 0.0})
            } {
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'C01_Explosion', 'IsIgnoreDucking': False})
            }


            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-572.530029296875, 132.74000549316406, 1519.3499755859375], 'AtVector': [-574.77001953125, 133.10000610351562, 1523.280029296875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 156})
                SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'C02_Waterfall', 'GroupName': '', 'FadeFrame': -1})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'PosVector': [-572.530029296875, 132.74000549316406, 1519.3499755859375], 'AtVector': [-574.77001953125, 133.10000610351562, 1523.280029296875], 'TargetFovy': 45.099998474121094, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
            } {
                SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'C01_WaterLevel_Drop', 'GroupName': '', 'FadeFrame': -1})
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'C02_Waterfall', 'IsIgnoreDucking': False})
                EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 170})
            } {
                Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0009_WaterSplash', 'SLinkKey': ''})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Golem_Large', 'Length': 0.0})
                GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Middle'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 3.0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Horse_Small'})
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 3.0})
            }

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Connect_FirstIsland_NearWater'}) {
                if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 5}) {
                    Event33:
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.1899999976158142, 1.1100000143051147, -4.449999809265137], 'AtVector': [0.0, 1.7999999523162842, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    Event1:
                    Player.EventPlayerOffMotionTypeStatic()
                    GameSystemActor.EventTriggerRequestAutoSave()
                } else
                if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
                    Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Dm_OT_0009_Link', 'UseDemoWait': False})
                    goto Event33
                } else
                if !Player.EventQueryCheckPlayerState({'State': 10})
                && !Player.EventQueryCheckPlayerState({'State': 13})
                && !Player.EventQueryCheckPlayerState({'State': 21})
                && !Player.EventQueryCheckPlayerState({'State': 11})
                && !Player.EventQueryCheckPlayerState({'State': 18}) {
                    Player.EventTriggerRequestFullWet()

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.1899999976158142, 1.1100000143051147, -4.449999809265137], 'AtVector': [0.0, 1.7999999523162842, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    } {
                        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-570.2589111328125, 124.9229965209961, 1517.4229736328125], 'YAngle': -35.899269104003906, 'UseDemoWait': True})
                        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'WaitDamage', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    }

                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ASCommand': 'ShakeOffWater', 'ForceFadeFrame': 8.0, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 16.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    goto Event1
                } else {

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [-0.3100000023841858, 7.269999980926514, -6.079999923706055], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    } {
                        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'Fall', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                    }

                }
            } else
            if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
                Player.EventDoNothing({'IsWaitEnd': False})
            } else {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'WaitDamage', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.1899999976158142, 1.1100000143051147, -4.449999809265137], 'AtVector': [0.0, 1.7999999523162842, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'C01_WaterLevel_Drop', 'IsIgnoreDucking': False})
        }

        goto Event1
    } else {
        Player.EventPlayerOnMotionTypeStatic()
        EventCamera.EventTriggerCameraSavePoint()
        goto Event21
    }
}
