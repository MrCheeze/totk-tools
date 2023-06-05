-------- EventFlow: Dm_ZN_0067 --------

Actor: Obj_Zonau_RuinStatue_A_03[OwlStatue01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head[HeadParts01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventPlayerLiftInstantly', 'EventPlayerHorseGetOff', 'EventTriggerPlayerRequestFallLiftActor', 'EventTriggerPlayerRequestKeepLifting', 'EventWait', 'EventPlayerClimbOff']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataEnum']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeOut', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_ZN_0067() {
    Player.EventTriggerPlayerRequestKeepLifting()
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    RaumiGolem_Parts_Head.EventTriggerParticipateEvent()
    Obj_Zonau_RuinStatue_A_03[OwlStatue01].EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Index': -1, 'Value': 'Ready'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_RuinStatue_A_03', 'Actor1InstanceName': 'OwlStatue01', 'PosVector': [0.009999999776482582, 4.670000076293945, 4.789999961853027], 'AtVector': [0.019999999552965164, 4.320000171661377, 4.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Obj_Zonau_RuinStatue_A_03[OwlStatue01].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Light_On', 'IsWaitEnd': True, 'Partial': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call Cut02()

}

void Cut02() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_RuinStatue_A_03', 'Actor1InstanceName': 'OwlStatue01', 'PosVector': [-0.41999998688697815, 3.109999895095825, 14.180000305175781], 'AtVector': [-0.10999999940395355, 4.71999979019165, 4.309999942779541], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 130, 'StartAccelerateRate': 0.30000001192092896, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestFallLiftActor()
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 5, 'IsRidingAny': True, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0012', 'FadeInTypeEventEnd': 2})
    Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_HiddenStairsAppear'})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'FrontOfRuins', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.6399999856948853, 2.799999952316284, -3.6500000953674316], 'AtVector': [-1.5700000524520874, 1.8700000047683716, 0.699999988079071], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Obj_Zonau_RuinStatue_A_03[OwlStatue01].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Light_Off', 'IsWaitEnd': True, 'Partial': ''})

    call Cut03()

}

void Cut03() {
    Player.EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    RaumiGolem_Parts_Head[HeadParts01].EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_AppearanceHead', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Value': 'Beam_CheckPoint02', 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerLiftInstantly({'IsWaitEnd': True, 'ActorName': 'RaumiGolem_Parts_Head', 'InstanceName': 'HeadParts01'})
    Player.EventPlayerWait({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}
