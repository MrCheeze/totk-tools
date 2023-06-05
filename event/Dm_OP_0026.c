-------- EventFlow: Dm_OP_0026 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerCopyRealLifeToGameDataForSpecialEvent', 'EventPlayerFirstSkyIslandSpecialEvent', 'EventPlayerWait', 'EventPlayerWarpToTargetActor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestNoAnmDie', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerSoundEnableSpMode', 'EventTriggerSoundDisableSpMode']
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
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventShowHeartGaugeDemo', 'EventCloseHeartGaugeDemo', 'EventOpenDoCommand', 'EventCloseDoCommand', 'EventCloseMinusMenu', 'EventTriggerRollOverChallengeUI', 'EventShowMap', 'EventTriggerShowMap', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_ChallengeDoor_B_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerSoundEnableSpMode', 'EventTriggerSoundDisableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0026_Obj_Zonau_ChallengeDoor_B_01.root.as', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: ['EventQuerySpecialChallengeResultState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SkyObj_GoddesStatue_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Raul
entrypoint: None()
actions: ['EventTalk', 'EventTriggerStartFadeOut', 'EventTriggerLookAtObject', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 1, 'Rotation': [0.0, -161.0, 0.0], 'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': True, 'Position': [456.6700134277344, 1573.0, 768.5900268554688], 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: Obj_SecretStone_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[raul]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[megami]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventSoundStartSound', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[StartPoint]
entrypoint: None()
actions: ['EventTriggerEmphasizeMapIcon']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[voice]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ControllerSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput']
queries: ['EventQueryWaitForKeyInputResult']
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameSystemActor.EventTriggerRequestAutoSave()
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 1, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Obj_Zonau_ChallengeDoor_B_01.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsAfter_GetZonauMajic_Exp'}) {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_IsInteracted_TempleHeartDoor'})

        fork {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': '', 'YAngle': 180.0, 'OffsetBase': 1, 'IsWaitEnd': True, 'ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'PositionOffset': [0.0, 0.0, 1.4600000381469727], 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'PosVector': [-2.430000066757202, 1.1299999952316284, 2.3399999141693115], 'AtVector': [-1.6200000047683716, 1.1100000143051147, 1.75], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            SkyObj_GoddesStatue_A_01.EventTriggerParticipateEvent()
            SkyObj_GoddesStatue_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
            Obj_Zonau_ChallengeDoor_B_01.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        } {

            call Pad()

        }


        fork {
            EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 16})
            Player.EventTriggerEmitXLink({'SLinkKey': 'PV421_01', 'ELinkKey': ''})
            EventSystemActor[voice].EventWait({'IsWaitEnd': True, 'Frames': 68})
            Player.EventTriggerEmitXLink({'SLinkKey': 'PV426_02', 'ELinkKey': ''})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'ZonauDoorOpen_Start', 'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'ZonauDoorOpen_Start_Loop', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 86})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Hand_On'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.4000000059604645})
        }

        Player.EventTriggerCopyRealLifeToGameDataForSpecialEvent({'IsRealLife': True, 'GameDataName': 'LifeForFirstSkyIslandEvent'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventShowHeartGaugeDemo({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventOpenDoCommand({'DoActionType': 57, 'IsWaitEnd': True})

        call OpenTheDoor()

        GameSystemActor.EventCloseDoCommand({'IsWaitEnd': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        switch ChallengeSystemActor.EventQuerySpecialChallengeResultState({'GameDataName': 'FirstSkyIslandEventStatus'}) {
          case 0:
            GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Demo_Eye_On'})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Mark_On', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Mark_On_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'DoorBOpen-0', 'CalcUpInInterpolate': False})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'ZonauDoorOpen_Push_1', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})

            fork {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'DoorBOpen-1', 'CalcUpInInterpolate': False})
            } {
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
            } {
                Obj_Zonau_ChallengeDoor_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Open_Start'})
            }

            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Eye_Off', 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_Off', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Mark_Off_Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'DoorBOpen-2', 'CalcUpInInterpolate': False})
            } {
                Obj_Zonau_ChallengeDoor_B_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0026_Zonau_ChallengeDoor_Open', 'SLinkKey': 'Dm_OP_0026_Zonau_ChallengeDoor_Open'})
                Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            } {
                Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ASCommand': 'ZonauDoorOpen_Open', 'UseAnmDriven': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } {
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 4.0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
                Obj_Zonau_ChallengeDoor_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OP_0026_Zonau_ChallengeDoor_Open_End'})
            }


            call SndCtrl()

          case 1:

            call GameOver()

          case 2:

            call Stop()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSky_IsActivate4thCDungeon', 'Index': -1}) {

                call SndCtrl()

            } else {

                call 1stAccess()

            }
          case 3:
            Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Off'})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'ZonauDoorOpen_Cancel_0', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerWait({'IsWaitEnd': True})
            GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSky_IsActivate4thCDungeon', 'Index': -1}) {

                call SndCtrl()

            } else {

                call 1stAccess()

            }
          case 4:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSky_IsActivate4thCDungeon', 'Index': -1}) {

                call GameOver()

            } else {

                call Stop()


                call 1stAccess()

            }
          case 5:
            Player.EventPlayerWait({'IsWaitEnd': True})
            GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})

            call SndCtrl()

        }
    } else {

        call Pad()


        call NoModoreko()

    }
}

