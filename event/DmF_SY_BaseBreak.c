-------- EventFlow: DmF_SY_BaseBreak --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnImaginaryLineCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Zonau
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_AssassinBase_B_02
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[TBox_Assassin_Energy]
entrypoint: None()
actions: ['EventTriggerTreasureBoxUnlocked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[TBox_Assassin_Draft]
entrypoint: None()
actions: ['EventTriggerTreasureBoxUnlocked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerStopInAir', 'EventPlayerWait']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy[Impl(TBox_Field_Enemy)]
entrypoint: Impl(TBox_Field_Enemy)
actions: ['EventPlayAS', 'EventTriggerTreasureBoxUnlocked']
queries: []
params: None

void DmF_SY_BaseBreak() {

    call Impl({'Actor1ActorName': 'TBox_Field_Enemy', 'TBox_Field_Enemy': ActorIdentifier(name="TBox_Field_Enemy")})

}

void Impl() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:拠点全滅宝箱デモ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call AirStartUP_Player_BaseBreak()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'PosVector': [-3.412597894668579, 3.0074920654296875, 8.476539611816406], 'AtVectorSetType': 3, 'AtVector': [-0.6534420251846313, 1.1872860193252563, 1.7441710233688354], 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [-3.189574956893921, 2.8603670597076416, 7.9323811531066895], 'AtVector': [-1.117676019668579, 1.493468999862671, 2.876671075820923], 'MoveTime': 30, 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        TBox_Field_Enemy[Impl(TBox_Field_Enemy)].EventPlayAS({'IsWaitEnd': True, 'SlotIdx': 0, 'IsAnimeDriven': False, 'ASName': 'Unlock', 'IsAllSlot': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})

        fork {
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
        } {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            TBox_Field_Enemy[Impl(TBox_Field_Enemy)].EventTriggerTreasureBoxUnlocked()
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.5, 4.5], 'Actor1InstanceName': '', 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 13})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 7, 'PosVector': [0.0, 1.0, 3.0], 'AtVector': [0.0, 0.5, 0.0], 'Actor1InstanceName': '', 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventCamera.EventBasedOnImaginaryLineCamera({'TargetOffset': [0.0, 2.0, 0.0], 'BasePointActorName': 'Player', 'CameraCollisionMode': 0, 'MoveTime': 0, 'Latitude': 4.0, 'IdealDistance': 3.0, 'IsWaitEnd': True, 'BasePointActorInstanceName': '', 'EndPointActorInstanceName': '', 'EndPointActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void BaseBreak_Zonau() {

    call Impl({'Actor1ActorName': 'TBox_Field_Enemy_Zonau', 'TBox_Field_Enemy': ActorIdentifier(name="TBox_Field_Enemy_Zonau")})

}

void BaseBreak_Assassin() {

    call AirStartUP_Player_BaseBreak()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DesignateMatrixActor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceYUpwardAngle': 8.0, 'ToleranceYDownwardAngle': 8.0, 'TargetOffset': [0.0, 1.5, -3.5], 'IdealDistance': 12.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DesignateMatrixActor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceYUpwardAngle': 8.0, 'ToleranceYDownwardAngle': 8.0, 'IdealDistance': 6.0, 'TargetOffset': [0.0, 0.699999988079071, -3.5], 'MoveTime': 10, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    MinusObj_AssassinBase_B_02.EventTriggerEmitXLink({'ELinkKey': 'Unlock', 'SLinkKey': 'Dm_Seal_Unlock'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    TBox_Field_Enemy_Assassin[TBox_Assassin_Energy].EventTriggerTreasureBoxUnlocked()
    TBox_Field_Enemy_Assassin[TBox_Assassin_Draft].EventTriggerTreasureBoxUnlocked()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
}

void AirStartUP_Player_BaseBreak() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6})
        && !Player.EventQueryCheckPlayerState({'State': 8}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else {
        Player.EventPlayerWait({'IsWaitEnd': True})
    }
}
