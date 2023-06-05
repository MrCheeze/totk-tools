-------- EventFlow: Grab_MasterSword --------

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput', 'EventOpenDoCommand', 'EventCloseDoCommand', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventRequestBreakawaySubstanceSage']
queries: ['EventQueryMasterSwordChallengeResultState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDragonMoveToRelativeTargetPos', 'EventDragonControlHoldingActorVisible', 'EventTriggerDragonRequestCreateHairActor', 'EventPlayAS', 'EventTriggerDragonSetHairVisiblityStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '', 'ModelFixedType': 0, 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerClearModelBindAndDependency', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundStartSound', 'EventTriggerSoundStopSound', 'EventTriggerSoundRequestWaitSetupNextEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventDragonManagerController
entrypoint: None()
actions: ['EventDragonWarpToTargetStartPos']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart', 'Event_ResetEnvPaletteForFlowchart', 'EventTrigger_UsePlayerPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_Hair
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': False, 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectCloudDisplayOff', 'EventEffectCloudDisplayOn', 'EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController[0]
entrypoint: None()
actions: ['Event_SetWeatherForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Grab() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Start()

    switch ChallengeSystemActor.EventQueryMasterSwordChallengeResultState() {
      case 0:
        Enemy_Dragon_Light_001.EventTriggerDragonRequestCreateHairActor()
        EventDragonManagerController.EventDragonWarpToTargetStartPos({'ActorName': 'Enemy_Dragon_Light_001', 'InstanceName': '', 'StartPosName': 'MasterSwordGetPoint'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            Enemy_Dragon_Light_001.EventDragonMoveToRelativeTargetPos({'IsWaitEnd': False, 'MoveSpeed': 0.0, 'DecelerationStartDistance': 0.0, 'TargetPos': [0.0, 0.0, 100.0], 'IsAllSlot': False, 'ASName': 'Demo_GrabSword_Wait'})
        }


        fork {
            EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'EnvPaletteName': 'Dm_SK_0004', 'EnvTimeTableName': 'Dm_SK_0004', 'ChangeSpeed': 1, 'IsWaitEnd': False})
        } {
            EventWorldManagerController[0].Event_SetWeatherForFlowchart({'WeatherType': 0, 'IsImmTrans': True})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
        Dm_Locator[demo].EventWarpToTargetPosAndRot({'Position': [1074.0, 3403.69189453125, 1373.656005859375], 'YAngle': -3.0, 'IsWaitEnd': True})
        EventEffectEmitter.EventEffectCloudDisplayOff()
        Player.EventTriggerEmitXLink({'ELinkKey': 'Grab_MasterSword_Env_SeaOfClouds', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Grab_MasterSword_Subspace', 'IsIgnoreDucking': False})
        Enemy_Dragon_Light_001.EventDragonControlHoldingActorVisible({'BindBoneName': 'Forehead_Sword_Hair', 'IsWaitEnd': True, 'IsVisible': True, 'RotOffset': [-90.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, -0.06340000033378601]})
        Enemy_Dragon_Light_001.EventTriggerDragonSetHairVisiblityStep({'Step': 1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Enemy_Dragon_Light_Hair.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hair_Wait'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerParticipateEvent()
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SK_0007', 'FadeInTypeEventEnd': 0})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})

        call Get()


        call GetAfter()

      case [1, 2, 3]:
        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_001', 'InstanceName': ''})
    }
}

void Get() {
    Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Demo_GrabSword_Wait'})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.07999999821186066, 0.5099999904632568, 6.010000228881836], 'AtVector': [0.05999999865889549, 0.550000011920929, 5.010000228881836], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'TurnFaceControlType': 1})
    GameSystemActor.EventOpenDoCommand({'DoActionType': 36, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 0})
    GameSystemActor.EventCloseDoCommand({'IsWaitEnd': True})
}

void GetAfter() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SK_0004', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Grab_MasterSword_Subspace', 'GroupName': '', 'FadeFrame': -1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SK_0003_PreRender'})
    Enemy_Dragon_Light_001.EventDragonControlHoldingActorVisible({'IsVisible': False, 'BindBoneName': 'Forehead_Sword_Hair', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True})
    Enemy_Dragon_Light_001.EventTriggerDragonSetHairVisiblityStep({'Step': 2})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SK_0009', 'FadeInTypeEventEnd': 2})
    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Grab_MasterSword_Env_SeaOfClouds', 'SLinkKey': '', 'IsKill': False})
    EventDragonManagerController.EventDragonWarpToTargetStartPos({'ActorName': 'Enemy_Dragon_Light_001', 'StartPosName': 'StartPos_Dragon_Dm_KS_0008', 'InstanceName': ''})
    EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': True})
    EventEffectEmitter.EventEffectCloudDisplayOn()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveMasterSword', 'Index': -1, 'Value': True})
    Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_001', 'InstanceName': ''})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'StartPos', 'InstanceName': 'GetOffTheWhiteDragon', 'IsWaitEnd': True, 'UseDemoWait': True})
    ChallengeSystemActor.EventRequestBreakawaySubstanceSage()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SK_0008'})
}

void Start() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    EventWorldManagerController.EventTrigger_UsePlayerPos()
    Enemy_Dragon_Light_001.EventTriggerParticipateEvent()

    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SK_0006', 'FadeInTypeEventEnd': 2})
}
