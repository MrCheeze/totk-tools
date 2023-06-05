-------- EventFlow: Dm_ZN_0008 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerCopyRealLifeToGameDataForSpecialEvent', 'EventPlayerZonauSpecialEvent', 'EventPlayerWait', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestNoAnmDie', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/ZonauDoorEvent/ZonauDoorEvent/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/ZonauDoorEvent.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/ZonauDoorEvent/ZonauDoorEvent/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Obj_Zonau_ChallengeDoor_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0008_Obj_Zonau_ChallengeDoor_A_01.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventShowHeartGaugeDemo', 'EventCloseHeartGaugeDemo', 'EventOpenDoCommand', 'EventCloseDoCommand', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: ['EventQuerySpecialChallengeResultState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventWait', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ControllerSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput']
queries: ['EventQueryWaitForKeyInputResult']
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void OpenedTheDoor_Finish() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Obj_Zonau_ChallengeDoor_A_01.EventTriggerParticipateEvent()
    RaumiGolem_Parts_Head.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerRequestAutoSave()
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Obj_Zonau_ChallengeDoor_A_01', 'InstanceName': '', 'YAngle': 180.0, 'OffsetBase': 1, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 1.4600000381469727], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_A_01', 'PosVector': [-2.430000066757202, 1.1299999952316284, 2.3399999141693115], 'AtVector': [-1.6200000047683716, 1.1100000143051147, 1.75], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        Obj_Zonau_ChallengeDoor_A_01.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'ZonauDoorOpen_Start', 'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'ZonauDoorOpen_Start_Loop', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 86})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'ASName': 'Hand_On', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV421_01', 'ELinkKey': ''})
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 68})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV426_02', 'ELinkKey': ''})
    }

    Player.EventTriggerCopyRealLifeToGameDataForSpecialEvent({'IsRealLife': True, 'GameDataName': 'LifeForZonauEvent'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'PlayerStatus.ZonauEventFailureOnce'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventShowHeartGaugeDemo({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventOpenDoCommand({'DoActionType': 57, 'IsWaitEnd': True})

    call OpenedTheDoor_C01()

    GameSystemActor.EventCloseDoCommand({'IsWaitEnd': False})
    GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch ChallengeSystemActor.EventQuerySpecialChallengeResultState({'GameDataName': 'ZonauEventStatus'}) {
      case 0:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_Eye_On'})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_On', 'ForceFadeInFrame': -1.0})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_On_Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'DoorOpen-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'ZonauDoorOpen_Push_1', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'SceneName': 'DoorOpen-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        } {
            Obj_Zonau_ChallengeDoor_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Open_Start'})
        }

        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Eye_Off', 'ForceFadeInFrame': -1.0})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_Off', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_Off_Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'DoorOpen-2', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Obj_Zonau_ChallengeDoor_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0008_Zonau_ChallengeDoor_Open', 'SLinkKey': 'Dm_ZN_0008_Zonau_ChallengeDoor_Open'})
            Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_OpenedTheDoor', 'Value': True, 'Index': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ASCommand': 'ZonauDoorOpen_Open', 'UseAnmDriven': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 4.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
            Obj_Zonau_ChallengeDoor_A_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_ZN_0008_Zonau_ChallengeDoor_Open_End', 'ELinkKey': ''})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_Departed_Npc_HatenoGate001', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ZonauRemains_AppearsSkyIsland'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_HatchOpened', 'Index': -1}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GotoFironeZonauRemains', 'StepName': 'Complete', 'IsWaitEnd': True})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GotoFironeZonauRemains', 'StepName': 'ZonauRemains_TouchTheHead', 'IsWaitEnd': True})
            }
            Event69:
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()

            call SndCtrl()

        } else {
            goto Event69
        }
      case [1, 4]:
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [3.4600000381469727, 1.1200000047683716, -2.240000009536743], 'AtVector': [2.7799999713897705, 1.1299999952316284, -1.5099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'ASName': 'Bar_Off', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoDead', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'GameOverReason', 'Value': 'OpenDoorFailure', 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'DemoDeadEnd', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsAllSlot': True})
        Player.EventTriggerPlayerRequestNoAnmDie()
        EventSystemActor.EventTransition({'EventName': 'DmF_SY_GameOver', 'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1})

        call SndCtrl()

      case 2:
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [3.4600000381469727, 1.1200000047683716, -2.240000009536743], 'AtVector': [2.7799999713897705, 1.1299999952316284, -1.5099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'ASName': 'Bar_Off', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})

        fork {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'ZonauDoorOpen_Cancel_1', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV403_00_'})
        }

        Player.EventPlayerWait({'IsWaitEnd': True})

        call SndCtrl()

      case 3:
        Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Off'})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'ZonauDoorOpen_Cancel_0', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerWait({'IsWaitEnd': True})

        call SndCtrl()

      case 5:
        Player.EventPlayerWait({'IsWaitEnd': True})
        GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})

        call SndCtrl()

    }
}

void OpenedTheDoor_C01() {

    fork {
        Player.EventPlayerZonauSpecialEvent({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        ControllerSystemActor.EventWaitForKeyInput({'KeyInputValue': 2, 'IsWaitEnd': True})
        if !ControllerSystemActor.EventQueryWaitForKeyInputResult() {

            fork {
                Obj_Zonau_ChallengeDoor_A_01.EventPlayAS({'ASName': 'Bar_On', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
                EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'MoveTime': 90, 'Actor1InstanceName': '', 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_A_01', 'PosVector': [-2.7200000286102295, 1.1399999856948853, 2.549999952316284], 'AtVector': [-1.909999966621399, 1.1200000047683716, 1.9600000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.30000001192092896, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_A_01', 'PosVector': [0.0, 2.25, 8.5600004196167], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.359999895095825, 7.559999942779541], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': False, 'MoveTime': 309, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_A_01', 'PosVector': [0.0, 4.539999961853027, 21.65999984741211], 'AtVector': [0.0, 4.71999979019165, 20.68000030517578], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'StartAccelerateRate': 0.10000000149011612, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
                Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV429_02'})
            }

        }
    }

}

void SndCtrl() {
    Obj_Zonau_ChallengeDoor_A_01.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}
