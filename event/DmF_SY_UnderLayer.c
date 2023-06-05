-------- EventFlow: DmF_SY_UnderLayer --------

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerControllerRumble', 'EventTriggerIgnoreCaveRateOcclusionCulling', 'EventWaitResourceStableForTerrainAndCave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventLaunchCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerFreeMove', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventPlayerStopInAir', 'EventWarpOnGround', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerEmitXLink', 'EventTriggerPlayerRequestParasail', 'EventTriggerRequestFullWet', 'EventPlayerHorseGetOff', 'EventPlayerClimbOff', 'EventPlayerLaunchFromWhirlpools', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic', 'EventTriggerParticipateEvent', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventTriggerEquipmentUserRequestChangeState']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_UnderLayerWater/DmF_SY_UnderLayerWater_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/UnderLayerWater_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundDisableReflectEffectSetting', 'EventTriggerSoundEnableReflectEffectSetting', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_HoleWhirlingWaves_A_04
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: FldObj_HoleWhirlingWaves_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Water() {

    call DrawnIn()


    call 1stEnterUnderLayer()


    call 1stOnGroundWater()

    Player.EventPlayerWait({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'Actor1ActorName': 'Player', 'PosVector': [-0.1899999976158142, 3.0399999618530273, -3.1500000953674316], 'AtVector': [0.0, 1.850000023841858, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Sand() {

    call DrawnInSand()


    call EnterUnderLayerSand()


    call OnGround_SandNml()

    Player.EventPlayerWait({'IsWaitEnd': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void DrawnIn() {

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SwimStateWhenDrawnIntoTheVortex', 'Index': -1}) {
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'FldObj_HoleWhirlingWaves_A_04', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                FldObj_HoleWhirlingWaves_A_04.EventTriggerParticipateEvent()
                Event36:
                Dm_Locator[0].EventWarpToTargetActor({'YAngle': 0.0, 'InstanceName': '', 'OffsetBase': 0, 'IsWaitEnd': True, 'PositionOffset': [0.0, -8.0, 0.0], 'TargetActorKind': 1, 'ActorName': 'FldObj_HoleWhirlingWaves_A_04'})
                Event96:
                Player.EventPlayerOnMotionTypeStatic()
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [0.07000000029802322, 13.640000343322754, 0.10000000149011612], 'AtVector': [-0.07000000029802322, 3.3399999141693115, 0.0], 'TargetFovy': 58.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': '', 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'EnableCameraAlpha': False})

                fork {
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Dmf_SY_UnderLayerWater_Link', 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV862'})
                } {
                    Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_UnderLayerWater_WaterFall', 'SLinkKey': 'DmF_SY_UnderLayerWater'})
                } {
                    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'InWater'})
                }

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'FldObj_HoleWhirlingWaves_A_03', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                FldObj_HoleWhirlingWaves_A_03.EventTriggerParticipateEvent()
                Dm_Locator[0].EventWarpToTargetActor({'YAngle': 0.0, 'InstanceName': '', 'OffsetBase': 0, 'IsWaitEnd': True, 'PositionOffset': [0.0, -8.0, 0.0], 'TargetActorKind': 1, 'ActorName': 'FldObj_HoleWhirlingWaves_A_03'})
                goto Event96
            } else {
                goto Event36
            }
        } else
        if !Player.EventQueryCheckPlayerState({'State': 11}) {
            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                if Player.EventQueryCheckPlayerState({'State': 6}) {
                    Player.EventPlayerClimbOff({'IsWaitEnd': True})
                }
                Event39:
                Player.EventTriggerParticipateEvent()
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player.EventPlayerOnMotionTypeStatic()
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ASCommand': 'DmF_SY_Under_Fall', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV862'})
            } else {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                goto Event39
            }
        } else {
            goto Event39
        }
    } {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
        SoundSystemActor.EventTriggerSoundDisableReflectEffectSetting()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }

    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    if Player.EventQueryCheckPlayerState({'State': 27}) {
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
    }
}

void 1stOnGroundWater() {

    fork {

        fork {
            Player.EventWarpOnGround({'IsWaitEnd': True, 'OffsetY': 7.0, 'IsIncludeWater': True, 'UseDemoWait': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            Player.EventTriggerRequestFullWet()
            Player.EventPlayerWait({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [2.950000047683716, -5.989999771118164, 5.099999904632568], 'AtVector': [0.5, -6.309999942779541, 0.9399999976158142], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 22})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'PlayerLandWater'})
    }

}

void DrawnInSand() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    } else {

        fork {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 16})
            Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_UnderLayerSand_SandFall', 'SLinkKey': 'DmF_SY_UnderLayerSand'})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Dmf_SY_UnderLayerSand_Link', 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ClothWarpMode': 0})
            SoundSystemActor.EventWait({'Frames': 35, 'IsWaitEnd': True})
            Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV862'})
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

    }
}

