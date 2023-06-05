-------- EventFlow: Dm_GA_0026 --------

Actor: Dm_Locator[Ganon_Pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToTargetActor', 'EventPlayerWait', 'EventPlayerHorseGetOff', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Ganondorf_Miasma_Parturition
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGanondorfMiasmaParturitionDisappear', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Ganondorf_Miasma/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Ganondorf_Miasma_Parturition.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsGrounding': False, 'IsWorld': True, 'Position': [-250.67999267578125, -2341.64111328125, -977.9580078125], 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Ganondorf_Miasma
entrypoint: None()
actions: ['EventPlayAS', 'EventGanondorfMiasmaSheathed', 'EventGanondorfMiasmaDrawn', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp', 'EventTriggerXLinkFadeByKey']
queries: ['EventQueryGanondorfMiasmaIsExistParturition']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Ganondorf_Miasma/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Ganondorf_Miasma.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor[Effects]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventTriggerRequestReplaceEventSkipDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventPlayAS', 'EventWarpToTargetActor', 'EventUnequipWeapon', 'EventTriggerLookAtObject', 'EventNpcRitoLand']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Rito_Moto_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Rito_Moto_Young.root.as', 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventWarpToTargetActor', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Goron_HeroDescendants_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Goron_HeroDescendants_Sage.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Zora_Prince_Sage.root.as', 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventWarpToTargetActor', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_Gerudo_Queen_Young.root.as', 'IsBindNearestActor': False}

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSageWarpToNearAnchor', 'EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0026/Dm_GA_0026_Npc_RaumiGolem_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0026_Npc_RaumiGolem_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void EntryPoint0() {

    call ready()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_BossSecondFormChangeDemoShown'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }
    SoundSystemActor.EventTriggerRequestReplaceEventSkipDucking()

    call C01()

    if !Enemy_Ganondorf_Miasma.EventQueryGanondorfMiasmaIsExistParturition() {

        call C02()

    }

    call C03()


    call C04()


    call C05()


    call C06()

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': True})

        call prepare_battle()

        Enemy_Ganondorf_Miasma.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0026_Enm_Ganondorf_Miasma_Absorption', 'IsKill': True})
        Enemy_Ganondorf_Miasma.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GA_0026_Enm_Ganondorf_Miasma_Explosion', 'SLinkKey': '', 'IsKill': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.05999999865889549, 2.259999990463257, -0.699999988079071], 'AtVector': [0.05999999865889549, 1.7999999523162842, 4.579999923706055], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event10:

        call C07()

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'DefeatGanondorf_BossSecondFormChangeDemoShown', 'Index': -1})
    } else {
        goto Event10
    }
}

