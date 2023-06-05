-------- EventFlow: Dm_OT_0018 --------

Actor: Dm_Locator[meisoupos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[yane]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[okutourou]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[tourou]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[battle]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[battle_high]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0018/Dm_OT_0018_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0018_link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventWarpSoulFollowersFormationPos', 'EventWaitForActorPresence', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Senior_01
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTalk', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_03]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_10]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_04]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_05]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_06]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_07]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_08]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_09]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Kohga_Golem
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventKohgaGolemPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Kohga_Golem/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0018_golem.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[RopeAnim]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0018/Dm_OT_0018_Dm_Locator/workspace.pp__ModelProject.gyml', 'IsGrounding': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0018_Ring.root.as', 'IsWorld': True, 'Rotation': [0.0, 14.352890014648438, 0.0], 'Position': [-3508.679931640625, -319.6600036621094, -1847.219970703125], 'IsBindNearestActor': False}

Actor: DgnObj_RaumiLabo_A_06
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[wait7]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventTriggerSoundControlBGMwithInput', 'EventSoundChangeListenerPreset', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForSound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Kohga_GolemRider[KohgaFinal]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventKohgaGolemRiderRide', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0022.root.as', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call cut0()


    call cut1()


    call cut1.5()


    call cut02()


    call cut03()


    call cut04()


    call cut05()


    call cut06()


    call cut07()


    call cut08()


    call cut09()


    call cut10()


    call cut11()


    call cut12()


    call cut13()


    call cut14()


    call cut15()

}

void cut0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'KohgaFinal'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KohgaFinal_CreateRider', 'Value': True})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Assassin_Senior_01', 'PosVector': [0.0, 1.8600000143051147, 3.009999990463257], 'AtVector': [0.0, 1.7599999904632568, 1.7200000286102295], 'TargetFovy': 25.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 105.34559631347656, 'UseDemoWait': True, 'IsWaitEnd': True, 'Position': [-3468.406005859375, -311.4873962402344, -1858.7080078125]})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Kohga_GolemRider', 'InstanceName': 'KohgaFinal', 'IsWaitEnd': True})
    Dm_Locator[meisoupos].EventWarpToTargetPosAndRot({'YAngle': -74.65442657470703, 'IsWaitEnd': True, 'Position': [-3459.55908203125, -311.4873962402344, -1861.1319580078125]})
    Dm_Locator[battle].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 103.95850372314453, 'Position': [-3518.819091796875, -311.1581115722656, -1844.5849609375]})

    fork {
        Enemy_Kohga_GolemRider[KohgaFinal].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'battle', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Kohga_GolemRider[KohgaFinal].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Kohga_Golem.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'battle', 'IsWaitEnd': True, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 3.0]})
        Enemy_Kohga_Golem.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void cut1.5() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Assassin_Senior_01', 'PosVector': [-0.029999999329447746, 1.6699999570846558, 7.210000038146973], 'AtVector': [-0.009999999776482582, 1.3300000429153442, 1.75], 'TargetFovy': 36.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 200, 'EndRecelerateRate': 0.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Assassin_Senior_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'meditation_up', 'ForceFadeInFrame': 10.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_02', 'CommandLife': 2, 'IsReleaseDucking': False})
        Npc_Assassin_Senior_01.EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:Talk_0030', 'IsAnonymous': False, 'ASName': 'meditation_up', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText', 'IsAnonymous': False, 'ASName': 'meditation_up', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C01_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

        Npc_Assassin_Senior_01.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 11})
    }

}

