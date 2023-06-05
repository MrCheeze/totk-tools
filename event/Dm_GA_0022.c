-------- EventFlow: Dm_GA_0022 --------

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestChangeState', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventWarpOnGround', 'EventPlayerSwitchEquipment', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0022/Dm_GA_0022_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0022_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Ganondorf
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerMasterSwordForcedResurrection', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventTriggerSoundStopSound', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Init()


    fork {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Color': 0, 'Length': 0})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 1.5099999904632568, 1.690000057220459], 'AtVector': [-0.009999999776482582, 1.2799999713897705, 0.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call Ready_1()

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-2.299999952316284, 0.7599999904632568, -2.4200000762939453], 'AtVector': [-1.909999966621399, 0.8999999761581421, -1.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call Ready_2()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void Init() {
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    Enemy_Ganondorf.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'ActorName': 'Enemy_Ganondorf', 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 9.0], 'UseDemoWait': True})
    Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        GameSystemActor.EventTriggerMasterSwordForcedResurrection()
        Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070', 'IsWaitEnd': True, 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': ''})
        Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsMasterSwordTrueForm', 'Value': False})
    }
}

void Ready_1() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GA_0022_Env', 'IsIgnoreDucking': False})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Ready_0', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Ganondorf', 'CommandLife': 2, 'IsReleaseDucking': False})
            SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_GA_0022_Env', 'GroupName': '', 'FadeFrame': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsMasterSwordTrueForm', 'Value': True})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': True, 'ASCommand': 'Ready_1', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 105})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.0})
        }

    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'Ready_1_NoSword', 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
    }
}

void Ready_2() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 47})
        } {
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
            Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 1, 'DynamicEquipmentSlot': 4})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': True, 'ASCommand': 'Ready_2', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

    } else {

        fork {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': True, 'ASCommand': 'Ready_2_NoSword', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Ganondorf', 'CommandLife': 2, 'IsReleaseDucking': False})
            SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_GA_0022_Env', 'GroupName': '', 'FadeFrame': -1})
        }

    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'LockOnWaitUpper', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}
