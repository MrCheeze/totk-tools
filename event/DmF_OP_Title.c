-------- EventFlow: DmF_OP_Title --------

Actor: EventSystemActor[Title]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001[dra]
entrypoint: None()
actions: ['EventDragonMoveToRelativeTargetPos', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventChangeEnableASPartial']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'ModelFixedType': 1, 'Rotation': [0.0, -80.0, 0.0], 'Position': [200.0, 1470.0, 400.0], 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerStopInAir', 'EventTriggerPlayerRequestGlide', 'EventTriggerPlayerSetStickScaleFrame', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayerGlide', 'EventPlayerFreeMoveAnchorForTitleRole']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_OP_Title/DmF_OP_Title_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_OP_Title.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerOpenGameTitleLogo', 'EventTriggerRequestAutoSave', 'EventPrepareOpenGameTitleLogo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventSoundReleaseDucking', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[BGM_start]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor[kaze]
entrypoint: None()
actions: ['EventClothRequestExtraWind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetWindForFlowchart']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[tree]
entrypoint: None()
actions: ['EventChangeModelDisplayDistanceSkyTree', 'EventResetModelDisplayDistanceSkyTree']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[kankyomap]
entrypoint: None()
actions: ['EventTriggerSetEnableEnvMapAndSkyOcclusion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor[kankyomap].EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': False, 'ApplyToSkyOcclusion': True})

    fork {

        fork {
            GameSystemActor[kaze].EventClothRequestExtraWind({'ActorName': 'Player', 'InstanceName': '', 'IsWaitEnd': False, 'Speed': 31.0, 'Elevation': 85.0, 'Azimuth': 150.0})
        } {

            fork {
                Player.EventPlayerFreeMoveAnchorForTitleRole({'IsKeepAnm': True, 'IsCalcAngularVelocity': False, 'AccelerationDistance': 0.0, 'RotationType': 1, 'RotTargetDeg': 180.0, 'RotParam': 200.0, 'InitialVelocity': 0.0, 'DecelerationDistance': 50.0, 'TargetVelocity': 0.699999988079071, 'AnchorInstanceName': 'AnchorTitle', 'AnchorActorName': 'AnchorAction1', 'ASKeyName': 'DmF_OP_Title_Glide', 'ASKeyNameSheathed': 'DmF_OP_Title_WeaponOff', 'ASKeyNameWithWeapon': 'DmF_OP_Title_HaveWeapon', 'IsWaitEnd': False})
            } {
                GameSystemActor.EventPrepareOpenGameTitleLogo({'IsWaitEnd': True})
            } {
                Enemy_Dragon_Light_001[dra].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                EventSystemActor[Title].EventWait({'IsWaitEnd': True, 'Frames': 79})
                Enemy_Dragon_Light_001[dra].EventChangeEnableASPartial({'IsWaitEnd': False, 'IsEnable': True})
                Enemy_Dragon_Light_001[dra].EventWarpToTargetPosAndRot({'Position': [200.0, 1470.0, 400.0], 'YAngle': -80.0, 'IsWaitEnd': True})
                Enemy_Dragon_Light_001[dra].EventDragonMoveToRelativeTargetPos({'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': False, 'DecelerationStartDistance': 0.0, 'MoveSpeed': 3.0, 'TargetPos': [-1000.0, 0.0, 800.0]})
                EventSystemActor[Title].EventWait({'IsWaitEnd': True, 'Frames': 700})
                Enemy_Dragon_Light_001[dra].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -70.0, 'Position': [50.0, 1470.0, 600.0]})
                Enemy_Dragon_Light_001[dra].EventDragonMoveToRelativeTargetPos({'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': False, 'DecelerationStartDistance': 0.0, 'TargetPos': [-500.0, 0.0, 500.0], 'MoveSpeed': 4.0})
            } {
                GameSystemActor[tree].EventChangeModelDisplayDistanceSkyTree({'IsWaitEnd': True})
            }

            EventSystemActor[Title].EventWait({'IsWaitEnd': True, 'Frames': 260})
            GameSystemActor.EventTriggerOpenGameTitleLogo({'OpenOrder': 0, 'IntervalFrame': 0.0})
            GameSystemActor[tree].EventResetModelDisplayDistanceSkyTree({'IsWaitEnd': True})
            EventSystemActor[Title].EventWait({'IsWaitEnd': True, 'Frames': 360})
            Player.EventPlayerStopInAir({'EnableCalcAnm': True, 'IsWaitEnd': False})
            EventSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 91})
        }

        Player.EventPlayerGlide({'IsWaitEnd': False, 'ASCommand': 'DmF_OP_Title_Glide_To_GlideN'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'IsLoop': False, 'SceneName': 'C01-1', 'InterpolateFrame': 75.0, 'IsWaitEnd': True, 'CalcUpInInterpolate': True})
    } {
        EventSystemActor[BGM_start].EventWait({'IsWaitEnd': True, 'Frames': 24})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName2': '', 'DuckingName': 'DmF:Worldミュート(タイトルロール用)', 'CommandLife': 2})
        EventSystemActor[BGM_start].EventWait({'IsWaitEnd': True, 'Frames': 92})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_OP_Title', 'IsReleaseDucking': False, 'CommandLife': 2})
        EventSystemActor[BGM_start].EventWait({'IsWaitEnd': True, 'Frames': 1360})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'DuckingName2': '', 'DuckingName': 'DmF:Worldミュート(タイトルロール用)', 'IsImmediately': False, 'IsClearRefCount': False})
    } {

        fork {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Chemical_Wet'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Diving_Limbs'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_Snow_Distance_Gerudo'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_MiasmaAppearance_03'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_MiasmaAppearance_05'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_ThuderCloud_Hide_DragonHead'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'EftLoc_Enemy_Sign_Bird', 'KeyName': 'Always'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'FieldEnvEffect_Plus'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'FieldEnvEffect', 'ActorName': 'Camera'})
        }

        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_OP_Title_Diving', 'SLinkKey': ''})
    }

    Player.EventTriggerPlayerRequestGlide()
    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_OP_Title_Diving', 'SLinkKey': '', 'IsKill': False})
    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
    GameSystemActor[kankyomap].EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': True, 'ApplyToSkyOcclusion': True})
    GameSystemActor.EventTriggerRequestAutoSave()
    Player.EventTriggerPlayerSetStickScaleFrame({'Frame': 300.0, 'Scale': 0.20000000298023224})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}