void OpenTheDoor() {

    fork {
        Player.EventPlayerFirstSkyIslandSpecialEvent({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        ControllerSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 2})
        if !ControllerSystemActor.EventQueryWaitForKeyInputResult() {

            fork {
                Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Bar_On', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
                EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'MoveTime': 90, 'Actor1InstanceName': '', 'PosVector': [-2.7200000286102295, 1.1399999856948853, 2.549999952316284], 'AtVector': [-1.909999966621399, 1.1200000047683716, 1.9600000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.30000001192092896, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [0.0, 2.25, 8.5600004196167], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.359999895095825, 7.559999942779541], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'StartAccelerateRate': 0.10000000149011612, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 172, 'Actor1ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'PosVector': [0.0, 3.640000104904175, 14.039999961853027], 'AtVector': [0.0, 4.070000171661377, 10.630000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
                Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV429_02'})
            }

        }
    }

}

void GameOver() {
    GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [3.4600000381469727, 1.1200000047683716, -2.240000009536743], 'AtVector': [2.7799999713897705, 1.1299999952316284, -1.5099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Bar_Off', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoDead', 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'GameOverReason', 'Value': 'OpenDoorFailure', 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'DemoDeadEnd', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsAllSlot': True})
    Player.EventTriggerPlayerRequestNoAnmDie()
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_GameOver', 'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1})

    call SndCtrl()

}

void Stop() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [3.4600000381469727, 1.1200000047683716, -2.240000009536743], 'AtVector': [2.7799999713897705, 1.1299999952316284, -1.5099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Obj_Zonau_ChallengeDoor_B_01.EventPlayAS({'ASName': 'Bar_Off', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'ASCommand': 'ZonauDoorOpen_Cancel_1', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV403_00_'})
    }

    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventCloseHeartGaugeDemo({'IsWaitEnd': True})
}

void Pad() {
    Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Appear_Loop'})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Raul.EventTriggerStartFadeOut({'FadeFrame': 1})
}

void NoModoreko() {
    Obj_SecretStone_A_02.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Raul', 'PosVector': [1.2599999904632568, 2.9100000858306885, 3.3299999237060547], 'AtVector': [-0.20999999344348907, 2.7300000190734863, 0.17000000178813934], 'TargetFovy': 30.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_Raul.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Appaer', 'IsWaitEnd': True, 'IsAllSlot': False})
        Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
        Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_001_b', 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'Npc_Raul', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Raul.EventTriggerEmitXLink({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': ''})
    }

    Npc_Raul.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Obj_SecretStone_A_02', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Obj_SecretStone_A_02', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'NoModoreko_01', 'IsLoop': False, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Obj_SecretStone_A_02', 'PosVector': [-0.07000000029802322, 9.529999732971191, -14.859999656677246], 'AtVector': [0.019999999552965164, -0.07999999821186066, 0.2199999988079071], 'TargetFovy': 38.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Raul.EventTriggerRequestLookAtTheFront()
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_001_b_00', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': '', 'IsKill': False})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.6699999570846558, -2.9000000953674316], 'AtVector': [0.0, 1.6699999570846558, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [453.5091857910156, 1573.449951171875, 766.9849243164062], 'UseDemoWait': True})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void 1stAccess() {

    call Ready()


    call Voice()


    call RauruIn()


    call Megamizou()


    call PadOn()


    call Map()


    call RauruOut()


    call End()

}

