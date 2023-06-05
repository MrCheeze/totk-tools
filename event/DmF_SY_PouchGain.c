-------- EventFlow: DmF_SY_PouchGain --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventSystemActor[L]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[R]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTalk', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_PouchGain/DmF_SY_PouchGain_Npc_Korogu_Minister/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_PouchGain_Npc_Korogu_Minister.root.as', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Korogu_Minister_Maracas
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Korogu_Minister_Maracas_Left
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenPouchForExpand', 'EventClosePouch', 'EventEventFadeIn', 'EventEventFadeOut', 'EventWait', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventTriggerSetMessageLogDisableSectionStart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Npc_PouchGain_Korok_01
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_PouchGain/DmF_SY_PouchGain_Npc_Korogu_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_PouchGain_Npc_Korogu_M_000.root.as', 'Position': [0.0, -10.0, 0.0], 'IsBindNearestActor': False}

Actor: Dm_Npc_PouchGain_Korok_02
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_PouchGain/DmF_SY_PouchGain_Npc_Korogu_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_PouchGain_Npc_Korogu_M_000.root.as', 'Position': [0.0, -10.0, 0.0], 'IsBindNearestActor': False}

Actor: Dm_Npc_PouchGain_Korok_03
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_PouchGain/DmF_SY_PouchGain_Npc_Korogu_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_PouchGain_Npc_Korogu_M_000.root.as', 'Position': [0.0, -10.0, 0.0], 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerExpandPouch']
queries: ['EventQueryIsPouchExpandNumMax']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dance_End() {
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 1, 'ReviseMode': 1, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
    } {
        Dm_Npc_PouchGain_Korok_01.EventWarpToTargetActor({'IsWaitEnd': False, 'OffsetBase': 1, 'PositionOffset': [0.0, -10.0, 0.0], 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'YAngle': 0.0})
        Dm_Npc_PouchGain_Korok_02.EventWarpToTargetActor({'IsWaitEnd': False, 'OffsetBase': 1, 'PositionOffset': [0.0, -10.0, 0.0], 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'YAngle': 0.0})
        Dm_Npc_PouchGain_Korok_03.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'PositionOffset': [0.0, -10.0, 0.0], 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'YAngle': 0.0})
        Dm_Npc_PouchGain_Korok_01.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Npc_PouchGain_Korok_02.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Npc_PouchGain_Korok_03.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': ''})
    }

    LastRiddenAnimal_ForEvent.EventTriggerRequestCancelPause()
}

void Dance_Start() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Dance', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})

        call Eff_Maracas_Shine_Start()

        GameSystemActor.EventWait({'Frames': 220, 'IsWaitEnd': True})

        call Eff_Maracas_Shine_Stop()

    } {
        EventSystemActor[L].EventWait({'IsWaitEnd': True, 'Frames': 67})
        Dm_Npc_PouchGain_Korok_01.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [-3.0, 2.299999952316284, 0.0], 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0})
        if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            Dm_Npc_PouchGain_Korok_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear'})
        }
        Dm_Npc_PouchGain_Korok_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'Dance_L', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 132})
        Dm_Npc_PouchGain_Korok_02.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 2.299999952316284, 3.0], 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0})
        if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            Dm_Npc_PouchGain_Korok_02.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear'})
        }
        Dm_Npc_PouchGain_Korok_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'Dance_F', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[R].EventWait({'IsWaitEnd': True, 'Frames': 99})
        Dm_Npc_PouchGain_Korok_03.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [3.0, 2.299999952316284, 0.0], 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0})
        if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            Dm_Npc_PouchGain_Korok_03.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear'})
        }
        Dm_Npc_PouchGain_Korok_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'Dance_R', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 1, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C05-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 7})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_PouchGain', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
            LastRiddenAnimal_ForEvent.EventTriggerRequestPause()
        }
    }

}

void EntryPoint0() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'OldKorok_NostalgicDance', 'Index': -1}) {

        call OldDance()

    } else {

        call Dance()

    }
}

