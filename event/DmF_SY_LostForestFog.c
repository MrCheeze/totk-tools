-------- EventFlow: DmF_SY_LostForestFog --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpSafePos', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWait', 'EventPlayerPostAbyss']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventWait', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerResetLostFog', 'EventTriggerFixLostFog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void ToSafePos() {
    EventWorldManagerController.EventTriggerFixLostFog()

    call FadeOut()

    Player.EventPlayerWarpSafePos({'IsWaitEnd': True})

    call FadeInForWarpSafePos()


    call AfterFadeIn()

}

void ToAnchorPos() {
    EventWorldManagerController.EventTriggerFixLostFog()

    call FadeOut()

    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LostForestReturnPos', 'NotChangeRot': False, 'UseDemoWait': True})

    call FadeIn()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NPC_Kokiri007_Talk', 'Index': -1}) {
        Event45:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 21})

        call AfterFadeIn()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NPC_Kokiri007_Appear'}) {

        call AfterFadeIn()

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnemyKilled_AccidentOfDekutree'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClueTotheSixthSage_IsAfter_Ready_Exp'})
        && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NPC_Kokiri007_Talk', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NPC_Kokiri007_Talk', 'Value': True, 'Index': -1})
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Kokiri007_Appear'})
        }
    } else {
        goto Event45
    }
}

void FadeOut() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'EnemyKilled_AccidentOfDekutree', 'Index': -1}) {

        fork {
            GameSystemActor.EventEventFadeOut({'Color': 1, 'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_LostForest_KorokLaughter', 'IsIgnoreDucking': False})
        }

    } else {
        GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }
    GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_LostForest_PlayerVoice', 'IsIgnoreDucking': False})
    GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 20})
}

void FadeIn() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Event7:
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    EventWorldManagerController.EventTriggerResetLostFog()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'EnemyKilled_AccidentOfDekutree', 'Index': -1}) {
        GameSystemActor.EventEventFadeIn({'Color': 1, 'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
    } else {
        GameSystemActor.EventEventFadeIn({'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 0})
    }
}

void AfterFadeIn() {
    if !Player.EventQueryCheckPlayerState({'State': 4}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 2.299999952316284, -5.0], 'AtVector': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'Frames': 84, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 0.800000011920929, -5.0], 'AtVector': [0.0, 0.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void FadeInForWarpSafePos() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    goto Event7
}
