-------- EventFlow: Dm_SK_0006 --------

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventDragonEndRailMove', 'EventDragonRotateFixHorizontal', 'EventTriggerDragonCancelProhibitDropItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0006/Dm_SK_0006_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0006_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerMasterSwordSpecialEvent', 'EventTriggerCopyStaminaToGameDataForSpecialEvent', 'EventTriggerModelBindWithDependency', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestParasail', 'EventTriggerClearModelBindAndDependency', 'EventPlayerFreeMove', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0006/Dm_SK_0006_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0006_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventOpenDoCommand', 'EventCloseDoCommand', 'EventOpenStaminaGaugeDemo', 'EventCloseStaminaGaugeDemo', 'EventOpenInstantTips', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryMasterSwordChallengeResultState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart', 'Event_SetRelativeWindForFlowchart', 'Event_ResetRelativeWindForFlowchart', 'Event_SetDisableLayerChangingForFlowchart', 'Event_ResetDisableLayerChangingForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[shindou]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ControllerSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call pre()


    call C01()


    call C02()


    call C03()

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'SceneName': 'C01', 'RootType': 3, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventDragonRotateFixHorizontal()
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-Enemy_Dragon_Light-A-0_Grab', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ASCommand': 'C01-Link-A-0_Grab', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 124})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': 'Dm_SK_0006_MasterSwordShine', 'SLinkKey': ''})
    } {
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 100})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Small'})
    } {
        SoundSystemActor.EventWait({'Frames': 52, 'IsWaitEnd': True})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV426_02', 'ELinkKey': ''})
    }

}

void C02() {
    EventWorldManagerController.Event_SetDisableLayerChangingForFlowchart()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C02', 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsWaitEnd': False, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'C02-Enemy_Dragon_Light-A-0', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C02-Link-A-0_Wait', 'IsWaitEnd': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'ASCommand': 'C03-Link-A-0_DoragonRodeo1_Fail', 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'Elevation': 90.0, 'IsImmTrans': True, 'Speed': 15.0, 'IsWaitEnd': False, 'Azimuth': 0.0})
    } {
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_Doon'})
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.5, 'RumbleCall': 'Demo_Large_Dooon'})
    }

    EventWorldManagerController.Event_ResetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': False})
}

void C03() {
    EventWorldManagerController.Event_SetRelativeWindForFlowchart({'IsWaitEnd': False, 'WindScale': 20.0})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C03-Enemy_Dragon_Light-A-0_Move', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C03-Link-A-0_DoragonRodeoStart', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventWorldManagerController.Event_ResetDisableLayerChangingForFlowchart()
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C03-00', 'InterpolateFrame': 0.0, 'IsLoop': True, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    GameSystemActor.EventOpenDoCommand({'DoActionType': 58, 'IsWaitEnd': True})
    GameSystemActor.EventOpenStaminaGaugeDemo({'IsWaitEnd': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        ControllerSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 2})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C03-01', 'InterpolateFrame': 10.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C03-Enemy_Dragon_Light-A-0_Rampage', 'ForceFadeInFrame': -1.0})
        } {
            EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': True})
        } {
            SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_SK_0006'})
        }

    } {
        Player.EventPlayerMasterSwordSpecialEvent({'IsWaitEnd': True})
    }

    GameSystemActor.EventCloseStaminaGaugeDemo({'IsWaitEnd': True})
    GameSystemActor.EventCloseDoCommand({'IsWaitEnd': True})
    Player.EventTriggerCopyStaminaToGameDataForSpecialEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    switch ChallengeSystemActor.EventQueryMasterSwordChallengeResultState() {
      case 0:

        call C04()


        call C05()


        call C06()

      case [1, 2, 3, 4]:

        call C04_Fail()

        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_001', 'InstanceName': ''})

        fork {
            Player.EventPlayerFreeMove({'PositionType': 1, 'ASKeyName': 'Jump', 'InitialVelocity': 0.44999998807907104, 'AccelerationDistance': 50.0, 'TargetVelocity': 5.0, 'DecelerationDistance': 30.0, 'IsWaitEnd': True, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotationType': 0, 'RotParam': 0.0, 'RotTargetDeg': 0.0, 'Pos': [0.0, 30.0, 0.0], 'IsCalcAngularVelocity': False, 'IsKeepAnm': True})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Parasail', 'Num': 0, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Player.EventTriggerPlayerRequestParasail()
            }
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Enemy_Dragon_Light_001.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0})
            Enemy_Dragon_Light_001.EventDragonEndRailMove()
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.23999999463558197, 11.449999809265137, -3.200000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.7000000476837158, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        call Common.SetPlayerCameraOffsetDiffToEventCamera()

    }
}

void C04() {
    Enemy_Dragon_Light_001.EventDragonEndRailMove()
    Enemy_Dragon_Light_001.EventTriggerDragonCancelProhibitDropItem()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Enemy_Dragon_Light_001', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'SceneName': 'C04', 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C04-Enemy_Dragon_Light-A-0_RampageEnd', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C04-Link-A-0_Loop', 'ClothWarpMode': 0})
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV728_00'})
    } {
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 192})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 2.0})
    } {
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0006_MasterSword_Aura_Finish'})
    }

    Enemy_Dragon_Light_001.EventDragonRotateFixHorizontal()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'TargetActorName': 'Enemy_Dragon_Light_001', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsReferenceRootOnce': True, 'SceneName': 'C06', 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'ASName': 'C06-Enemy_Dragon_Light-A-0_Move', 'IsAllSlot': True, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        GameSystemActor.EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWait', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 0, 'TurnFaceControlType': 1})
    Weapon_Sword_070_ForGrabEvent.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SK_0006_MasterSwordShine', 'SLinkKey': '', 'IsKill': False})
    Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}

void pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Enemy_Dragon_Light_001.EventTriggerParticipateEvent()
    Enemy_Dragon_Light_001.EventDragonEndRailMove()
    Player.EventTriggerCopyStaminaToGameDataForSpecialEvent()
    Player.EventTriggerModelBindWithDependency({'ActorName': 'Enemy_Dragon_Light_001', 'BoneName': 'Forehead_Link', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
}

void C05() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)'})
    EventWorldManagerController.Event_ResetRelativeWindForFlowchart({'IsWaitEnd': False})
    EventWorldManagerController.Event_SetDisableLayerChangingForFlowchart()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'SceneName': 'C05', 'TargetActorName': 'Enemy_Dragon_Light_001', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'C05-Enemy_Dragon_Light-A-0_Up', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C05-Link-A-0_Loop', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    }

    Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    EventWorldManagerController.Event_ResetDisableLayerChangingForFlowchart()
}

void C04_Fail() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_SK_0006', 'IsUseSuspendFade': False})
    EventWorldManagerController.Event_ResetRelativeWindForFlowchart({'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsWaitEnd': False, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'SceneName': 'C04-01', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'C04-Enemy_Dragon_Light-A-0_ShakeHead', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C04-Link-A-0_Fail', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_Doon'})
        EventSystemActor[shindou].EventWait({'IsWaitEnd': True, 'Frames': 28})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.5, 'RumbleCall': 'Demo_Large_Dooon'})
    }

    Weapon_Sword_070_ForGrabEvent.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SK_0006_MasterSwordShine', 'SLinkKey': '', 'IsKill': False})
    GameSystemActor.EventOpenInstantTips({'IsWaitEnd': True, 'InstantTipwType': 36})
}
