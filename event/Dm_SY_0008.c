-------- EventFlow: Dm_SY_0008 --------

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2]
entrypoint: None()
actions: ['EventPlayAS', 'EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0008/Dm_SY_0008_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0008_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Cannon_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonLauncher_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetIsActivateCannonOwnGameData']
queries: ['EventQueryIsSameCannonNo']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonDoor_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: ['EventQueryIsCannonDoorOpen']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Accessory_SupportDevice_Acting
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [0.0, -10.0, 0.0], 'IsBindNearestActor': False}

Actor: FldObj_CannonTerminal_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonCover_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Cannon04_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Scientist_Recorder
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor[CannonPurah]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Tool': '', 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_SY_0008'}) {
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 1}) {

            call access_1()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 2}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 3}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 4}) {

            call access_4()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 5}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 6}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 7}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 8}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 9}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 10}) {

            call access_10()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 11}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 12}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 13}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 14}) {

            call access()

        } else
        if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 15}) {

            call access()

        } else {

            call access()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 1}) {

        call first_access_1()


        call Dm_BC_0014.EntryPoint0()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 2}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 3}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 4}) {

        call first_access_4()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 5}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 6}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 7}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 8}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 9}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 10}) {

        call first_access_10()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 11}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 12}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 13}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 14}) {

        call first_access()

    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 15}) {

        call first_access()

    } else {

        call first_access()

    }
}

void C01_First() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    }

}

void C03_First() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [14.199999809265137, 12.239999771118164, 20.809999465942383], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [16.049999237060547, 15.9399995803833, 22.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [17.760000228881836, 104.87999725341797, 9.819999694824219], 'AtVector': [17.190000534057617, 104.30000305175781, 9.239999771118164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 200, 'IsLinearMove': True, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.18000030517578, 104.87999725341797, 8.260000228881836], 'AtVector': [18.559999465942383, 104.30000305175781, 7.730000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 1.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.5})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    } {
        FldObj_Cannon_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        FldObj_CannonCover_A_01.EventPlayAS({'ASName': 'PreOpen', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 50})
        FldObj_Cannon_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0008_Cannon_Active', 'SLinkKey': 'Dm_SY_0008_Cannon_Active'})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 150})
        FldObj_Cannon_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OpenWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        FldObj_Cannon_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0008_Cannon_Cover_Open'})
        FldObj_CannonCover_A_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_0008_CannonCover_Open', 'ELinkKey': ''})
        FldObj_CannonCover_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            Event63:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } else {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OffWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            goto Event63
        }
    } {
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [2.6600000858306885, 4.210000038146973, 4.840000152587891], 'AtVector': [1.1799999475479126, 2.2200000286102295, 2.0899999141693115], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'PadTouchEnd_Link', 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 29})
            Accessory_SupportDevice_Acting.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Accessory_SupportDevice_Acting.EventTriggerModelUnbind()
        }

    }

}

void End_First() {
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.0, 1.8200000524520874, 1.149999976158142], 'AtVector': [-0.009999999776482582, 1.940000057220459, -2.549999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.05000000074505806, 1.850000023841858, 5.269999980926514], 'AtVector': [0.019999999552965164, 1.850000023841858, -0.029999999329447746], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 15})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void C01() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    }

}

void End() {
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.0, 1.8200000524520874, 1.149999976158142], 'AtVector': [-0.009999999776482582, 1.940000057220459, -2.549999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [-0.009999999776482582, 1.850000023841858, 5.260000228881836], 'AtVector': [-0.009999999776482582, 1.850000023841858, -0.03999999910593033], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
        }

        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 10, 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [14.199999809265137, 12.239999771118164, 20.809999465942383], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [16.049999237060547, 15.9399995803833, 22.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        FldObj_Cannon_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 50})
        FldObj_Cannon_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0008_Cannon_Active', 'SLinkKey': 'Dm_SY_0008_Cannon_Active'})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 150})
        FldObj_Cannon_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OpenWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    } {
        FldObj_CannonCover_A_01.EventPlayAS({'ASName': 'OpenWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        } else {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OffWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }
    } {
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    }

}

void first_access() {

    call C01_First()


    call C02()


    call C03_First()


    call End_First()

}

void access() {

    call C01()


    call C02()


    call C03()


    call End()

}

void End_4() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.0, 1.8200000524520874, 1.149999976158142], 'AtVector': [-0.009999999776482582, 1.940000057220459, -2.549999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [-0.009999999776482582, 1.850000023841858, 5.260000228881836], 'AtVector': [-0.009999999776482582, 1.850000023841858, -0.03999999910593033], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    Npc_Cannon04_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void access_4() {

    call C01_4()


    call C02_4()


    call C03_4()


    call End_4()

    Event33:
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Npc_Cannon04_01.DoorIsOpened()

}

void C03_4() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [14.199999809265137, 12.239999771118164, 20.809999465942383], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [16.049999237060547, 15.9399995803833, 22.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        FldObj_Cannon_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 50})
        FldObj_Cannon_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0008_Cannon_Active', 'SLinkKey': 'Dm_SY_0008_Cannon_Active'})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 150})
        FldObj_Cannon_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OpenWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OffWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    }

}

