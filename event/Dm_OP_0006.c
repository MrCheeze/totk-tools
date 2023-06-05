-------- EventFlow: Dm_OP_0006 --------

Actor: Dm_Locator[Golem_pos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Accessory_SupportDevice_Acting
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0020/Dm_OP_0020_Item_PurahPadDemo/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0006_Accessory_SupportDevice_Acting.root.as', 'Position': [0.0, -1.0, 0.0], 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_00
entrypoint: None()
actions: ['EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTalk', 'EventPlayAS', 'EventWait', 'EventTriggerLookAtObject', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerSetHaveTalked']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0006/Dm_OP_0006_Npc_ZonauGolem_Servant_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0006_Npc_ZonauGolem_Servant_A.root.as', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventPlayerSetHeadArmorInvisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0006/Dm_OP_0006_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0006_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRollOverChallengeUI', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Cloth_Ancient
entrypoint: None()
actions: ['EventTriggerModelBind']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [0.0, -2.0, 0.0], 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Vibration]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'ModelFixedType': 1, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_19
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Pad]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0006/Dm_OP_0006_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0006_Dm_Locator.root.as', 'IsGrounding': False, 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})


    call ActiveZonauGolem()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()

}

void ActiveZonauGolem() {
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ASName': 'All_OFF', 'ForceFadeInFrame': -1.0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Npc_Zonau_Golem_Servant', 'KeyName': 'ZonauStringParticle'})
    Dm_Cloth_Ancient.EventTriggerModelBind({'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'InstanceName': '', 'BoneName': 'Drawer', 'RotOffset': [0.0, 95.80000305175781, 0.0], 'TransOffset': [0.10499999672174454, -0.03799999877810478, 0.004999999888241291]})
    Accessory_SupportDevice_Acting.EventTriggerModelBind({'InstanceName': '', 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'BoneName': 'Drawer', 'TransOffset': [0.10000000149011612, 0.014999999664723873, -0.003000000026077032], 'RotOffset': [0.0, 96.9000015258789, -15.0]})
    Dm_Locator[Golem_pos].EventWarpToTargetActor({'TargetActorKind': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': -40.0})
    Accessory_SupportDevice_Acting.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'DemoPowerOFF'})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'sleep_loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0})
}

void C01() {

    fork {
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventWarpToTargetPosAndRot({'Position': [449.88031005859375, 1640.8370361328125, 1310.47802734375], 'YAngle': -30.0, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASName': 'Light_ON', 'Partial': 'Material', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'PosVector': [-0.009999999776482582, 0.7400000095367432, 2.2300000190734863], 'AtVector': [0.0, 0.8100000023841858, 1.2300000190734863], 'TargetFovy': 25.75, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 180.0, 'TargetActorKind': 1, 'InstanceName': '', 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'PositionOffset': [0.0, 0.0, 3.0], 'OffsetBase': 1, 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dragon_Light_001.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_19.EventDoNothing({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C02() {

    fork {
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0006_Npc_Zonau_Golem_Servant_Smoke', 'SLinkKey': ''})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'ASName': 'Demo_WakeUp', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ASName': 'Arms_ON', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ASName': 'Neck_ON', 'ForceFadeInFrame': -1.0})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZE_0006_Npc_Zonau_Golem_Servant_ZonauStringParticle'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'InterpolateFrame': 0.0, 'TargetActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'TargetActorInstanceName': '', 'IsReferenceRootOnce': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Camera_Sin01'})
        EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Don', 'Length': 0.5})
        EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
        EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
        EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 0.0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'PosVector': [2.0799999237060547, 1.1200000047683716, 4.21999979019165], 'AtVector': [1.409999966621399, 1.2899999618530273, 3.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'surprize_loop', 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ForceFadeInFrame': -1.0, 'ASName': 'Mat_AllON'})
    }

    Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'to_wait', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsActivated_FirstIsland_00_NPCZonauGolem'})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_27', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'to_wait', 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': True})
}

void C04() {

    fork {
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Open', 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsWaitEnd': False, 'ASName': 'OpenWait', 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_00', 'PosVector': [0.7300000190734863, 2.2699999809265137, 1.5199999809265137], 'AtVector': [0.05999999865889549, 1.3899999856948853, 0.7200000286102295], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Accessory_SupportDevice_Acting.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'DemoStartUp'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventTalk({'MessageId': 'EventFlowMsg/MainChallenge:talk_28', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'OpenWait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void C05() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C05_take', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'InterpolateFrame': 0.0, 'SceneName': 'C05-0', 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Accessory_SupportDevice_Acting.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'PowerOFF'})
    } {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Npc_Zonau_Golem_Servant', 'KeyName': 'ZonauStringParticle'})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZE_0006_Npc_Zonau_Golem_Servant_ZonauStringParticle', 'IsKill': False})
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Dm_Locator[Pad].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Accessory_SupportDevice_Acting.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': 'Pad', 'RotOffset': [0.0, 0.0, 0.0]})
}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C06-0', 'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerSetHeadArmorInvisible({'Flag': False})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C06-Link', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Close', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Dm_Locator[Pad].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Pad_Locator_Anim', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})

        fork {
            Accessory_SupportDevice_Acting.EventPlayAS({'ASName': 'PowerON', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        } {
            EventSystemActor[Vibration].EventWait({'IsWaitEnd': True, 'Frames': 4})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Camera_Sin01'})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'UI_IsOpenMapFromChallengeScreen'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetZonauMajic', 'ChallengeName': 'MainChallenge', 'IsWaitEnd': True})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Obj_Album', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DRStone_Get', 'IsSuccess': True})


    call Common.OpenActionGuideScreen({'ActionGuideType': 4})

}

