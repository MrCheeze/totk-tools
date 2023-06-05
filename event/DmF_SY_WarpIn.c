-------- EventFlow: DmF_SY_WarpIn --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerControllerRumble', 'EventTriggerPlayerKeepRideOnGolem', 'EventTriggerSetEnableEnvMapAndSkyOcclusion']
queries: ['EventQuerySmallDungeonType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventTriggerSetExtraOrderInput', 'EventTriggerPlayerSetModelWarpEffect', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayerUnequip', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerStopInAir', 'EventTriggerPlayerRequestKeepCrouch', 'EventWaitCreationFinishedEquipment', 'EventTriggerPlayerClimbOff', 'EventPlayerOffSurfaceVelocityFloatWater', 'EventPlayerOnSurfaceVelocityFloatWater']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter[0]
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'DuckingName2': 'DmF:Bgmミュート(フェード長い)'})
    GameSystemActor.EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': False, 'ApplyToSkyOcclusion': False})
    Player.EventPlayerOffSurfaceVelocityFloatWater()
    Player.EventTriggerPlayerRequestKeepCrouch()
    if !Player.EventQueryCheckPlayerState({'State': 4}) {
        if !Player.EventQueryCheckPlayerState({'State': 17}) {
            if !Player.EventQueryCheckPlayerState({'State': 3}) {
                if !Player.EventQueryCheckPlayerState({'State': 18}) {
                    if !Player.EventQueryCheckPlayerState({'State': 5}) {
                        Event59:
                        Player.EventPlayerOnStopMode({'StopAnm': True})
                        Event17:
                        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
                        Event62:

                        call EmitEfeect_Start()

                        if !Player.EventQueryCheckPlayerState({'State': 4}) {
                            Event34:
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 35.0, 'MoveTime': 20, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'AtVector': [0.0, 0.800000011920929, 0.0], 'PosVector': [3.0, 3.0, 4.199999809265137], 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                            Event31:
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                                if !Player.EventQueryCheckPlayerState({'State': 18}) {
                                    if !Player.EventQueryCheckPlayerState({'State': 5}) {
                                        Event25:
                                        Player.EventTriggerPlayerSetModelWarpEffect({'FadeFrame': 120.0, 'WarpEffectSetType': 1})
                                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                                        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_WarpIn_Warp', 'SLinkKey': ''})
                                        Event18:
                                        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_WarpIn', 'IsIgnoreDucking': True})
                                        Event0:
                                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
                                        if !Player.EventQueryCheckPlayerState({'State': 4}) {
                                            Event47:

                                            fork {
                                                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'AtVector': [0.0, 4.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'TargetFovy': 55.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                            } {
                                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                                                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
                                            }

                                            Event38:
                                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
                                            Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_WarpIn_Warp', 'SLinkKey': '', 'IsKill': False})
                                            if Player.EventQueryCheckPlayerState({'State': 6}) {
                                                Player.EventTriggerPlayerClimbOff()
                                            }
                                            switch GameSystemActor.EventQuerySmallDungeonType() {
                                              case [0, 2, 3]:
                                                Event1:
                                                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'BootEventName': 'DmF_SY_WarpOut', 'NextStartPos': 'StartPosName', 'NextBanc': 'NextBanc', 'IsStartOnEvent': False, 'NextPosition': 'StartPos', 'NextStartRot': 'StartRot', 'FadePattern': 0})
                                                Player.EventPlayerOffStopMode()
                                                Player.EventPlayerOnSurfaceVelocityFloatWater()
                                                GameSystemActor.EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': True, 'ApplyToSkyOcclusion': True})

                                                call EmitEfeect_End()

                                              case 1:

                                                call ChangePouch.ReturnNoVoice()

                                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                                Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
                                                goto Event1
                                            }
                                        } else
                                        if !Player.EventQueryCheckPlayerState({'State': 23}) {
                                            if !Player.EventQueryPlayerCheckRideHorse({'Type': 10, 'IsRidingAny': False, 'ActorFileName': ''}) {
                                                goto Event47
                                            } else {

                                                fork {
                                                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                                                    GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
                                                } {
                                                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [5.0, 1.0, 6.199999809265137], 'AtVectorSetType': 1, 'AtVector': [0.0, 5.199999809265137, 0.0], 'MoveTime': 60, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'TargetFovy': 55.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                                }

                                            }
                                            goto Event38
                                        } else {
                                            goto Event47
                                        }
                                    } else
                                    if !Player.EventQueryCheckPlayerState({'State': 12})
                                    && !Player.EventQueryCheckPlayerState({'State': 3}) {
                                        Event24:
                                        Player.EventTriggerPlayerSetModelWarpEffect({'FadeFrame': 120.0, 'WarpEffectSetType': 1})
                                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                                        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_WarpIn_Warp', 'SLinkKey': ''})
                                        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_WarpIn', 'IsIgnoreDucking': True})
                                        Player.EventPlayerOffStopMode()
                                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'Warp', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
                                        Player.EventPlayerOnStopMode({'StopAnm': False})
                                        goto Event0
                                    } else {
                                        goto Event25
                                    }
                                } else {
                                    goto Event25
                                }
                            } else
                            if !Player.EventQueryPlayerCheckRideHorse({'Type': 14, 'IsRidingAny': False, 'ActorFileName': ''}) {
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                                goto Event18
                            } else
                            if !Player.EventQueryCheckPlayerState({'State': 30})
                            && !Player.EventQueryCheckPlayerState({'State': 32}) {
                                goto Event24
                            } else {
                                goto Event25
                            }
                        } else
                        if !Player.EventQueryCheckPlayerState({'State': 23}) {
                            if !Player.EventQueryPlayerCheckRideHorse({'Type': 10, 'IsRidingAny': False, 'ActorFileName': ''}) {
                                goto Event34
                            } else {
                                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'PosVector': [3.0, 2.0, 4.199999809265137], 'AtVectorSetType': 3, 'AtVector': [0.0, -0.20000000298023224, 0.0], 'TargetFovy': 35.0, 'MoveTime': 20, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                            }
                            goto Event31
                        } else {
                            goto Event34
                        }
                    } else
                    if !Player.EventQueryCheckPlayerState({'State': 36}) {
                        Player.EventPlayerUnequip({'IsWaitEnd': True})
                        if !Player.EventQueryCheckPlayerState({'State': 12}) {
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        } else {
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Crouch', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        }
                        Player.EventPlayerOnStopMode({'StopAnm': False})
                        goto Event62
                    } else {
                        goto Event59
                    }
                } else {
                    goto Event17
                }
            } else {
                Player.EventPlayerWait({'IsWaitEnd': True})
                goto Event62
            }
        } else {
            goto Event59
        }
    } else {
        Player.EventTriggerSetExtraOrderInput({'ExtraOrder': 2})
        if !Player.EventQueryCheckPlayerState({'State': 32}) {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
        }
        if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Event72:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'HorseWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Event68:
            Player.EventPlayerOnStopMode({'StopAnm': True})
            goto Event62
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 1}) {
            goto Event72
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 12}) {
            goto Event72
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 4}) {
            goto Event72
        }
        goto Event68
    }
}

void EmitEfeect_Start() {

    fork {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Diving_WindResistance_Vertical'})
    } {
        EventEffectEmitter[0].EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Diving_WindResistance_Horizontal'})
    }

}

void EmitEfeect_End() {

    fork {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Diving_WindResistance_Vertical'})
    } {
        EventEffectEmitter[0].EventEffectDeleteELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Diving_WindResistance_Horizontal'})
    }

}