void EnterUnderLayerSand() {
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'EnterToUnderLayer', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
    GameSystemActor.EventTriggerIgnoreCaveRateOcclusionCulling({'Enable': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWaitResourceStableForTerrainAndCave({'IsWaitEnd': True})
    GameSystemActor.EventTriggerIgnoreCaveRateOcclusionCulling({'Enable': False})
    Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_UnderLayerSand_SandFallOut', 'SLinkKey': ''})

    fork {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerFreeMove({'IsKeepAnm': True, 'PositionType': 1, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'DecelerationDistance': 0.0, 'IsCalcAngularVelocity': False, 'RotationType': 0, 'RotParam': 0.0, 'RotTargetDeg': 0.0, 'ASKeyName': 'Fall', 'AccelerationDistance': 9.0, 'Pos': [0.0, -9.0, 0.0], 'IsWaitEnd': False, 'TargetVelocity': 0.75, 'InitialVelocity': 0.02500000037252903})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 43})
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Player', 'IsLoop': False, 'IsWaitEnd': False, 'SceneName': 'DmF_SY_UnderLayer_C01-3', 'CalcUpInInterpolate': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 58})
    }

}

void EscapeWater() {

    fork {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'EftLoc_HoleWhirlingWaves_LightPillar', 'KeyName': 'Always'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'ReactionWater_In'})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundDisableReflectEffectSetting()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'EscapeFromUnderLayer', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerOnStopMode({'StopAnm': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Dm_Locator[0].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Dm_SY_0021_CannonJump', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [0.0, 12.899999618530273, -9.300000190734863], 'AtVector': [0.0, 13.34000015258789, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerRequestFullWet()
    SoundSystemActor.EventTriggerSoundEnableReflectEffectSetting()
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerOffStopMode()

    fork {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0021_Player_JumpOut_WaterSplash', 'SLinkKey': 'Dm_SY_0021_Player_JumpOut_WaterSplash'})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Parasail', 'Num': 0, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            Player.EventPlayerLaunchFromWhirlpools({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ArrivePoint', 'ReachFrame': 70.0, 'EndAnmName': 'CannonJumpEnd', 'MoveAnmName': 'Dm_SY_0021_CannonJump'})
            Player.EventTriggerPlayerRequestParasail()
        } else {
            Player.EventPlayerLaunchFromWhirlpools({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ArrivePoint', 'ReachFrame': 70.0, 'EndAnmName': 'Dm_SY_0021_JumpEd', 'MoveAnmName': 'Dm_SY_0021_CannonJump'})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 39.400001525878906, -44.4900016784668], 'AtVector': [0.0, 27.0, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.8999999761581421})
        EventCamera.EventLaunchCamera({'IsWaitEnd': False, 'EnableControle': False, 'Offset': [0.0, -1.5, 0.0], 'OffsetFrame': 30, 'TurnbackOffsetRate': 0.30000001192092896})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'PlayerDiveWater', 'Length': 0.0})
    }

    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_HoleWhirlingWaves_LightPillar'})
}

void 1stEnterUnderLayer() {
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'EnterToUnderLayer', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    GameSystemActor.EventTriggerIgnoreCaveRateOcclusionCulling({'Enable': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWaitResourceStableForTerrainAndCave({'IsWaitEnd': True})
    GameSystemActor.EventTriggerIgnoreCaveRateOcclusionCulling({'Enable': False})
    Player.EventPlayerOffMotionTypeStatic()
    Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_UnderLayerWater_WaterFallOut'})
    Dm_Locator[1].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'IsWaitEnd': False, 'InstanceName': '', 'PositionOffset': [0.0, -2.5, 0.0], 'OffsetBase': 1, 'YAngle': 0.0})

    fork {
        Player.EventPlayerFreeMove({'IsKeepAnm': True, 'PositionType': 1, 'IsWaitEnd': True, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'DecelerationDistance': 0.0, 'IsCalcAngularVelocity': False, 'RotationType': 0, 'RotParam': 0.0, 'RotTargetDeg': 0.0, 'ASKeyName': 'Fall', 'TargetVelocity': 0.699999988079071, 'Pos': [0.0, -11.5, 0.0], 'AccelerationDistance': 11.5, 'InitialVelocity': 0.02500000037252903})
        Player.EventPlayerStopInAir({'EnableCalcAnm': True, 'IsWaitEnd': True})
        Player.EventTriggerRequestFullWet()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        SoundSystemActor.EventTriggerSoundEnableReflectEffectSetting()
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'IsWaitEnd': False, 'IsLoop': False, 'SceneName': 'DmF_SY_UnderLayer_C02-0', 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '1', 'CalcUpInInterpolate': False})
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 57})
    }

}

void OnGround_SandNml() {

    fork {

        fork {
            Player.EventWarpOnGround({'IsWaitEnd': True, 'OffsetY': 7.0, 'IsIncludeWater': True, 'UseDemoWait': True})
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            Player.EventPlayerWait({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [2.940000057220459, -4.320000171661377, -3.4800000190734863], 'AtVector': [0.0, -5.880000114440918, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        GameSystemActor[wait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    }

}
