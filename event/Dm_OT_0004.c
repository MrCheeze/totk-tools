-------- EventFlow: Dm_OT_0004 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser', 'EventWait', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Ichikara_Gerudo_Demo
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventAIScheduleMoveToAnchor', 'EventWait', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage007[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTalk', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage008[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora005[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron025[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage003[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage009[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain010[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage010[Finale]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage033[Finale]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0004/Dm_OT_0004_UMii_Gerudo_BodyC_G_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0004_UMii_Gerudo_BodyC_G_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_oasis050[Finale]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTalk', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage031[Finale]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0004/Dm_OT_0004_Npc_Hylia_Carpenter_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0004_Npc_Hylia_Carpenter_001.root.as', 'IsBindNearestActor': False}

Actor: AsbObj_BalloonEnvelopeBase_Cloth_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerPhysicsChangeCollisionModeAll', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_BalloonEnvelopeCandle_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SpObj_BalloonEnvelope_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventGoOffstageForUser', 'EventWait', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0004_SpObj_BalloonEnvelope_A_03.root.as', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0004/Dm_OT_0004_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0004_Dm_Locator.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GoddesStatue_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage033[WorkArea]
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventPlayAS', 'EventTalk', 'EventTriggerModelUnbind', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis050[WorkArea]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventPlayAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerModelUnbind', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage007
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage008
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage031[WorkArea]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventPlayAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerModelUnbind', 'EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime', 'EventTrigger_OverwriteWeatherForecast', 'Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[look]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_Goron025
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain010
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre_sun()


    call c01()


    call c02()


    call c04()


    call c05()


    call c06()

}

void Finale() {

    call pre_Finale()


    call c07()


    call c08()


    call c09()


    call c10()


    call c11()


    call c12()


    call c13()


    call c14()


    call c17()


    call c18()

}

void pre_sun() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'SpObj_BalloonEnvelope_A_03', 'IsWaitEnd': True, 'InstanceName': ''})
    EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 4, 'TimeMin': 16})
    EventWorldManagerController.EventTrigger_OverwriteWeatherForecast({'WeatherType': 0, 'Duration': 0})
    EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'Elevation': 0.0, 'IsImmTrans': False, 'Speed': 5.0, 'Azimuth': 45.0})

    fork {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerParticipateEvent()
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 1})
    } {
        Player.EventTriggerParticipateEvent()
    } {
        Npc_oasis050[WorkArea].EventTriggerParticipateEvent()
    } {
        Npc_UMiiVillage031[WorkArea].EventTriggerParticipateEvent()
    } {
        Npc_UMiiVillage033[WorkArea].EventTriggerParticipateEvent()
    } {
        AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerParticipateEvent()
    } {
        SpObj_BalloonEnvelope_A_03.EventTriggerParticipateEvent()
        SpObj_BalloonEnvelope_A_03.EventPlayAS({'ASName': 'BalloonEnvelope_ON', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    Dm_Locator[look].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [3906.52001953125, 303.0, -1625.7099609375]})
    Dm_Locator[pos].EventWarpToTargetPosAndRot({'Position': [3915.0, 300.0, -1630.0], 'YAngle': 170.0, 'IsWaitEnd': False})

    fork {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'RotOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'TransOffset': [0.0, 0.10000000149011612, 0.0]})
    } {
        Player.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [-0.4000000059604645, 0.30000001192092896, -1.2000000476837158], 'YAngle': 110.0, 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'TransOffset': [-0.4000000059604645, 0.30000001192092896, -1.2000000476837158], 'RotOffset': [0.0, 110.0, 0.0]})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait_FooIKOff', 'ClothWarpMode': 0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_oasis050[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [0.8999999761581421, 0.20000000298023224, 1.2000000476837158], 'YAngle': 150.0, 'IsWaitEnd': True})
        Npc_oasis050[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'TransOffset': [0.8999999761581421, 0.20000000298023224, 1.2000000476837158], 'RotOffset': [0.0, 150.0, 0.0]})
        Npc_oasis050[WorkArea].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_oasis050[WorkArea].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3825.070068359375, 301.2900085449219, -1547.6400146484375], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    } {
        Npc_UMiiVillage031[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 150.0, 'PositionOffset': [-1.3600000143051147, 0.20000000298023224, -0.25999999046325684], 'IsWaitEnd': True})
        Npc_UMiiVillage031[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'TransOffset': [-1.3600000143051147, 0.20000000298023224, -0.25999999046325684], 'RotOffset': [0.0, 150.0, 0.0]})
        Npc_UMiiVillage031[WorkArea].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_UMiiVillage031[WorkArea].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'WorldPos': [3825.070068359375, 301.2900085449219, -1547.6400146484375], 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'look', 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    } {
        Npc_UMiiVillage033[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 0, 'YAngle': 150.0, 'PositionOffset': [-1.3600000143051147, 0.20000000298023224, -0.25999999046325684], 'TargetActorKind': 1, 'IsWaitEnd': True})
        Npc_UMiiVillage033[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TransOffset': [1.100000023841858, 0.20000000298023224, 0.0], 'RotOffset': [0.0, 140.0, 0.0], 'BoneName': 'Dm_Locator'})
        Npc_UMiiVillage033[WorkArea].EventPlayAS({'ASName': 'Wait', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_UMiiVillage033[WorkArea].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3825.070068359375, 301.2900085449219, -1547.6400146484375], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    } {
        AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, -0.10000000149011612, 0.0]})
    } {
        SpObj_BalloonEnvelope_A_03.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 2.4000000953674316, 0.0]})
    }

    AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0004_Chemical_Fire', 'SLinkKey': 'Chemical_Fire'})
    SpObj_BalloonEnvelope_A_03.EventTriggerEmitXLink({'SLinkKey': 'Dm_OT_0004_BlowUp', 'ELinkKey': ''})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [3916.760009765625, 305.7900085449219, -1618.219970703125], 'AtVector': [3902.300048828125, 297.7900085449219, -1620.949951171875], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void c01() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_OT_0004', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 80})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.5, 'MoveTime': 180, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [3916.760009765625, 305.7900085449219, -1618.219970703125], 'AtVector': [3908.909912109375, 299.5899963378906, -1631.6600341796875], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor[wait].EventWait({'Frames': 120, 'IsWaitEnd': True})
        Npc_UMiiVillage033[WorkArea].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0159', 'ASName': 'TalkSurprised', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis050[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})
        Npc_oasis050[WorkArea].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0171', 'ASName': 'TalkInChair', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Dm_Locator[pos].EventPlayAS({'ASName': 'c01_Dm_Locator', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_UMiiVillage031[WorkArea].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Target': 0, 'WorldPos': [4015.510009765625, 300.6499938964844, -1628.219970703125], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 12})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.5, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_Cloth_A_01', 'PosVector': [-0.6600000262260437, 0.8899999856948853, -3.7300000190734863], 'AtVector': [-1.7799999713897705, 1.899999976158142, -0.2800000011920929], 'TargetFovy': 47.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 25})
    Npc_UMiiVillage031[WorkArea].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0162', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage033[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 3})
    Npc_oasis050[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player.EventTriggerPlayerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [3912.929931640625, 302.5, -1624.4200439453125], 'TurnFaceControlType': 1})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 35})
}

