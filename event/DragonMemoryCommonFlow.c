-------- EventFlow: DragonMemoryCommonFlow --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenAdventureMemoryListScreen', 'EventCloseMinusMenu', 'EventWaitFinishAdventureMemoryDirection', 'EventOpenInstantTipsWithPictForAdventureMemory', 'EventShowMessageDialogArrowOnly', 'EventWaitForActorPresence', 'EventWait']
queries: ['EventQueryIsGetAdventureMemory']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_DragonTears_01
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventDragonManagerController
entrypoint: None()
actions: ['EventDragonWarpToNearestRailFromDestinationAnchor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void GetDragonTears01() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZE_Meet_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears01', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears01', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears01'})

    call PostCommon()

    if !GameSystemActor.EventQueryIsGetAdventureMemory() {

        call Process_DragonTears1()


        call OpenPlayButton({'OpenCondition': 28})

    } else {

        call OpenPlayButton({'OpenCondition': 28})


        call Process_DragonTears1()

    }
}

void GetDragonTears02() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0004_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears02', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears02', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears02'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 19})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears03() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0006_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears03', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears03', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears03'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 21})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears04() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZE_Molduga_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears04', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears04', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears04'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 29})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears05() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZE_LieServant_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears05', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears05', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears05'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 27})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears06() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0005_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears06', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears06', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears06'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 20})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears07() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZE_QueenDead_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears07', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears07', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears07'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 30})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears08() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZE_Birth_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears08', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears08', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears08'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 26})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears09() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0007_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears09', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears09', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears09'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 22})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears10() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0008_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears10', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears10', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears10'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 23})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears11() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0010_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears11', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears11', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears11'})

    call PostCommon()


    call OpenPlayButton({'OpenCondition': 24})


    call StepOperation()


    call SoundStartInGameBgm()

}

void GetDragonTears12() {

    call PreCommon()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZE_0011_PreRender', 'FadeInTypeEventEnd': 2})
    EventDragonManagerController.EventDragonWarpToNearestRailFromDestinationAnchor({'ActorName': 'Enemy_Dragon_Light_001', 'DestinationAnchorInstanceName': 'DragonWarpDestination_DragonTears12', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'IsVisitLocation.DragonTears12', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Complete_DragonTears12'})

    call PostCommon()

    EventSystemActor.EventTransition({'EventName': 'Dm_ZE_0014', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})

    call OpenPlayButton1({'OpenCondition': 25})

    GameSystemActor.EventOpenInstantTipsWithPictForAdventureMemory({'OpenCondition': 25})

    call SoundStartInGameBgm()

}

void PreCommon() {
    FldObj_DragonTears_01.EventDoNothing({'IsWaitEnd': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZE_0001'})
}

void PostCommon() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZE_0002'})
}

void OpenPlayButton() {
    if !GameSystemActor.EventQueryIsGetAdventureMemory() {
        GameSystemActor.EventOpenInstantTipsWithPictForAdventureMemory({'OpenCondition': 'OpenCondition'})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsGetAdventureMemory.IsOpenList'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventOpenAdventureMemoryListScreen({'IsWaitEnd': True, 'OpenCondition': 'OpenCondition', 'OpenType': 1})
        GameSystemActor.EventWaitFinishAdventureMemoryDirection({'IsWaitEnd': True})
        GameSystemActor.EventShowMessageDialogArrowOnly({'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    }
}

void StepOperation() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PlayNum_MemoryOfTheDragon', 'Value': 1, 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Residue_MemoryOfTheDragon', 'Value': -1})
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayNum_MemoryOfTheDragon', 'Index': -1, 'Value': 11}) {
        EventSystemActor.EventTransition({'EventName': 'Dm_ZE_0013', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir_Wanderer'}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MemoryOfTheDragon', 'StepName': 'Step2', 'IsIgnoreChallengeProgressUI': False})
        }
    }
}

void OpenPlayButton0() {
    if !GameSystemActor.EventQueryIsGetAdventureMemory() {
        GameSystemActor.EventOpenInstantTipsWithPictForAdventureMemory({'OpenCondition': 'OpenCondition'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsGetAdventureMemory.IsOpenList'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventOpenAdventureMemoryListScreen({'IsWaitEnd': True, 'OpenCondition': 'OpenCondition', 'OpenType': 1})
        GameSystemActor.EventWaitFinishAdventureMemoryDirection({'IsWaitEnd': True})
        GameSystemActor.EventShowMessageDialogArrowOnly({'IsWaitEnd': True})
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    }
}

void SoundStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': False, 'IsFadeIn': False, 'IsControlSpotBgm': True})
}

void OpenPlayButton1() {
    if !GameSystemActor.EventQueryIsGetAdventureMemory() {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsGetAdventureMemory.IsOpenList'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventOpenAdventureMemoryListScreen({'IsWaitEnd': True, 'OpenCondition': 'OpenCondition', 'OpenType': 1})
        GameSystemActor.EventWaitFinishAdventureMemoryDirection({'IsWaitEnd': True})
        GameSystemActor.EventShowMessageDialogArrowOnly({'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    }
}

void Process_DragonTears1() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayNum_MemoryOfTheDragon', 'Index': -1, 'Value': 10}) {
      case 0:
        Event13:

        call StepOperation()

        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayNum_MemoryOfTheDragon', 'Index': -1, 'Value': 11}) {
          case [0, 2]:
            Event119:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MemoryOfTheDragon_01Event', 'Index': -1, 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GroundPaintingAir01_IsAfter_Carry_Exp'}) {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GroundPaintingAir01', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                Event116:
                GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Wanderer', 'IsWaitEnd': True, 'InstanceName': 'MOTD_Event'})
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DragonMemory_Fast'})
            } else {
                goto Event116
            }
          case 1:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            goto Event119
        }
      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GroundPaintingAir_Wanderer', 'Index': -1, 'Value': True})
        goto Event13
      case 2:

        call SoundStartInGameBgm()

    }
}
