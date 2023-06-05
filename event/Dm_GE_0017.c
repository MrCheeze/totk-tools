-------- EventFlow: Dm_GE_0017 --------

Actor: Enemy_DungeonBoss_Gerudo[Boss1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0023_Boss.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0017/Dm_GE_0017_Enemy_DungeonBoss_Gerudo/workspace.pp__ModelProject.gyml', 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventSageWarpToNearAnchor', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventTriggerTargetClearSlotInfo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02[Boss1Nest1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02[Boss1Nest2]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetPosAndRot', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_04[Boss1Wall]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[c02_pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor[Npc_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call c01()


    call c02()


    call c03()

}

void pre() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_LargeDungeonBoss_Gerudo_First', 'IsUseSuspendFade': False})

    fork {
        FldObj_Gerudo_ZombieNest_A_02[Boss1Nest1].EventTriggerParticipateEvent()
    } {
        FldObj_Gerudo_ZombieNest_A_02[Boss1Nest2].EventTriggerParticipateEvent()
    } {
        Enemy_DungeonBoss_Gerudo[Boss1].EventTriggerParticipateEvent()
    } {
        FldObj_Gerudo_ZombieNest_A_04[Boss1Wall].EventTriggerParticipateEvent()
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerParticipateEvent()
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerTargetClearSlotInfo({'Target': 0})
    } {
        Dm_Locator[c02_pos].EventWarpToTargetPosAndRot({'Position': [-4354.97021484375, 145.83999633789062, 3448.360107421875], 'IsWaitEnd': True, 'YAngle': 0.0})
    }

}

void c01() {

    fork {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Enemy_DungeonBoss_Gerudo', 'Actor1InstanceName': 'Boss1', 'PosVector': [-6.159999847412109, 5.329999923706055, 12.390000343322754], 'AtVector': [-0.6399999856948853, 0.9100000262260437, 4.320000171661377], 'TargetFovy': 58.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Enemy_DungeonBoss_Gerudo', 'Actor1InstanceName': 'Boss1', 'PosVector': [-6.21999979019165, 5.150000095367432, 12.390000343322754], 'AtVector': [-0.46000000834465027, 2.4100000858306885, 3.759999990463257], 'TargetFovy': 58.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 150, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_DungeonBoss_Gerudo[Boss1].EventPlayAS({'Partial': '', 'IsAllSlot': True, 'ASName': 'c01_Getup', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 195})
    }

    Enemy_DungeonBoss_Gerudo[Boss1].EventWarpToTargetPosAndRot({'Position': [-4371.25390625, 158.82130432128906, 3441.030029296875], 'YAngle': -12.5, 'IsWaitEnd': False})
}

void c02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'c02_01-0', 'IsReferenceRootOnce': True, 'IsWaitEnd': False, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 0, 'TargetActorInstanceName': '', 'TargetActorName': '', 'IsIgnoreRootRot': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_DungeonBoss_Gerudo[Boss1].EventPlayAS({'ASName': 'c02_Roar', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
    } {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


        call Warp_PlayerAndSage()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Enemy_DungeonBoss_Gerudo[Boss1].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0017_Enm_DungeonBoss_Gerudo_Roar', 'SLinkKey': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_GoroGoro'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 68})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 107})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Camera_Converge00'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 148})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void c03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.5099999904632568, 1.2699999809265137, 1.3200000524520874], 'AtVector': [-0.3700000047683716, 1.2799999713897705, 1.1299999952316284], 'TargetFovy': 52.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_DungeonBoss_Gerudo[Boss1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GE_0017:Talk_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventDoNothing({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DungeonBoss1OK'})

    fork {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_GE_0017:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': False})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Lv3'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Lv2'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Lv1'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Max_Lv3'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Max_Lv2'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_oasis003', 'KeyName': 'ThunderAttack_Max_Lv1'})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void Warp_PlayerAndSage() {

    fork {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'AnchorAction2', 'InstanceName': 'GerudoSageBoss1Pos'})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'TalkWait'})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerLookAtObject({'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'ActorName': '', 'WorldPos': [-4393.5361328125, 150.00230407714844, 3487.466064453125], 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4365.5810546875, 130.64300537109375, 3460.1298828125], 'YAngle': -55.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsAllSlot': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'WorldPos': [-4393.5361328125, 150.00230407714844, 3487.466064453125], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}