void C07() {
    Player.EventPlayerSetHeadArmorInvisible({'Flag': True})

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'LookPadOff', 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-2.369999885559082, 1.399999976158142, -1.0199999809265137], 'AtVector': [-1.6299999952316284, 1.5, -0.3499999940395355], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Accessory_SupportDevice_Acting.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_29', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_30', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_45', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MainChallenge:talk_60', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void C08() {
    Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [449.54998779296875, 1640.5999755859375, 1301.0], 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.690000057220459, 4.300000190734863, -6.139999866485596], 'AtVector': [2.8399999141693115, 2.25, 5.449999809265137], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 39.47999954223633, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [-2.3499999046325684, 4.949999809265137, -3.819999933242798], 'AtVector': [4.170000076293945, 2.8399999141693115, 7.760000228881836], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 150, 'TargetFovy': 33.45000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_56', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_58', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C09() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-2.369999885559082, 1.399999976158142, -1.0199999809265137], 'AtVector': [-1.6299999952316284, 1.5, -0.3499999940395355], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/MainChallenge:talk_57', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
}

void C10() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.8499999046325684, 3.4100000858306885, -5.159999847412109], 'AtVector': [-0.8799999952316284, 1.4199999570846558, 0.17000000178813934], 'TargetFovy': 45.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 60, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.8499999046325684, 3.4100000858306885, -5.159999847412109], 'AtVector': [-4.610000133514404, 2.75, 1.1799999475479126], 'TargetFovy': 45.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSky_IsActivateBridgeGateMark'})
}

void C11() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-4.409999847412109, 2.8499999046325684, -0.7400000095367432], 'AtVector': [-6.849999904632568, 1.059999942779541, 10.680000305175781], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 90, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-4.409999847412109, 2.8499999046325684, -0.7400000095367432], 'AtVector': [-6.849999904632568, 1.059999942779541, 10.680000305175781], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 32.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Enemy_Dragon_Light_001.EventDoNothing({'IsWaitEnd': True})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_OP_0006_Npc_Zonau_Clouds'})
    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': False})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}