void cut02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [2.6500000953674316, 0.8100000023841858, -2.2300000190734863], 'AtVector': [0.8100000023841858, 1.5399999618530273, 1.5700000524520874], 'TargetFovy': 53.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'PositionOffset': [0.0, 0.0, 3.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'meisoupos', 'IsWaitEnd': False, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    Dm_Locator[yane].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -106.61710357666016, 'Position': [-3437.341064453125, -293.9873962402344, -1857.613037109375]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 19})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'yane', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 15, 'EndRecelerateRate': 0.800000011920929, 'Actor1ActorName': 'Player', 'PosVector': [2.6500000953674316, 0.8100000023841858, -2.2300000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.8100000023841858, 2.7300000190734863, 1.5700000524520874], 'TargetFovy': 47.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void cut03() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C03_Enm_Assassin_Senior_Appear', 'SLinkKey': ''})
            Npc_Assassin_Senior_01.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': 'yane', 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
            Npc_Assassin_Senior_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'normalwait', 'ForceFadeInFrame': 0.0})
            SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_DoronAppear', 'ELinkKey': ''})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_00', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': 'udegumi_shoumen', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'udegumi_shoumen-0', 'TargetActorInstanceName': 'yane', 'IsLoop': False, 'OverwriteStartFrame': 15.0, 'CalcUpInInterpolate': False})
    }


    fork {
        Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_04', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': 'udehiroge00', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'udegumi_shoumen-1', 'TargetActorInstanceName': 'yane', 'IsLoop': False, 'CalcUpInInterpolate': False})
    }


    fork {
        Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C03_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Npc_Assassin_Senior_01.EventGoOffstageForUser({'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': True, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void cut04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.3700000047683716, 1.2999999523162842, -1.6200000047683716], 'AtVector': [-0.23999999463558197, 2.0799999237060547, 0.7699999809265137], 'TargetFovy': 57.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.699999988079071, 'Actor1ActorName': 'Player', 'PosVector': [-0.3799999952316284, 1.399999976158142, -1.7100000381469727], 'AtVector': [0.09000000357627869, 2.0899999141693115, 0.7300000190734863], 'TargetFovy': 57.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 40, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Locator[okutourou].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3443.25, -299.12078857421875, -1877.4849853515625], 'YAngle': -149.81430053710938})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'okutourou', 'TurnFaceControlType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

        fork {
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C04_Enm_Assassin_Senior_Appear', 'SLinkKey': ''})
            Npc_Assassin_Senior_01.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'okutourou', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False})
            Npc_Assassin_Senior_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'udegumi_shoumen_loop'})
            SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_DoronAppear', 'ELinkKey': ''})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

    }

}

void cut05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'okutourou', 'PosVector': [-2.3399999141693115, 4.03000020980835, 3.509999990463257], 'AtVector': [1.7699999809265137, 1.0099999904632568, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_08', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': 'udehiroge00', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C05_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Npc_Assassin_Senior_01.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void cut06() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    Dm_Locator[tourou].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -127.55609893798828, 'Position': [-3471.486083984375, -302.75201416015625, -1845.803955078125]})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'tourou', 'PosVector': [-18.43000030517578, -7.630000114440918, 2.75], 'AtVector': [-15.6899995803833, -6.920000076293945, 1.100000023841858], 'TargetFovy': 53.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'EndRecelerateRate': 0.699999988079071, 'IsLinearMove': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'tourou', 'PosVector': [-18.3700008392334, -7.630000114440918, 2.809999942779541], 'AtVector': [-15.449999809265137, -6.920000076293945, 1.5099999904632568], 'TargetFovy': 53.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'tourou', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
        }

    } {

        fork {
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C06_Enm_Assassin_Senior_Appear', 'SLinkKey': ''})
            Npc_Assassin_Senior_01.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'tourou', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False})
            Npc_Assassin_Senior_01.EventPlayAS({'ASName': 'udegumi_suwari', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
            SoundSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Assassin_Senior_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_DoronAppear', 'ELinkKey': ''})
        } {
            GameSystemActor[wait7].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[wait7].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

    }

}

void cut07() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'suwari_to_yubisasi-0', 'IsWaitEnd': False, 'TargetActorName': 'Npc_Assassin_Senior_01', 'TargetActorInstanceName': '', 'CalcUpInInterpolate': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Assassin_Senior_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'udegumi_suwari_furimuki', 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Assassin_Senior_01.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'suwari_to_yubisasi', 'IsAnimeDriven': True, 'IsAllSlot': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'Npc_Assassin_Senior_01', 'TargetActorInstanceName': '', 'SceneName': 'suwari_to_yubisasi-1', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    }

    Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_09', 'IsAnonymous': False, 'ASName': 'suwari_to_yubisasi', 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Npc_Assassin_Senior_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C07_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Npc_Assassin_Senior_01.EventGoOffstageForUser({'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': True, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}

void cut08() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.550000011920929, 0.9599999785423279, -2.390000104904175], 'AtVector': [0.4000000059604645, 1.840000033378601, 1.0], 'TargetFovy': 57.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_30m', 'FadeTime': 0.10000000149011612})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Dm_Locator[battle_high].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': 'battle', 'PositionOffset': [0.0, 9.0, 0.0]})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'EndRecelerateRate': 0.699999988079071, 'MoveTime': 40, 'Actor1ActorName': 'Player', 'PosVector': [1.0800000429153442, 1.0, -2.2300000190734863], 'AtVector': [-0.4000000059604645, 1.8700000047683716, 0.7900000214576721], 'TargetFovy': 57.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_C08_Enm_Assassin_Senior_Appear', 'SLinkKey': 'Dm_DoronAppear'})
            Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'udegumi_shoumen_high', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'battle_high', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

    }

    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.10000000149011612})
}