void C01_4() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Npc_Cannon04_01.EventTriggerParticipateEvent()
    Npc_Cannon04_01.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    }

}

void End_First_4() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.0, 1.8200000524520874, 1.149999976158142], 'AtVector': [-0.009999999776482582, 1.940000057220459, -2.549999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [0.05000000074505806, 1.850000023841858, 5.269999980926514], 'AtVector': [0.019999999552965164, 1.850000023841858, -0.029999999329447746], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 15})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    Npc_Cannon04_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    FldObj_CannonLauncher_A_01.EventTriggerSetIsActivateCannonOwnGameData()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void first_access_4() {

    call C01_First_4()


    call C02_4()


    call C03_First_4()


    call End_First_4()

    goto Event33
}

void C01_First_4() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Npc_Cannon04_01.EventTriggerParticipateEvent()
    Npc_Cannon04_01.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    }

}

void C03_First_4() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [14.199999809265137, 12.239999771118164, 20.809999465942383], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [16.049999237060547, 15.9399995803833, 22.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
    } {
        FldObj_Cannon_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 50})
        FldObj_Cannon_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0008_Cannon_Active', 'SLinkKey': 'Dm_SY_0008_Cannon_Active'})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 150})
        FldObj_Cannon_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OpenWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'OffWait'})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ASName': 'Open', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ASName': 'OpenWait', 'ForceFadeInFrame': -1.0})
    } {
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open'})
        FldObj_CannonSpotlight_A_01[Cannon_SpotLight_2].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'OpenWait'})
    }

}

void first_access_10() {

    call C01_First()


    call C02_10()


    call C03_First()


    call End_First()

}

void access_10() {

    call C01()


    call C02_10()


    call C03()


    call End()

}

void C02_4() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [2.6600000858306885, 4.210000038146973, 4.840000152587891], 'AtVector': [1.1799999475479126, 2.2200000286102295, 2.0899999141693115], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Cannon04_01.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Cannon04_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Notice'})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'PadTouchEnd_Link', 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 29})
            Accessory_SupportDevice_Acting.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Accessory_SupportDevice_Acting.EventTriggerModelUnbind()
        }

    }

    Npc_Cannon04_01.EventTriggerRequestLookAtTheFront()
}

void first_access_1() {

    call C01_First_1()


    call C02_1()


    call C03_First()


    call End_First()

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void access_1() {

    call C01_1()


    call C02_1()


    call C03()


    call End()

}

void C01_1() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Npc_AncientDoctor[CannonPurah].EventTriggerParticipateEvent()
    Npc_Scientist_Recorder.EventTriggerParticipateEvent()
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 2, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AncientDoctor[CannonPurah].EventPlayAS({'ASName': 'Talk_Normal', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C01_First_1() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    Npc_AncientDoctor[CannonPurah].EventTriggerParticipateEvent()
    Npc_Scientist_Recorder.EventTriggerParticipateEvent()
    if !FldObj_CannonDoor_A_01.EventQueryIsCannonDoorOpen() {
        FldObj_CannonDoor_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OnWait', 'ForceFadeInFrame': -1.0})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 54.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-1.190000057220459, 2.119999885559082, -0.6600000262260437], 'AtVector': [0.016200000420212746, 1.0645999908447266, 0.6969000101089478]})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AccessCannonTerminal', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'PadTouch_Link', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 126})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 16})
        Accessory_SupportDevice_Acting.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Weapon_R', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Activate', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        FldObj_CannonTerminal_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'FaceControlType': 1, 'IsConfront': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AncientDoctor[CannonPurah].EventPlayAS({'ASName': 'Talk_Normal', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C02_1() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [2.6600000858306885, 4.210000038146973, 4.840000152587891], 'AtVector': [1.1799999475479126, 2.2200000286102295, 2.0899999141693115], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'PadTouchEnd_Link', 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 29})
            Accessory_SupportDevice_Acting.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Accessory_SupportDevice_Acting.EventTriggerModelUnbind()
        } {
            EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 13})
            Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
            EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 45})
            Npc_AncientDoctor[CannonPurah].EventPlayAS({'ASName': 'Talk_Normal', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    }

}

void C02_10() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [2.3499999046325684, 3.740000009536743, 4.25], 'AtVector': [1.1299999952316284, 2.119999885559082, 1.9800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'PadTouchEnd_Link', 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'DgnObj_WarpPoint_A_01', 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 29})
            Accessory_SupportDevice_Acting.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Accessory_SupportDevice_Acting.EventTriggerModelUnbind()
        }

    }

}
