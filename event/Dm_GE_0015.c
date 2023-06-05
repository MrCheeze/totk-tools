-------- EventFlow: Dm_GE_0015 --------

Actor: Npc_Gerudo_Queen_Young[Dungeon]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNPCTurnToTarget', 'EventAIScheduleMoveToPos', 'EventTriggerLookAtObject', 'EventTriggerChangeAIScheduleEquipState', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_SubWeapon': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0015/Dm_GE_0015_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0015_Npc_Gerudo_Queen_Young.root.as', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon_EquipmentState': 0, 'IsWorld': False, 'Rotation': [0.0, 0.0, 0.0], 'Position': [100.0, -15.0, 100.0], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0015/Dm_GE_0015/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0015.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWaitUpdate', 'EventEventFadeIn', 'EventEventFadeOut', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0015/Dm_GE_0015_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0015_Npc_Zelda_AncientHyrule.root.as', 'IsGrounding': True, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventWait', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_SunazarashiSP_C_NoMove[Pyramid]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Sage_Soul_Zonau
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()

}

void C01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_GE_0015', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventTriggerParticipateEvent()
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -61.004859924316406, 'Position': [-4214.9501953125, 148.87350463867188, 3276.511962890625]})
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Gerudo_Queen_Young[Dungeon].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -53.046138763427734, 'Position': [-4144.10986328125, 150.58250427246094, 3265.60693359375]})
        Npc_Gerudo_Queen_Young[Dungeon].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Gerudo_Queen_Young[Dungeon].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    } {
        Npc_Zelda_Black_Event.EventTriggerParticipateEvent()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 80, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-4244.89990234375, 148.5800018310547, 3337.85009765625], 'AtVector': [-4248.6298828125, 148.75, 3341.610107421875], 'TargetFovy': 34.400001525878906, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-4254.2998046875, 149.3800048828125, 3347.27001953125], 'AtVector': [-4258.0400390625, 149.5500030517578, 3351.030029296875], 'MoveTime': 0, 'TargetFovy': 37.400001525878906, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_Gerudo_Queen_Young[Dungeon].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-4215.97705078125, 152.51600646972656, 3309.4599609375], 'YAngle': -49.60919189453125})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-4233.10595703125, 148.46189880371094, 3333.322021484375], 'YAngle': -149.1356964111328, 'IsWaitEnd': False, 'UseDemoWait': True})
    }

    Npc_Gerudo_Queen_Young[Dungeon].EventTriggerLookAtObject({'ActorName': 'Npc_Zelda_Black_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})

    fork {
        Npc_Gerudo_Queen_Young[Dungeon].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait_No_Move'})
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-4254.2998046875, 149.3800048828125, 3347.27001953125], 'AtVector': [-4258.0400390625, 149.5500030517578, 3351.030029296875], 'TargetFovy': 34.400001525878906, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.5, 'MoveTime': 70, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-4230.56005859375, 150.92019653320312, 3322.758056640625], 'YAngle': -51.109500885009766, 'UseDemoWait': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventPlayerMove({'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsWaitEnd': False, 'WorldPos': [-4234.22607421875, 149.97349548339844, 3326.4560546875]})
    }

}

void C03() {

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 0, 'PosVector': [-4226.89990234375, 153.5, 3318.780029296875], 'AtVector': [-4232.02001953125, 152.1999969482422, 3324.1298828125], 'TargetFovy': 30.600000381469727, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        } {
            Npc_Zelda_Black_Event.EventWarpToTargetPosAndRot({'YAngle': -45.0, 'IsWaitEnd': True, 'Position': [-4254.89892578125, 147.83200073242188, 3347.931884765625]})
        }

        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'DemoWait_FooIKOff', 'ClothWarpMode': 0})

        fork {
            Npc_Gerudo_Queen_Young[Dungeon].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GE_0015:Talk_00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'ActorName': '', 'TurnFaceControlType': 1, 'WorldPos': [-4240.0, 152.0, 3310.72998046875]})
        }

    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GE_0015_GerudoQueen_Arrived', 'IsIgnoreDucking': False})
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
    }

}