void cut09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'udegumi_shoumen_high-2', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        GameSystemActor[WaitForSound].EventWait({'IsWaitEnd': True, 'Frames': 15})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }

    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_10', 'IsAnimeDriven': True, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'udehiroge_high'})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_11', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'udehiroge00', 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'kakugosiro_high'})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_01', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'jyutsu_high-1', 'InterpolateFrame': 5.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'jyutsu_high-1_gabure', 'IsWaitEnd': False, 'InterpolateFrame': 5.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_Enm_Assassin_Senior_Magic', 'SLinkKey': ''})
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'jutsu_high'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    }

}

void cut10() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'jyutsu_high-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Enemy_Kohga_Golem.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0018_Enm_Kohga_Golem_Appear', 'SLinkKey': 'Dm_OT_0018_Kohga_Golem_Appear'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        }

        Enemy_Kohga_Golem.EventKohgaGolemPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'toujou'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 59})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'ASName': 'jutsu_high130'})
    }

}

void cut11() {
    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'battle', 'OffsetBase': 1, 'YAngle': 180.0, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 20.0], 'UseDemoWait': True})

    fork {
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_10].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_03].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_04].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_05].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_06].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_07].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_09].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        MinusObj_RaumiFacility_Lamp_A_06[DgnObj_BossBattle_08].EventPlayAS({'ASName': 'LightON', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor[wait7].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'udehiroge_high130', 'ForceFadeInFrame': -1.0})
        GameSystemActor[wait7].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_02', 'ASName': 'udehiroge00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    }

}

void cut12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-1.2000000476837158, 0.800000011920929, -0.5199999809265137], 'AtVector': [0.9800000190734863, 2.4600000381469727, 4.210000038146973], 'TargetFovy': 60.02000045776367, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.6000000238418579, 'Actor1ActorName': 'Player', 'PosVector': [-1.7699999809265137, 0.3700000047683716, -1.75], 'AtVector': [0.9800000190734863, 2.4600000381469727, 4.210000038146973], 'TargetFovy': 60.02000045776367, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 8, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'yubisasi_high', 'ForceFadeInFrame': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_03', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_05', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void cut13() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'udegumi_shoumen_high-3', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'udegumi_shoumen_high'})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_13', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'SceneName': 'c08', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'udehiroge_high'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_14', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'StageBarrier_KohgaFinal', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    DgnObj_RaumiLabo_A_06.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'RopeAnim', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void cut14() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'c14', 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.5899999141693115, 0.5699999928474426, 2.9000000953674316], 'AtVector': [-0.009999999776482582, 0.9599999785423279, 0.5899999737739563], 'TargetFovy': 42.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Dm_Locator[RopeAnim].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'RingMove'})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Sin00', 'Length': 1.0})
    } {
        DgnObj_RaumiLabo_A_06.EventTriggerEmitXLink({'SLinkKey': 'Fence_UP', 'ELinkKey': ''})
        DgnObj_RaumiLabo_A_06.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Fence_Spark_In'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'yubisasi', 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    DgnObj_RaumiLabo_A_06.EventTriggerModelUnbind()
}

void cut15() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'OverwriteStartFrame': -1.0, 'SceneName': 'ride_final-0_fix', 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'kakugosiro_high'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'yubisasi', 'MessageId': 'EventFlowMsg/Dm_OT_0018:NewText_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    } {
        GameSystemActor[WaitForSound].EventWait({'IsWaitEnd': True, 'Frames': 5})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
        DgnObj_RaumiLabo_A_06.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Fence_Spark_In', 'IsKill': False})
    }


    fork {
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'rideFinal', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Enemy_Kohga_Golem.EventKohgaGolemPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'ride_golem'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'battle_high', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'ride_final-0', 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.699999988079071, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7300000190734863, -4.340000152587891], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor[WaitForSound].EventWait({'IsWaitEnd': True, 'Frames': 15})
        SoundSystemActor.EventSoundReleaseDucking({'IsImmediately': True, 'DuckingName': '会話中', 'IsClearRefCount': True, 'DuckingName2': '', 'DuckingName3': ''})
        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_AssassinBoss'})
    }

    Enemy_Kohga_GolemRider[KohgaFinal].EventKohgaGolemRiderRide({'IsWaitEnd': False})
    Npc_Assassin_Senior_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'KohgaFinal'})
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Space': 4.0, 'Dist': 7.0})
}

void cut1() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Assassin_Senior_01', 'PosVector': [-0.019999999552965164, 1.5700000524520874, 5.599999904632568], 'AtVector': [-0.009999999776482582, 1.3300000429153442, 1.75], 'TargetFovy': 36.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckLower': False, 'CheckUpper': False}) {
            Event25:
            Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'ASName': 'Meditation', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:Talk_0029', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
            goto Event25
        } else {
            Npc_Assassin_Senior_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0018:Talk_0027', 'IsAnonymous': False, 'ASName': 'Meditation', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}
