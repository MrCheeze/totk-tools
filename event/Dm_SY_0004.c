-------- EventFlow: Dm_SY_0004 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventWait', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Npc_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventTriggerSoundBeginForbidDialogDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_001[Dm_SY_0004_0(Npc_Assassin_001)]
entrypoint: Dm_SY_0004_0(Npc_Assassin_001)
actions: ['EventTriggerParticipateEvent', 'EventReplaceWithActorInHolder']
queries: []
params: None

Actor: Enemy_Assassin_Junior[Dm_SY_0004_0(Enemy_Assassin_Junior)]
entrypoint: Dm_SY_0004_0(Enemy_Assassin_Junior)
actions: ['EventPlayAS']
queries: []
params: None

void BustUp_PlayerHide() {
    EventCamera.EventBustShotCamera({'TargetActorName': 'TargetActorName', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'CameraCollisionMode': 1, 'MoveTime': 15, 'Latitude': 10.0, 'Longitude': 30.0, 'TargetOffset': [0.0, -0.20000000298023224, 0.20000000298023224], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Dm_SY_0004_0() {
    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
    Npc_Assassin_001[Dm_SY_0004_0(Npc_Assassin_001)].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player.EventWait({'Frames': 1, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_Assassin_001[Dm_SY_0004_0(Npc_Assassin_001)].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, -1.5], 'Key': 'Identity', 'DropTable': 'DropTable', 'IsSwitch': False, 'IsNoHit': False})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})

    fork {
        Enemy_Assassin_Junior[Dm_SY_0004_0(Enemy_Assassin_Junior)].EventPlayAS({'IsWaitEnd': True, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Encounter', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[Npc_wait].EventWait({'Frames': 15, 'IsWaitEnd': True})
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'LockOnWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } else {
            Player.EventDoNothing({'IsWaitEnd': False})
        }
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Enemy_Assassin_Junior', 'TurnFaceControlType': 1, 'InstanceName': 'Enemy_Assassin_Junior_InstanceName'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 5.0})
}

void Sound_AssassinAppear() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinAppear', 'CommandLife': 2, 'IsReleaseDucking': False})
}

void Sound_Control() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