void C04() {
    Npc_Gerudo_Queen_Young[Dungeon].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -55.0, 'Position': [-4228.94287109375, 150.99400329589844, 3323.337890625]})
    Npc_Gerudo_Queen_Young[Dungeon].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Animal_SunazarashiSP_C_NoMove[Pyramid].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Move_Gear1', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        Npc_Gerudo_Queen_Young[Dungeon].EventAIScheduleMoveToPos({'IsTurnToRot': False, 'IsAlignPos': False, 'Rot': 0.0, 'ASName': 'Run', 'IsWaitEnd': True, 'Pos': [-4236.02001953125, 149.43040466308594, 3328.239013671875], 'DesiredGear': 3, 'ForceIsNotAlignmentWaitPosition': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4235.7001953125, 150.36000061035156, 3333.5400390625], 'AtVector': [-4235.4501953125, 150.44000244140625, 3330.39990234375], 'TargetFovy': 28.700000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -62.02817153930664, 'Position': [-4234.68701171875, 149.22000122070312, 3329.794921875], 'UseDemoWait': True})
    } {
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -61.004859924316406, 'Position': [-4229.63916015625, 151.17379760742188, 3320.701904296875]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'Wait_No_Move', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 12.0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 63})
        Npc_Gerudo_Queen_Young[Dungeon].EventTriggerEmitXLink({'SLinkKey': 'FootStep', 'ELinkKey': ''})
    }

    Npc_Gerudo_Queen_Young[Dungeon].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-4230.080078125, 151.72000122070312, 3326.239990234375], 'AtVector': [-4236.33984375, 150.69000244140625, 3326.72998046875], 'TargetFovy': 31.200000762939453, 'EnableCameraAlpha': False})
    } {
        Animal_SunazarashiSP_C_NoMove[Pyramid].EventWarpToTargetPosAndRot({'Position': [-4228.375, 151.0933074951172, 3312.236083984375], 'YAngle': -42.23004150390625, 'IsWaitEnd': True})
    } {
        Npc_Gerudo_Queen_Young[Dungeon].EventWarpToTargetPosAndRot({'Position': [-4237.11083984375, 149.71249389648438, 3325.7548828125], 'YAngle': -23.98526954650879, 'IsWaitEnd': True})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -23.98526954650879, 'IsWaitEnd': True, 'Position': [-4234.93017578125, 149.7100067138672, 3327.4599609375], 'UseDemoWait': True})
    }

    Npc_Gerudo_Queen_Young[Dungeon].EventNPCTurnToTarget({'FaceControlType': 1, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False})
    Npc_Gerudo_Queen_Young[Dungeon].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_GE_0015:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_Gerudo_Queen_Young[Dungeon].EventNPCTurnToTarget({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 0, 'WorldPos': [-4256.830078125, 148.75, 3350.0], 'FaceControlType': 1, 'ActorName': '', 'IsWaitEnd': True})
    }

    EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    Npc_Zelda_Black_Event.EventWarpToTargetPosAndRot({'Position': [-4193.626953125, 153.6457061767578, 3282.660888671875], 'YAngle': -112.0, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidBootBZLost'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 25, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-4230.6201171875, 151.72000122070312, 3326.25], 'AtVector': [-4235.31005859375, 151.1999969482422, 3330.52001953125], 'TargetFovy': 25.100000381469727, 'EnableCameraAlpha': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-4242.43017578125, 151.07000732421875, 3336.330078125], 'AtVector': [-4243.97998046875, 150.9499969482422, 3337.800048828125], 'TargetFovy': 29.200000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4242.43017578125, 151.07000732421875, 3336.330078125], 'AtVector': [-4243.97998046875, 150.9499969482422, 3337.800048828125], 'TargetFovy': 26.5, 'MoveTime': 60, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[Dungeon].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_GE_0015:Talk_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void Ready() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Zelda_Black'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidBootBZFind'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-4243.64990234375, 148.5800018310547, 3336.659912109375], 'AtVector': [-4247.39013671875, 148.75, 3340.409912109375], 'TargetFovy': 34.400001525878906, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-4193.626953125, 153.6457061767578, 3282.660888671875], 'YAngle': 0.0, 'UseDemoWait': True})
    } {
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Sage_Soul_Zonau.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zelda_Black_Event.EventWarpToTargetPosAndRot({'YAngle': -45.0, 'Position': [-4256.89990234375, 148.16000366210938, 3349.909912109375], 'IsWaitEnd': True})
    }

    GameSystemActor.EventWaitUpdate({'IsWaitEnd': True, 'UpdateCount': 3})
}

void C06() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-4230.080078125, 151.72000122070312, 3326.239990234375], 'AtVector': [-4236.33984375, 150.69000244140625, 3326.72998046875], 'TargetFovy': 31.200000762939453, 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Gerudo_Queen_Young[Dungeon].EventAIScheduleMoveToPos({'Pos': [-4255.90380859375, 147.83200073242188, 3347.77490234375], 'Rot': -41.774070739746094, 'IsAlignPos': False, 'IsTurnToRot': False, 'DesiredGear': 3, 'ASName': 'Run', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Dungeon', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void C07() {
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -46.64519119262695, 'Position': [-4232.8798828125, 150.25999450683594, 3325.699951171875], 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_Gerudo_Queen_Young[Dungeon].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -23.98526954650879, 'Position': [-4246.02197265625, 147.97450256347656, 3333.5859375]})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    Npc_Gerudo_Queen_Young[Dungeon].EventAIScheduleMoveToPos({'Pos': [-4255.90380859375, 147.83200073242188, 3347.77490234375], 'Rot': -41.774070739746094, 'IsAlignPos': False, 'IsTurnToRot': False, 'DesiredGear': 3, 'ASName': 'Run', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_GE_0015', 'IsUseSuspendFade': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventTriggerRequestAutoSave()
}
