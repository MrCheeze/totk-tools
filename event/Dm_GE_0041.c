-------- EventFlow: Dm_GE_0041 --------

Actor: Dm_Locator[posElevator]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWait', 'EventPlayAS', 'EventDoNothing', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerAIScheduleOverWriteActionType', 'EventTriggerAIScheduleChangeMotionTypeDynamic', 'EventUnequipWeapon']
queries: ['EventQueryCheckIsSageDrawn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0041/Dm_GE_0041_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0041_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ElectricElevator_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0041/Dm_GE_0041_DgnObj_ElectricElevator_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0041_DgnObj_ElectricElevator_A.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0041/Dm_GE_0041_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0041_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Pre()


    call c01()


    call end()

}

void Pre() {
    DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    DgnObj_ElectricElevator_A_01.EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventTriggerParticipateEvent()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call thunder_off()

    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerAIScheduleOverWriteActionType({'ActionType': 0, 'ASName': 'Wait'})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerAIScheduleChangeMotionTypeDynamic()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Dm_Locator[posElevator].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_ElectricElevator_A_01', 'IsWaitEnd': True, 'YAngle': 0.0, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0]})
}

void c01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'SceneName': 'c01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'posElevator', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'ASName': 'c01_elevator', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_PyramidLiftRougeRide', 'Index': -1}) {
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'yotayota', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
        } else {
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventDoNothing({'IsWaitEnd': True})
        }
    } {
        Player.EventPlayerWarpToTargetActor({'InstanceName': 'posElevator', 'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 180.0, 'PositionOffset': [0.0, 2.224600076675415, -3.1904079914093018], 'UseDemoWait': True})
        Player.EventTriggerModelBindWithDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01', 'BoneName': 'PlayerPosition1', 'RotOffset': [0.0, 180.0, 0.0], 'TransOffset': [1.600000023841858, 0.22460000216960907, -1.7999999523162842]})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'yotayota', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 5.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 54})

        fork {
            DgnObj_ElectricElevator_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0041_ElectricElevator_Rise'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})

        fork {
            DgnObj_ElectricElevator_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0041_ElectricElevator_Land'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        }

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Player.EventTriggerClearModelBindAndDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01'})
    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'posElevator', 'IsWaitEnd': False, 'PositionOffset': [0.06449999660253525, 2.215399980545044, -3.188999891281128], 'UseDemoWait': True})
}

void end() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_GE_0041'}) {

        fork {
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 1})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }


        call thunder_on()

    } else {

        call thunder_on()

    }
}

void thunder_off() {
    if !Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventQueryCheckIsSageDrawn({'DynamicEquipmentSlot': 0}) {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
    }
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}

void thunder_on() {
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}