void Eff_Maracas_Shine_Start() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon', 'SLinkKey': ''})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow', 'SLinkKey': ''})
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield', 'SLinkKey': ''})
    }
}

void Eff_Maracas_Shine_Stop() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon', 'SLinkKey': '', 'IsKill': False})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon', 'SLinkKey': '', 'IsKill': False})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow', 'SLinkKey': '', 'IsKill': False})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow', 'SLinkKey': '', 'IsKill': False})
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield', 'SLinkKey': '', 'IsKill': False})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield', 'SLinkKey': '', 'IsKill': False})
    }
}

void Eff_Maracas_Shine_Pop() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Weapon', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Weapon', 'SLinkKey': ''})
        Event160:
        Npc_EventStarter.EventTriggerEmitXLink({'SLinkKey': 'DanceEnd', 'ELinkKey': ''})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Bow', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Bow', 'SLinkKey': ''})
        goto Event160
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Shield', 'SLinkKey': ''})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Shield', 'SLinkKey': ''})
        goto Event160
    }
}

void OldDance() {

    call OldDance_Ready()

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    fork {
        EventSystemActor[Sound].EventWait({'Frames': 10, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_DmF_SY_PouchGain_OldDance'})
    } {

        call OldDance_Start()

    } {

        call OldDance_Camera()

    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Npc_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'OldDance-Npc_Korogu_Minister-A-0_Loop', 'ForceFadeInFrame': 0.0})
        EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Event100:

        call OldDance_End()

        EventSystemActor.EventWait({'Frames': 55, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 1, 'ReviseMode': 1, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        goto Event100
    }
}

void OldDance_Camera() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Pos', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'A01-0', 'OverwriteStartFrame': 1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Pos', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'A02-0', 'OverwriteStartFrame': 1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [2.359999895095825, 3.5999999046325684, 4.0], 'AtVector': [0.0, 2.619999885559082, -0.12999999523162842], 'TargetFovy': 85.0, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Pos', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-2.380000114440918, 2.049999952316284, 3.1700000762939453], 'AtVector': [-0.029999999329447746, 2.4800000190734863, 0.5400000214576721], 'TargetFovy': 85.0, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Pos', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Pos', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'A03-0', 'OverwriteStartFrame': 1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.5, 6.059999942779541, 4.289999961853027], 'AtVector': [0.0, 3.0999999046325684, -0.10999999940395355], 'TargetFovy': 50.0, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Pos', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [0.0, 7.260000228881836, 5.670000076293945], 'AtVector': [0.0, 3.9600000381469727, -0.10999999940395355], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void OldDance_Start() {
    Npc_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'ASName': 'OldDance', 'IsWaitEnd': False, 'IsAnimeDriven': True})

    call Old_Eff_Maracas_Shine_Start()

}

void OldDance_End() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 23})

    call Old_Eff_Maracas_Shine_Stop()


    call Old_Eff_Maracas_Shine_Pop()

}

void Dance_Ready() {
    Dm_Locator[Pos].EventTriggerParticipateEvent()
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventTriggerRequestLookAtTheFront()
    Player.EventTriggerParticipateEvent()
    Npc_Korogu_Minister_Maracas.EventTriggerParticipateEvent()
    Npc_Korogu_Minister_Maracas_Left.EventTriggerParticipateEvent()
    Dm_Npc_PouchGain_Korok_01.EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Npc_PouchGain_Korok_02.EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Npc_PouchGain_Korok_03.EventGoOffstageForUser({'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    if Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'ActorFileName': '', 'Type': 0}) {
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    }
}

void Dance() {

    call Dance_Ready()

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call Dance_Start()

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        call Dance_Skip()

    }

    call Eff_Maracas_Shine_Pop()

    EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})

    call Pouch()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Dance_End()

    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
}

