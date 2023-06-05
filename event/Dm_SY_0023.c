-------- EventFlow: Dm_SY_0023 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventWarpOnGround', 'EventPlayerWarpToNearAnchorWithRidableActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventTriggerRequestAutoSave']
queries: ['EventQueryCheckCurrentBancWorkPath']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_CDungeon_Practice
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventEnemyCDungeonLunch', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0023/Dm_SY_0023_Enemy_Zonau_Golem_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0023_Enemy_Zonau_Golem_Junior.root.as', 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call C01()


    call C02_C03()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void C01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'FadeType': 2, 'IsForceFadeTime': False})
    Enemy_CDungeon_Practice.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Sleep'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [6.21999979019165, 2.740000009536743, 23.600000381469727], 'AtVector': [-2.950000047683716, 1.159999966621399, 0.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.130000114440918, 2.049999952316284, 12.0], 'AtVector': [-0.25, 1.309999942779541, -0.6499999761581421], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Wait', 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerStart', 'IsWaitEnd': True, 'UseDemoWait': False})
    }

}

void C02_C03() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'RootType': 3, 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'Enemy_CDungeon_Practice', 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C03-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'TargetActorName': 'Enemy_CDungeon_Practice', 'CalcUpInInterpolate': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4.28000020980835, 1.4600000381469727, -3.8499999046325684], 'AtVector': [2.5899999141693115, 1.6200000047683716, -0.4099999964237213], 'TargetFovy': 35.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4.28000020980835, 1.4600000381469727, -3.8499999046325684], 'AtVector': [2.5899999141693115, 1.6200000047683716, -0.4099999964237213], 'TargetFovy': 40.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 155, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_CDungeon_Practice.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0023_Enm_Zonau_Golem_Eye_Open', 'SLinkKey': ''})
        Enemy_CDungeon_Practice.EventEnemyCDungeonLunch({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SmallDungeonBattle_Tutorial', 'CommandLife': 2, 'IsReleaseDucking': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
        Enemy_CDungeon_Practice.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0023_Enm_Zonau_Golem_String_Start', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 64})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
        GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/Dm_SY_0023:talk00'})
    } {
        GameSystemActor[2].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Byeen'})
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 173})
        GameSystemActor[2].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doka'})
    }

    Enemy_CDungeon_Practice.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Wait'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'Frames': 7, 'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void Practice() {
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon121'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call BowSlow()

    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon122'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call GuardJust()

    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon123'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call ItemThrow()

    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon124'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call WeaponsThrow()

    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon126'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call HeadShot()

    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon129'}) {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint_129()


        call SurpriseAttack()

    } else
    if GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon136'}) in [0, 1] {
        Enemy_CDungeon_Practice.EventTriggerParticipateEvent()

        call EntryPoint0()


        call SideStep()

    }
}

void EntryPoint_129() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})


    call C01_129()


    call C02_C03_129()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void C01_129() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'FadeType': 2, 'IsForceFadeTime': False})
    Enemy_CDungeon_Practice.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Sleep'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-2.950000047683716, 1.159999966621399, 0.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [6.21999979019165, 6.739999771118164, 23.600000381469727], 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-0.25, 1.309999942779541, -0.6499999761581421], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'CameraCollisionMode': 0, 'PosVector': [3.130000114440918, 6.050000190734863, 12.0], 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerStart', 'UseDemoWait': True})
        Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'IsAllSlot': False, 'ClothWarpMode': 0})
    }

}

void C02_C03_129() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'RootType': 3, 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'Enemy_CDungeon_Practice', 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C03-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'TargetActorName': 'Enemy_CDungeon_Practice', 'CalcUpInInterpolate': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'PosVector': [6.150000095367432, 7.789999961853027, -6.670000076293945], 'AtVector': [4.650000095367432, 6.03000020980835, -3.5999999046325684], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 35.900001525878906, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 155, 'Actor1ActorName': 'Enemy_CDungeon_Practice', 'PosVector': [6.150000095367432, 7.789999961853027, -6.670000076293945], 'AtVector': [4.650000095367432, 6.03000020980835, -3.5999999046325684], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.599998474121094, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_CDungeon_Practice.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0023_Enm_Zonau_Golem_Eye_Open', 'SLinkKey': ''})
        Enemy_CDungeon_Practice.EventEnemyCDungeonLunch({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SmallDungeonBattle_Tutorial', 'CommandLife': 2, 'IsReleaseDucking': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
        Enemy_CDungeon_Practice.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0023_Enm_Zonau_Golem_String_Start', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 64})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/Dm_SY_0023:talk00'})
    } {
        GameSystemActor[2].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Byeen'})
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 173})
        GameSystemActor[2].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doka'})
    }

    Enemy_CDungeon_Practice.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Wait'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 5.239999771118164, -5.300000190734863], 'AtVector': [0.0, 3.1500000953674316, -0.4300000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'Frames': 7, 'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void WeaponsThrow() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 14})

}

void ItemThrow() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk02', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 28})

}

void BowSlow() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk06_01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 2})

}

void HeadShot() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk07_01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 2})

}

void SurpriseAttack() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 18})

}

void GuardJust() {
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk05', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 16})

}

void SideStep() {
    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/BattleTutorial:talk00', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 20})

}
