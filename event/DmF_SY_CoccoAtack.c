-------- EventFlow: DmF_SY_CoccoAtack --------

Actor: Enemy_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetCctForwardSpeedZero', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'FadeType': 0, 'IsForceFadeTime': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード即)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Enemy_EventStarter.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CoccoAtack_Kokko_Angry_Feather'})
    Enemy_EventStarter.EventPlayAS({'ASName': 'Run', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_EventStarter', 'PosVectorSetType': 2, 'AtVectorSetType': 2, 'PosVector': [0.5199999809265137, 2.0, 2.9549999237060547], 'AtVector': [0.0, 0.800000011920929, 0.699999988079071], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Kokko_IsAngry', 'Index': -1, 'Value': True})
        Enemy_EventStarter.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
        Enemy_EventStarter.EventPlayAS({'ASName': 'Angry', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 55, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 15, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }

    Enemy_EventStarter.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CoccoAtack_Kokko_Angry_Feather', 'IsKill': False})
}
