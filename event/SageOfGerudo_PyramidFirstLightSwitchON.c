-------- EventFlow: SageOfGerudo_PyramidFirstLightSwitchON --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint() {

    fork {

        fork {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'SpecialPower', 'KeyName': 'UltraHand_FollowDust'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'SpecialPower', 'KeyName': 'UltraHand_PlayerConnection'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'SpecialPower', 'KeyName': 'UltraHand_PlayerConnectionTop'})
        }

    } {

        fork {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DgnObj_Gerudo_LightSwithOneTime_A_01', 'Actor1InstanceName': 'DgnObj_Gerudo_LightSwith_A_01_9f38', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-4594.52001953125, 118.30000305175781, 3687.3798828125], 'AtVector': [-4590.68994140625, 118.52999877929688, 3683.550048828125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }

}