void c02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'PosVector': [3878.56005859375, 279.6700134277344, -1638.699951171875], 'AtVector': [3882.739990234375, 280.239990234375, -1639.7099609375], 'TargetFovy': 43.599998474121094, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Dm_Locator[pos].EventPlayAS({'IsWaitEnd': True, 'ASName': 'c02_Dm_Locator', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Dm_Locator[look].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3931.260009765625, 302.260009765625, -1628.5], 'YAngle': 0.0})

    fork {
        Player.EventPlayerWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'IsWaitEnd': True, 'PositionOffset': [-1.2000000476837158, 0.25, 0.5], 'YAngle': -15.0, 'UseDemoWait': True})
        Player.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, -15.0, 0.0], 'TransOffset': [-1.2000000476837158, 0.25, 0.5]})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'look', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        Npc_oasis050[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'IsWaitEnd': True, 'PositionOffset': [0.44999998807907104, 0.20000000298023224, 1.5499999523162842], 'YAngle': -65.0})
        Npc_oasis050[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'TransOffset': [0.44999998807907104, 0.20000000298023224, 1.5499999523162842], 'RotOffset': [0.0, -65.0, 0.0]})
        Npc_oasis050[WorkArea].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'look', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_UMiiVillage031[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'TargetActorKind': 1, 'OffsetBase': 0, 'IsWaitEnd': True, 'PositionOffset': [1.100000023841858, 0.20000000298023224, 0.5], 'YAngle': -50.0})
        Npc_UMiiVillage031[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, -50.0, 0.0], 'TransOffset': [0.800000011920929, 0.14000000059604645, 0.5]})
        Npc_UMiiVillage031[WorkArea].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'look', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_UMiiVillage033[WorkArea].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 0, 'TargetActorKind': 1, 'IsWaitEnd': True, 'YAngle': -35.0, 'PositionOffset': [-1.0, 0.5, 1.100000023841858]})
        Npc_UMiiVillage033[WorkArea].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, -35.0, 0.0], 'TransOffset': [-1.0, 0.5, 1.100000023841858]})
        Npc_UMiiVillage033[WorkArea].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'look', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 0.0, 0.0], 'YAngle': 120.0})
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'BoneName': 'Dm_Locator', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 120.0, 0.0]})
    }


    fork {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_oasis050[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_UMiiVillage031[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_UMiiVillage033[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_BalloonEnvelopeCandle_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SpObj_BalloonEnvelope_A_03.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void c04() {

    fork {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        Npc_oasis050[WorkArea].EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        Npc_UMiiVillage031[WorkArea].EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        Npc_UMiiVillage033[WorkArea].EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        AsbObj_BalloonEnvelopeCandle_A_01.EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        SpObj_BalloonEnvelope_A_03.EventWait({'IsWaitEnd': True, 'Frames': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-3.5899999141693115, 1.159999966621399, -0.7300000190734863], 'AtVector': [-0.9200000166893005, 1.4900000095367432, 0.7300000190734863], 'TargetFovy': 48.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0004_Chemical_Fire', 'SLinkKey': 'Chemical_Fire'})
    SpObj_BalloonEnvelope_A_03.EventTriggerEmitXLink({'SLinkKey': 'Dm_OT_0004_BlowUp', 'ELinkKey': ''})
    Npc_UMiiVillage033[WorkArea].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0168', 'ASName': 'TalkSurprised', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_oasis050[WorkArea].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0169', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_UMiiVillage033[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_oasis050', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': -40.0, 'Target': 3, 'ActorName': 'Npc_oasis050', 'InstanceName': 'WorkArea', 'TurnFaceControlType': 1})
    }

    Npc_oasis050[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})

    fork {
        Npc_oasis050[WorkArea].EventTalk({'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0104', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_UMiiVillage031[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})
    }

}

void c05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-2.319999933242798, 1.6799999475479126, 0.17000000178813934], 'AtVector': [-1.5499999523162842, 1.850000023841858, 0.6200000047683716], 'TargetFovy': 35.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_oasis050[WorkArea].EventTalk({'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0107', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Npc_UMiiVillage031[WorkArea].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0170', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis050[WorkArea].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'WorkArea', 'ResetArriveTransformFixed': False})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 35, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-2.319999933242798, 1.6799999475479126, 0.17000000178813934], 'AtVector': [-1.4900000095367432, 1.8200000524520874, 0.5199999809265137], 'TargetFovy': 35.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_oasis050[WorkArea].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'InstanceName': '', 'ActorName': '', 'WorldPos': [3933.93994140625, 305.239990234375, -1640.8199462890625], 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': False})
}

void c06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [3899.449951171875, 303.5799865722656, -1623.739990234375], 'AtVector': [3905.179931640625, 303.8299865722656, -1623.8299560546875], 'TargetFovy': 52.20000076293945, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Locator[pos].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'c06_Dm_Locator'})
    } {
        Npc_UMiiVillage031[WorkArea].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'InstanceName': '', 'WorldPos': [3920.219970703125, 301.0400085449219, -1630.989990234375], 'ActorName': '', 'ResetArriveTransformFixed': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerModelUnbind()
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 0})
        AsbObj_BalloonEnvelopeBase_Cloth_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'pos'})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_oasis050[WorkArea].EventTriggerModelUnbind()
        Npc_oasis050[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_UMiiVillage031[WorkArea].EventTriggerModelUnbind()
        Npc_UMiiVillage031[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_UMiiVillage033[WorkArea].EventTriggerModelUnbind()
        Npc_UMiiVillage033[WorkArea].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerModelUnbind()
        AsbObj_BalloonEnvelopeCandle_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SpObj_BalloonEnvelope_A_03.EventTriggerModelUnbind()
        SpObj_BalloonEnvelope_A_03.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    AsbObj_BalloonEnvelopeCandle_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OT_0004_Chemical_Fire', 'IsKill': False, 'SLinkKey': 'Chemical_Fire'})
    SpObj_BalloonEnvelope_A_03.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_OT_0004_BlowUp', 'ELinkKey': '', 'IsKill': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IchikaraChallenge01_Finale', 'Index': -1, 'Value': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'IchikaraChallenge01', 'IsIgnoreCompletedChallenge': True, 'StepName': 'Memory', 'IsIgnoreChallengeProgressUI': False})
    EventSystemActor.EventTransition({'EventName': 'IchikaraChallenge01_FinaleEvent', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void pre_Finale() {
    EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 4, 'TimeMin': 20})
    EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'Azimuth': 0.0, 'Elevation': 0.0, 'IsImmTrans': False, 'Speed': 2.0})
    Npc_UMiiVillage033[WorkArea].EventTriggerModelUnbind()
    TwnObj_GoddesStatue_A_02.EventTriggerParticipateEvent()
    Npc_Ichikara_Gerudo_Demo.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_Ichikara_Gerudo_Demo.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'MoveTime': 0, 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.25999999046325684, 0.7300000190734863, 13.829999923706055], 'AtVector': [1.7300000190734863, 1.2300000190734863, 15.8100004196167], 'TargetFovy': 49.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_UMiiVillage033[Finale].EventTriggerParticipateEvent()
    Npc_oasis050[Finale].EventTriggerParticipateEvent()
    Npc_UMiiVillage031[Finale].EventTriggerParticipateEvent()
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3976.154052734375, 233.34750366210938, -1609.7039794921875], 'YAngle': 122.9281005859375, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_UMiiVillage033[Finale].EventWarpToTargetPosAndRot({'Position': [3981.2958984375, 233.33689880371094, -1613.6280517578125], 'YAngle': -85.28175354003906, 'IsWaitEnd': True})
    Npc_oasis050[Finale].EventWarpToTargetPosAndRot({'Position': [3977.616943359375, 233.36659240722656, -1611.8790283203125], 'YAngle': 119.47550201416016, 'IsWaitEnd': True})
    Npc_UMiiVillage031[Finale].EventWarpToTargetPosAndRot({'Position': [3977.3740234375, 233.36619567871094, -1613.4859619140625], 'YAngle': 92.9999008178711, 'IsWaitEnd': True})
    Npc_UMiiVillage007[Finale].EventTriggerParticipateEvent()
    Npc_UMiiVillage008[Finale].EventTriggerParticipateEvent()
    Npc_UMiiVillage007.EventTriggerParticipateEvent()
    Npc_UMiiVillage008.EventTriggerParticipateEvent()
    Npc_UMiiVillage007.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_UMiiVillage008.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_Zora005[Finale].EventTriggerParticipateEvent()
    Npc_Goron025[Finale].EventTriggerParticipateEvent()
    Npc_HighMountain010[Finale].EventTriggerParticipateEvent()
    Npc_Goron025.EventTriggerParticipateEvent()
    Npc_HighMountain010.EventTriggerParticipateEvent()
    Npc_Goron025.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_HighMountain010.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_UMiiVillage003[Finale].EventTriggerParticipateEvent()
    Npc_UMiiVillage009[Finale].EventTriggerParticipateEvent()
    Npc_UMiiVillage010[Finale].EventTriggerParticipateEvent()

    fork {
        Npc_UMiiVillage033[Finale].EventNPCTurnToTarget({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [3982.8349609375, 235.3760986328125, -1618.0030517578125], 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_oasis050[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_UMiiVillage031[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_UMiiVillage033', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Finale', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_UMiiVillage009[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_UMiiVillage010[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_UMiiVillage003[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Goron025[Finale].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HighMountain010[Finale].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'OffsetBase': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora005[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_UMiiVillage007[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_UMiiVillage007[Finale].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_UMiiVillage008[Finale].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void c07() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.9200000166893005, 0.09000000357627869, 13.699999809265137], 'AtVector': [1.0, 0.5899999737739563, 15.75], 'TargetFovy': 49.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_UMiiVillage033[Finale].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_UMiiVillage031', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'Finale', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage033[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0102', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
}

void c08() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-2.0, 0.1899999976158142, 17.68000030517578], 'AtVector': [-0.6700000166893005, 0.4399999976158142, 15.170000076293945], 'TargetFovy': 49.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0105', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})

    fork {
        Npc_UMiiVillage031[Finale].EventTriggerRequestLookAtTheFront()
    } {
        Npc_oasis050[Finale].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Finale', 'ResetArriveTransformFixed': False})
    }

    Npc_UMiiVillage031[Finale].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C09_enokida', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'IsAllSlot': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
}

void c09() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-1.5700000524520874, 0.4000000059604645, 17.15999984741211], 'AtVector': [-0.38999998569488525, 0.7200000286102295, 14.569999694824219], 'TargetFovy': 34.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
    Npc_Ichikara_Gerudo_Demo.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3984.10693359375, 233.38079833984375, -1616.8380126953125], 'YAngle': -74.81419372558594})
    Npc_Ichikara_Gerudo_Demo.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Npc_UMiiVillage031[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0109', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_oasis050[Finale].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'InstanceName': 'Finale', 'ResetArriveTransformFixed': False})
    }

    Npc_Ichikara_Gerudo_Demo.EventAIScheduleMoveToAnchor({'InstanceName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'ASName': 'Walk', 'AnchorType': 22, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_Ichikara_Gerudo_Demo.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Target': 0, 'Direction': 0.0, 'WorldPos': [3974.60009765625, 235.41700744628906, -1607.2449951171875], 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_UMiiVillage031[Finale].EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Ichikara_Gerudo_Demo', 'ResetArriveTransformFixed': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 25})
}

void c10() {

    fork {
        Npc_oasis050[Finale].EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Ichikara_Gerudo_Demo', 'ResetArriveTransformFixed': False})
    } {
        Npc_UMiiVillage033[Finale].EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Ichikara_Gerudo_Demo', 'ResetArriveTransformFixed': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Ichikara_Gerudo_Demo', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-1.5099999904632568, 2.680000066757202, 9.020000457763672], 'AtVector': [-1.340000033378601, 2.5299999713897705, 9.329999923706055], 'TargetFovy': 51.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_UMiiVillage031[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0156', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.10000000149011612, 0.30000001192092896, 14.449999809265137], 'AtVector': [2.3299999237060547, 0.44999998807907104, 12.949999809265137], 'TargetFovy': 43.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Ichikara_Gerudo_Demo.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        Npc_UMiiVillage007[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0198', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_UMiiVillage033[Finale].EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage007', 'InstanceName': 'Finale', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_UMiiVillage007[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0204', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_UMiiVillage003[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0199', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.10000000149011612, 0.30000001192092896, 14.449999809265137], 'AtVector': [2.740000009536743, 0.44999998807907104, 14.15999984741211], 'TargetFovy': 43.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void c12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.5600000023841858, 2.130000114440918, 8.630000114440918], 'AtVector': [-0.5299999713897705, 1.9700000286102295, 9.069999694824219], 'TargetFovy': 37.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_UMiiVillage033[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0147', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_UMiiVillage033[Finale].EventNPCTurnToTarget({'IsWaitEnd': True, 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'Target': 0, 'FaceControlType': 1, 'WorldPos': [3973.360107421875, 236.64999389648438, -1611.5400390625], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Ichikara_Gerudo_Demo.EventWarpToTargetPosAndRot({'YAngle': -72.13487243652344, 'IsWaitEnd': False, 'Position': [3980.787109375, 233.32440185546875, -1615.7760009765625]})
        Npc_Ichikara_Gerudo_Demo.EventTriggerLookAtObject({'Target': 3, 'InstanceName': 'Finale', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_UMiiVillage033', 'ResetArriveTransformFixed': False})
    }

    Npc_UMiiVillage033[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0148', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c13() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [0.8100000023841858, 0.2199999988079071, 14.020000457763672], 'AtVector': [-0.5899999737739563, 0.550000011920929, 16.760000228881836], 'TargetFovy': 51.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_UMiiVillage033[Finale].EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Finale', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'Npc_UMiiVillage008', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_oasis050[Finale].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Finale', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_UMiiVillage031[Finale].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C12_enokida'})
    }

    Npc_UMiiVillage033[Finale].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0158', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'c13_loop', 'IsPlayASAllSlot': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 4, 'TimeMin': 30})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IchikaraChallenge01_GoodbyeDaughter', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void c14() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.3799999952316284, 2.190000057220459, 3.7899999618530273], 'AtVector': [-0.3499999940395355, 6.71999979019165, 6.019999980926514], 'TargetFovy': 59.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Finale', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 150, 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-0.3799999952316284, 0.30000001192092896, 3.7899999618530273], 'AtVector': [-0.3199999928474426, 0.9599999785423279, 8.789999961853027], 'TargetFovy': 59.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0141', 'ASName': 'C12_enokida', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    Npc_oasis050[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0139', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis050[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0142', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
}

void c17() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-3.059999942779541, 0.3499999940395355, 6.869999885559082], 'AtVector': [-2.890000104904175, 0.4099999964237213, 7.320000171661377], 'TargetFovy': 42.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0140', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'C12_enokida', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_UMiiVillage031[Finale].EventTriggerRequestLookAtTheFront()
        Npc_UMiiVillage031[Finale].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 35.0})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 40})
    }


    fork {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_oasis050[Finale].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_UMiiVillage031[Finale].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_UMiiVillage031', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Finale', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0161', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    Npc_oasis050[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0186', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0163', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void c18() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'TwnObj_GoddesStatue_A_02', 'PosVector': [-2.190000057220459, 1.0299999713897705, 9.65999984741211], 'AtVector': [-1.840000033378601, 1.100000023841858, 9.979999542236328], 'TargetFovy': 34.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_UMiiVillage031[Finale].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0178', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_oasis050[Finale].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Finale', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_UMiiVillage031[Finale].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_oasis050', 'InstanceName': 'Finale', 'ResetArriveTransformFixed': False})
    }

    Npc_oasis050[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0196', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage031[Finale].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_oasis050', 'InstanceName': 'Finale', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Finale].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0197', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NushiShop_Tutorial_IsCompleted_Exp'}) {
        Npc_oasis050[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0202', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_oasis050[Finale].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraChallenge01:Talk_0203', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2})
    Npc_oasis050[Finale].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_UMiiVillage031[Finale].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Goron025.EventDoNothing({'IsWaitEnd': False})
    Npc_HighMountain010.EventDoNothing({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IchikaraChallenge01_ClearDelete', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Ichikara_JobFieldIn', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Ichikara_VillageIn', 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [1.0499999523162842, 1.8200000524520874, -5.210000038146973], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'IchikaraChallenge01', 'IsIgnoreCompletedChallenge': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IchikaraChallenge01_AmberGetBackHome', 'Value': False, 'Index': -1})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_OT_0004', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}