void OldDance_Ready() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventTriggerRequestLookAtTheFront()
    Player.EventTriggerParticipateEvent()
    Dm_Locator[Pos].EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void Old_Eff_Maracas_Shine_Start() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon_Nostalgia'})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow_Nostalgia'})
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield_Nostalgia'})
    }
}

void Old_Eff_Maracas_Shine_Stop() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Weapon_Nostalgia'})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Bow_Nostalgia'})
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Shine_Shield_Nostalgia'})
    }
}

void Old_Eff_Maracas_Shine_Pop() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Weapon_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Weapon_Nostalgia'})
        Event161:
        Npc_EventStarter.EventTriggerEmitXLink({'SLinkKey': 'DanceEnd', 'ELinkKey': ''})
      case 1:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Bow_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Bow_Nostalgia'})
        goto Event161
      case 2:
        Npc_Korogu_Minister_Maracas.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Shield_Nostalgia'})
        Npc_Korogu_Minister_Maracas_Left.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_PouchGain_Korogu_Maracas_Pop_Shield_Nostalgia'})
        goto Event161
    }
}

void Pouch() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OldKorok_ExpandKind', 'Value': 1, 'Index': -1}) {
      case 0:
        if PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 0}) {
            PouchSystemActor.EventTriggerExpandPouch({'PouchCategory': 0})
            GameSystemActor.EventOpenPouchForExpand({'Category': 0, 'IsWaitEnd': True})
            Event163:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_GetMedium', 'CommandLife': 2, 'IsReleaseDucking': False})
            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk34', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Dance_Loop', 'IsNotOpenIfSkipedMostRecent': False})
                Event33:
                GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                GameSystemActor.EventClosePouch({'IsWaitEnd': True})
            } else {
                GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk34', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Dance', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event33
            }
        }
      case 1:
        if PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 1}) {
            PouchSystemActor.EventTriggerExpandPouch({'PouchCategory': 1})
            GameSystemActor.EventOpenPouchForExpand({'Category': 1, 'IsWaitEnd': True})
            goto Event163
        }
      case 2:
        if PouchSystemActor.EventQueryIsPouchExpandNumMax({'PouchCategory': 3}) {
            PouchSystemActor.EventTriggerExpandPouch({'PouchCategory': 3})
            GameSystemActor.EventOpenPouchForExpand({'Category': 3, 'IsWaitEnd': True})
            goto Event163
        }
    }
}

void Dance_Skip() {

    call Eff_Maracas_Shine_Stop()

    Dm_Npc_PouchGain_Korok_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'IsKill': True})
    Dm_Npc_PouchGain_Korok_02.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'IsKill': True})
    Dm_Npc_PouchGain_Korok_03.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'SLinkKey': 'DmF_SY_PouchGain_Korok_Appear', 'IsKill': True})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.0, 0.7900000214576721, 5.800000190734863], 'AtVector': [0.0, 3.25, -3.059999942779541], 'TargetFovy': 61.93000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_EventStarter', 'Actor1InstanceName': '', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Dance_Loop'})
    Dm_Npc_PouchGain_Korok_01.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'IsWaitEnd': False, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0, 'PositionOffset': [-3.0, 0.0, 0.0]})
    Dm_Npc_PouchGain_Korok_02.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'IsWaitEnd': False, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0, 'PositionOffset': [0.0, 0.0, 3.0]})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'OldKorok_InBaseCamp_01_Now', 'Index': -1}) {
        Dm_Npc_PouchGain_Korok_03.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0, 'IsWaitEnd': False, 'PositionOffset': [3.0, 0.30000001192092896, 0.0]})
    } else {
        Dm_Npc_PouchGain_Korok_03.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 0, 'PositionOffset': [3.0, 0.0, 0.0], 'IsWaitEnd': False})
    }
    Dm_Npc_PouchGain_Korok_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Dance_L_Loop', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    Dm_Npc_PouchGain_Korok_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Dance_F_Loop', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    Dm_Npc_PouchGain_Korok_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Dance_R_Loop', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
}