void PadOn() {

    fork {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-2.6700000762939453, 2.680000066757202, -4.340000152587891], 'AtVector': [1.7899999618530273, 3.2899999618530273, -3.319999933242798], 'TargetFovy': 25.200000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    } {
        Npc_Raul.EventTriggerRequestLookAtTheFront()
    }

    Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_006_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'ShowPad', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void Map() {
    GameSystemActor.EventShowMap({'InShowIcon': True, 'ZoomLevel': 1, 'CenterPos': [384.0, 2343.0, 1250.0], 'IsShowPlayerNavi': False, 'IsShowChallenge': True, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': True})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Obj_Warp', 'Num': 1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'LookPad', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Raul.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_007_b', 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 8, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Raul.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'EndDialogOption': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_007_b_00', 'OverrideStyle': 8, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[StartPoint].EventTriggerEmphasizeMapIcon({'TargetIconType': 15, 'TargetIconName': 'WarpPos_StartIsland_WakeupAltar'})
    }

    Npc_Raul.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'EndDialogOption': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_008_b', 'OverrideStyle': 8, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        GameSystemActor.EventTriggerShowMap({'InShowIcon': True, 'IsShowPlayerNavi': False, 'IsShowChallenge': True, 'CenterPos': [402.20001220703125, 2343.0, 1638.4000244140625], 'ZoomLevel': 0})
        GameSystemActor[StartPoint].EventTriggerEmphasizeMapIcon({'TargetIconType': 9, 'TargetIconName': ''})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'MapZoomIn', 'IsIgnoreDucking': False})
    }

    Npc_Raul.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_009_b', 'EndDialogOption': 0, 'IsCloseDialog': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'OverrideStyle': 8, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'WarpToCaveOfAwake', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MainChallenge'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void RauruOut() {
    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_RaulCmnTalk', 'IsUseSuspendFade': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'LookPadOff', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Raul.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': '', 'IsKill': False})
    Npc_Raul.EventTriggerStartFadeOut({'FadeFrame': 40})
    Npc_Raul.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'DisAppaer', 'IsWaitEnd': False, 'IsAllSlot': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Raul.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void End() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfsky_IsHiddenLightSpot_HeartDoor', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSky_IsActivate4thCDungeon', 'Value': True, 'Index': -1})
    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.6699999570846558, -2.9000000953674316], 'AtVector': [0.0, 1.6699999570846558, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [453.5091857910156, 1573.449951171875, 766.9849243164062], 'UseDemoWait': True})
    }

    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void RauruIn() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_RaulCmnTalk', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-2.6700000762939453, 2.680000066757202, -4.340000152587891], 'AtVector': [1.7899999618530273, 3.2899999618530273, -3.319999933242798], 'TargetFovy': 25.200000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'TargetActorKind': 1, 'ActorName': 'Obj_Zonau_ChallengeDoor_B_01', 'YAngle': 90.0, 'PositionOffset': [0.0, 0.0, 3.0], 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'IsWaitEnd': True, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Dm_Locator[raul].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'IsWaitEnd': False, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 1.600000023841858, 0.0]})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_Raul.EventTriggerEmitXLink({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': ''})

    fork {
        Npc_Raul.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Appaer', 'IsWaitEnd': True, 'IsAllSlot': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Raul', 'TurnFaceControlType': 1})
    }

    Npc_Raul.EventTriggerRequestLookAtTheFront()
    Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_010_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_004_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Dm_Locator[megami].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ActorName': 'SkyObj_GoddesStatue_A_01', 'PositionOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True})
    Npc_Raul.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'InstanceName': 'megami', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'megami'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 60, 'Actor2ActorName': '', 'MoveTotargetPosType': 1, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-2.869999885559082, 2.740000009536743, -4.070000171661377], 'AtVector': [0.23000000417232513, 2.9600000381469727, 0.14000000059604645], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call SndCtrl()

}

void Voice() {

    fork {
        Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_003_b', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Appear_Loop', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Raul', 'PosOffset': [0.0, -0.5, 0.0], 'TurnFaceControlType': 1})
    }

    Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Raul', 'PosOffset': [0.0, -0.5, 0.0], 'IsWaitEnd': False, 'TurnFaceControlType': 0, 'KeepTalkWait': True, 'OffsetBase': 0})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
}

void Ready() {

    fork {
        Npc_Raul.EventTriggerStartFadeOut({'FadeFrame': 1})
        Npc_Raul.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
        Npc_Raul.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Appear_Loop'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Raul.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [456.6700134277344, 1572.989990234375, 768.5900268554688], 'YAngle': -130.0})
    } {
        SkyObj_GoddesStatue_A_01.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfsky_IsHiddenLightSpot_HeartDoor', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.FirstSkyIslandEventFailureOnce', 'Value': True, 'Index': -1})
    Obj_Zonau_ChallengeDoor_B_01.EventTriggerParticipateEvent()
}

void Megamizou() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-4.900000095367432, 6.949999809265137, 7.230000019073486], 'AtVector': [-1.9800000190734863, 4.539999961853027, 3.059999942779541], 'TargetFovy': 34.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Raul.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0026:Dm_OP_0026_Text_005_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void SndCtrl() {
    Obj_Zonau_ChallengeDoor_B_01.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}