void ready() {
    Ganondorf_Miasma_Parturition.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-243.14109802246094, -2346.01806640625, -1017.2109985351562], 'YAngle': -141.8459930419922, 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Locator[Ganon_Pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-249.22000122070312, -2346.02001953125, -1025.0799560546875], 'YAngle': 38.15399932861328})
    Enemy_Ganondorf_Miasma.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Ganon_Pos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, -2.0], 'YAngle': 0.0})
    Enemy_Ganondorf_Miasma.EventPlayASWithClothWarp({'ClothWarpMode': 3, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Npc_Ganondorf_Miasma_Loop'})

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoLand({'IsWaitEnd': True, 'FlagOnly': True, 'FallSpped': 1.0, 'LandingHeight': 2.0, 'IsChangePhysicsSettingDynamic': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 93.2300033569336, 'PositionOffset': [-9.574700355529785, 0.0, 0.9814000129699707]})
        Npc_Tulin_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Wait_Npc_Rito_Moto_Young', 'IsAllSlot': True})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [7.160799980163574, 0.0, -7.368500232696533], 'YAngle': -49.01900100708008})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Wait_Npc_Goron_HeroDescendants_Sage', 'IsAllSlot': True})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 10.524999618530273, 'PositionOffset': [-3.7039999961853027, 0.0, -10.12969970703125]})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': 'Enemy_Ganondorf_Miasma', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Wait_Npc_Zora_Prince_Sage', 'IsAllSlot': True})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [-6.065800189971924, 0.0, 6.543799877166748], 'YAngle': 140.28399658203125})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': 'Enemy_Ganondorf_Miasma', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Wait_Npc_Gerudo_Queen_Young'})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [6.625100135803223, 0.0, 4.067299842834473], 'YAngle': -131.4429931640625})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Wait_Npc_RaumiGolem_Sage', 'IsAllSlot': True})
    } {
        Ganondorf_Miasma_Parturition.EventWarpToTargetActor({'TargetActorKind': 1, 'PositionOffset': [-21.760000228881836, 0.0, 3.990000009536743], 'YAngle': 90.44267272949219, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'InstanceName': 'Ganon_Pos', 'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_DeleteMiasmaParturition'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Enemy_Ganondorf_Miasma', 'SceneName': 'Ganon_Ready-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
    } {
        Enemy_Ganondorf_Miasma.EventGanondorfMiasmaSheathed({'ASName': 'Ganon_Ready-Npc_Ganondorf_Miasma', 'IsWaitEnd': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Ganondorf_Miasma_Parturition.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'BattleWait'})
}

void C02() {

    fork {
        Ganondorf_Miasma_Parturition.EventTriggerEmitXLink({'ELinkKey': 'Dm_GA_0026_PhantomGanon_Miasma_Disappear', 'SLinkKey': ''})
        Ganondorf_Miasma_Parturition.EventGanondorfMiasmaParturitionDisappear({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'Ganon_Ready_C02-0', 'TargetActorName': 'Ganondorf_Miasma_Parturition', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    } {
        Enemy_Ganondorf_Miasma.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ganon_Attack-Npc_Ganondorf_Miasma_Loop', 'IsWaitEnd': False, 'IsAllSlot': False})
    }

}

void C03() {

    fork {
        if !Enemy_Ganondorf_Miasma.EventQueryGanondorfMiasmaIsExistParturition() {
            Enemy_Ganondorf_Miasma.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True, 'ASName': 'Ganon_Attack_C03-Npc_Ganondorf_Miasma', 'IsWaitEnd': False})
        } else {
            Enemy_Ganondorf_Miasma.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ASName': 'Ganon_Attack_C03-Npc_Ganondorf_Miasma', 'ForceFadeInFrame': 90.0, 'IsWaitEnd': False})
        }
    } {
        Enemy_Ganondorf_Miasma.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0026_Enm_Ganondorf_Miasma_Absorption'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Enemy_Ganondorf_Miasma', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': True, 'IsLoop': False, 'SceneName': 'Ganon_Attack-0', 'CalcUpInInterpolate': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWait({'IsWaitEnd': False, 'Frames': 1})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 5.599999904632568})
    } {
        Ganondorf_Miasma_Parturition.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C05() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})

    fork {
        Enemy_Ganondorf_Miasma.EventGanondorfMiasmaDrawn({'IsWaitEnd': False, 'ASName': 'Ganon_provoke-Npc_Ganondorf_Miasma_C05'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Enemy_Ganondorf_Miasma', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'Ganon_provoke-0', 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 158})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }


    call prepare_battle()

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Enemy_Ganondorf_Miasma', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': True, 'IsLoop': False, 'SceneName': 'Ganon_Attack-1', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Enemy_Ganondorf_Miasma.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ASName': 'Ganon_Attack_C04-Npc_Ganondorf_Miasma', 'ForceFadeInFrame': 0.0})
    } {
        EventSystemActor[Effects].EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            Enemy_Ganondorf_Miasma.EventTriggerEmitXLink({'ELinkKey': 'Dm_GA_0026_Enm_Ganondorf_Miasma_Explosion', 'SLinkKey': ''})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

        fork {
            Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Ganon_Attack-Npc_Rito_Moto_Young', 'IsAnimeDriven': True, 'IsWaitEnd': False})
        } {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Ganon_Attack-Npc_Goron_HeroDescendants_Sage', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Ganon_Attack-Npc_Zora_Prince_Sage', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Ganon_Attack-Npc_Gerudo_Queen_Young', 'IsAnimeDriven': True, 'IsWaitEnd': False})
        } {
            Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Ganon_Attack-Npc_RaumiGolem_Sage', 'IsWaitEnd': False, 'IsAllSlot': True, 'IsAnimeDriven': True})
        }

    }

}

void C06() {

    fork {
        Enemy_Ganondorf_Miasma.EventPlayASWithClothWarp({'ASName': 'Ganon_provoke-Npc_Ganondorf_Miasma', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Enemy_Ganondorf_Miasma', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'IsLoop': False, 'SceneName': 'Ganon_provoke-1', 'CalcUpInInterpolate': False})
    }

}

void prepare_battle() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_SageDown'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode'})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_KO', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'RitoSagePos_Ganon2BattleDown'})
        Event143:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Value': False})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_KO', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'GoronSagePos_Ganon2BattleDown'})
            Event149:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode'})
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_KO', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'ZoraSagePos_Ganon2BattleDown'})
                Event151:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode'})
                    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_KO', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'GerudoSagePos_Ganon2BattleDown'})
                    Event153:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsCompleted_Exp'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Soul.IsFollowMode'})
                        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_KO', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
                        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'ZonauSagePos_Ganon2BattleDown'})
                    } else {
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    }
                } else
                goto Event153
            } else
            goto Event151
        } else
        goto Event149
    } else
    goto Event143
}

void C07() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.05999999865889549, 2.259999990463257, -0.699999988079071], 'AtVector': [0.05999999865889549, 1.7999999523162842, 4.579999923706055], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': False})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_Ganondorf_Miasma', 'InstanceName': '', 'OffsetBase': 1, 'YAngle': -180.0, 'IsWaitEnd': True, 'PositionOffset': [-0.08089999854564667, 0.0, 11.942899703979492], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.05999999865889549, 2.259999990463257, -0.699999988079071], 'AtVector': [0.05999999865889549, 1.7999999523162842, 4.579999923706055], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Ganondorf_Miasma.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'Ganon_provoke-Npc_Ganondorf_Miasma_LockOnWait', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}
