-------- EventFlow: ChangePouch --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerChangePouch', 'EventTriggerClearPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventEventFadeOut', 'EventEventFadeIn', 'EventDeleteActorAtClearEnemyDungeon', 'EventWait', 'EventTriggerCloseSimpleInfo']
queries: ['EventQueryIsClearDungeon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventTriggerSetLifeForNakedDungeon', 'EventPlayerUnequip', 'EventTriggerHealLifeMax', 'EventPlayerHorseGetOff', 'EventPlayerClimbOff', 'EventPlayerWarpToStarterLinkAnchor', 'EventWaitCreationFinishedEquipment']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Leave() {
    if GameSystemActor.EventQueryIsClearDungeon() {
        PouchSystemActor.EventTriggerChangePouch({'ChangeType': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.IsUseTemporaryLife'}) {
            Player.EventTriggerHealLifeMax()
        } else {
            Player.EventTriggerSetLifeForNakedDungeon({'ChangeType': 1})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SetRespawnFlagToFalseProhibition', 'Index': -1})
        GameSystemActor.EventTriggerCloseSimpleInfo()
        Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    }
}

void Return() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeon3Arrive:talk08', 'IsWithAncientGlyph': True, 'IsUnder': False})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    if Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BattleDungeon_FinishOnNaraku', 'Index': -1}) {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BattleDungeon_FinishNaraku', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    }
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SetRespawnFlagToFalseProhibition', 'Value': False, 'Index': -1})
    GameSystemActor.EventDeleteActorAtClearEnemyDungeon({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    PouchSystemActor.EventTriggerChangePouch({'ChangeType': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.IsUseTemporaryLife'}) {
        Player.EventTriggerSetLifeForNakedDungeon({'ChangeType': 0})
    }
    PouchSystemActor.EventTriggerClearPouch({'ClearType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    GameSystemActor.EventTriggerCloseSimpleInfo()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}

void ReturnNoVoice() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SetRespawnFlagToFalseProhibition', 'Value': False, 'Index': -1})
    PouchSystemActor.EventTriggerChangePouch({'ChangeType': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.IsUseTemporaryLife'}) {
        Player.EventTriggerSetLifeForNakedDungeon({'ChangeType': 0})
    }
    PouchSystemActor.EventTriggerClearPouch({'ClearType': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SmallDungeon_TmpFlag_00', 'Value': True, 'Index': -1})
    GameSystemActor.EventTriggerCloseSimpleInfo()
}
