-------- EventFlow: DivingSkyIsland --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStop', 'EventShowFinish', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerUnshowTimerUI', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventCloseMessageDialog', 'EventTriggerRequestAutoSave', 'EventWait', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_SkyIsland0001
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_SkyIsland0002
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_SkyIsland0003
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryIsPouchContent', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[InitializeGame(Npc_EventStarter)]
entrypoint: InitializeGame(Npc_EventStarter)
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_EventStarter[WarpToGoalPoint(NpcActor)]
entrypoint: WarpToGoalPoint(NpcActor)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[Goal_Sub_SkyIsland0001(NpcActor)]
entrypoint: Goal_Sub_SkyIsland0001(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Goal_Sub_SkyIsland0002(NpcActor)]
entrypoint: Goal_Sub_SkyIsland0002(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Goal_Sub_SkyIsland0003(NpcActor)]
entrypoint: Goal_Sub_SkyIsland0003(NpcActor)
actions: []
queries: []
params: None

void GoalSkyIsland0001() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_01', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call StopBGMQuick()


    call IfNewRecordThenShowUI({'HaveNewRecordFlag': 'MiniGame_SkyIsland0001_HaveNewRecord', 'TargetTimeSecond': 'MiniGame_SkyIsland0001_TargetTimeSecond'})


    call Goal_Sub_SkyIsland0001({'DefaultTargetTimeSec': 'MiniGame_SkyIsland0001_TargetTimeSecond', 'ArmorGetFlag': 'SkyIsland0001_ArmorGet', 'GoalPointName': 'SkyIsland0001_GoalPoint', 'ChallengeName': 'SkyIsland_MiniGame_01', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0001', 'HaveNewRecordFlag': 'MiniGame_SkyIsland0001_HaveNewRecord', 'SecondRecordData': 'MiniGame_SkyIsland0001_NewRecordSecond', 'MilliSecondRecordData': 'MiniGame_SkyIsland0001_NewRecordMilliSecond', 'ArmorName': 'Armor_1006_Upper', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0001"), 'NewRecordRewardActorName': 'Item_Enemy_131'})


    call CheckContinueGame01()

}

void GoalSkyIsland0002() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_02', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call StopBGMQuick()


    call IfNewRecordThenShowUI({'HaveNewRecordFlag': 'MiniGame_SkyIsland0002_HaveNewRecord', 'TargetTimeSecond': 'MiniGame_SkyIsland0002_TargetTimeSecond'})


    call Goal_Sub_SkyIsland0002({'DefaultTargetTimeSec': 'MiniGame_SkyIsland0002_TargetTimeSecond', 'GoalPointName': 'SkyIsland0002_GoalPoint', 'ArmorGetFlag': 'SkyIsland0002_ArmorGet', 'ChallengeName': 'SkyIsland_MiniGame_02', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0002', 'HaveNewRecordFlag': 'MiniGame_SkyIsland0002_HaveNewRecord', 'SecondRecordData': 'MiniGame_SkyIsland0002_NewRecordSecond', 'MilliSecondRecordData': 'MiniGame_SkyIsland0002_NewRecordMilliSecond', 'NewRecordRewardActorName': 'Item_Enemy_131', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0002"), 'ArmorName': 'Armor_1006_Lower'})


    call CheckContinueGame02()

}

void GoalSkyIsland0003() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_03', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call StopBGMQuick()


    call IfNewRecordThenShowUI({'HaveNewRecordFlag': 'MiniGame_SkyIsland0003_HaveNewRecord', 'TargetTimeSecond': 'MiniGame_SkyIsland0003_TargetTimeSecond'})


    call Goal_Sub_SkyIsland0003({'ArmorGetFlag': 'SkyIsland0003_ArmorGet', 'GoalPointName': 'SkyIsland0003_GoalPoint', 'DefaultTargetTimeSec': 'MiniGame_SkyIsland0003_TargetTimeSecond', 'ChallengeName': 'SkyIsland_MiniGame_03', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0003', 'HaveNewRecordFlag': 'MiniGame_SkyIsland0003_HaveNewRecord', 'SecondRecordData': 'MiniGame_SkyIsland0003_NewRecordSecond', 'MilliSecondRecordData': 'MiniGame_SkyIsland0003_NewRecordMilliSecond', 'NewRecordRewardActorName': 'Item_Enemy_131', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0003"), 'ArmorName': 'Armor_1006_Head'})


    call CheckContinueGame03()

}

void IfNewRecordThenShowUI() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
          case 0:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
                Event0:
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 0})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SkyIsland_TmpTargetMilliSecond', 'Operator': 4}) {
                goto Event0
            } else {
                Event341:
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            }
          case [1, 2]:
            goto Event341
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
      case 0:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'TargetTimeSecond'}) {
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        } else {
            Event344:
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        }
      case [1, 2]:
        goto Event344
    }
}

void SetTargetTimeToTmpData() {
    GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'SkyIsland_TmpTargetSecond', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'TargetSecond'})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'SkyIsland_TmpTargetMilliSecond', 'Index': -1, 'Value': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void SetNewRecordToTmpData() {
    GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'SkyIsland_TmpTargetSecond', 'SrcGameDataName': 'SecondRecordData', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'SkyIsland_TmpTargetMilliSecond', 'SrcGameDataName': 'MilliSecondRecordData', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void InitTimeTmpData() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'SkyIsland_TmpTargetSecond', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'SkyIsland_TmpTargetMilliSecond', 'Index': -1, 'Value': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void InitializeNoCountGame() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SkyIsland000X_Activated', 'Index': -1}) {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'SkyIsland000X_StartPoint', 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.15000000596046448, 2.119999885559082, -5.53000020980835], 'AtVector': [0.11999999731779099, 2.059999942779541, -4.53000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'RingFlag'})
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'RingFlag'})
        Event338:
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'SkyIsland000X_ReturnPoint', 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.15000000596046448, 2.119999885559082, -5.53000020980835], 'AtVector': [0.11999999731779099, 2.059999942779541, -4.53000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event338
    }
}

void InitializeGame() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'SkyIsland000X_StartPoint', 'UseDemoWait': True})
    Npc_EventStarter[InitializeGame(Npc_EventStarter)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.15000000596046448, 2.119999885559082, -5.53000020980835], 'AtVector': [0.11999999731779099, 2.059999942779541, -4.53000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'RingFlag'})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'RingFlag'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.EventTriggerShowReadyGoWithCountIn()

    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 179970})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Minigame_00', 'CommandLife': 2, 'IsReleaseDucking': True})
}

void WarpToGoalPoint() {

    call StopBGM_CommonFade()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'GoalPointName', 'UseDemoWait': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'RingFlag'})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPCActorName', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_EventStarter[WarpToGoalPoint(NpcActor)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': 'NpcActor'})

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Goal_Sub_SkyIsland0001() {

    call WarpToGoalPoint({'GoalPointName': 'GoalPointName', 'NpcActor': 'NpcActor', 'NPCActorName': 'NPCActorName', 'RingFlag': 'MiniGame_SkyIsland0001_CreateRing'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ArmorGetFlag'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
          case 0:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
                Event94:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch01({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ZonaniumNotReceived'})

                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch01({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ZonaniumNotReceived'})

                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
                }
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 0})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SkyIsland_TmpTargetMilliSecond', 'Operator': 4}) {
                goto Event94
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call TargetTimeReward01()

                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event111:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0001_ArmorGetGoodTimeSecond'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case [1, 2]:
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event111
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
      case 0:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


            call IsEnableToAddPouch01({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ArmorAndZonaniumNotReceived'})

            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})

            call IsEnableToAddPouch01({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ZonaniumNotReceived'})

            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0001_ArmorGetGoodTimeSecond'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch01({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_60', 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch01({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0001_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            }
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2]:
        Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void CourseOutSkyIsland0001() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call Common.AirStartUP_Player()

    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_15', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call WarpToGoalPoint({'GoalPointName': 'SkyIsland0001_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0001', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0001"), 'RingFlag': 'MiniGame_SkyIsland0001_CreateRing'})

    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_01', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

    call CheckContinueGame01()

}

void CourseOutSkyIsland0002() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call Common.AirStartUP_Player()

    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call WarpToGoalPoint({'GoalPointName': 'SkyIsland0002_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0002', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0002"), 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing'})

    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_02', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

    call CheckContinueGame02()

}

void CourseOutSkyIsland0003() {
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call Common.AirStartUP_Player()

    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call WarpToGoalPoint({'GoalPointName': 'SkyIsland0003_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0003', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0003"), 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing'})

    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Finish', 'ChallengeName': 'SkyIsland_MiniGame_03', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

    call CheckContinueGame03()

}

void UpdateNewRecord() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerSecond', 'DstGameDataName': 'SecondRecordData'})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'MilliSecondRecordData'})

    call SetNewRecordToTmpData({'SecondRecordData': 'MiniGame_TimerSecond', 'MilliSecondRecordData': 'MiniGame_TimerMilliSecond'})

}

void Goal_Sub_SkyIsland0002() {

    call WarpToGoalPoint({'GoalPointName': 'GoalPointName', 'NpcActor': 'NpcActor', 'NPCActorName': 'NPCActorName', 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ArmorGetFlag'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
          case 0:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
                Event178:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch02({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0002_ZonaniumNotReceived'})

                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch02({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0002_ZonaniumNotReceived'})

                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
                }
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 0})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SkyIsland_TmpTargetMilliSecond', 'Operator': 4}) {
                goto Event178
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call TargetTimeReward02()

                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event184:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0002_ArmorGetGoodTimeSecond'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case [1, 2]:
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event184
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
      case 0:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


            call IsEnableToAddPouch02({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0002_ArmorAndZonaniumNotReceived'})

            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})

            call IsEnableToAddPouch02({'NotReceivedFlag': 'MiniGame_SkyIsland0002_ZonaniumNotReceived', 'ActorName': 'NewRecordRewardActorName'})

            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0002_ArmorGetGoodTimeSecond'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch02({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0002_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_60', 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch02({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0002_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            }
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2]:
        Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Goal_Sub_SkyIsland0003() {

    call WarpToGoalPoint({'GoalPointName': 'GoalPointName', 'NpcActor': 'NpcActor', 'NPCActorName': 'NPCActorName', 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ArmorGetFlag'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
          case 0:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
                Event230:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch03({'NotReceivedFlag': 'MiniGame_SkyIsland0003_ZonaniumNotReceived', 'ActorName': 'NewRecordRewardActorName'})

                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


                    call IsEnableToAddPouch03({'NotReceivedFlag': 'MiniGame_SkyIsland0003_ZonaniumNotReceived', 'ActorName': 'NewRecordRewardActorName'})

                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
                }
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 0})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SkyIsland_TmpTargetMilliSecond', 'Operator': 4}) {
                goto Event230
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call TargetTimeReward03()

                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event236:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveNewRecordFlag'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0003_ArmorGetGoodTimeSecond'}) {
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case [1, 2]:
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event236
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_TimerMinute', 'Value': 1, 'Index': -1}) {
      case 0:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'DefaultTargetTimeSec'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call UpdateNewRecord({'SecondRecordData': 'SecondRecordData', 'MilliSecondRecordData': 'MilliSecondRecordData'})


            call IsEnableToAddPouch03({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0003_ArmorAndZonaniumNotReceived'})

            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})

            call IsEnableToAddPouch03({'ActorName': 'NewRecordRewardActorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0003_ZonaniumNotReceived'})

            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveNewRecordFlag'})
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'SkyIsland_TmpTargetSecond', 'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_SkyIsland0003_ArmorGetGoodTimeSecond'}) {
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch03({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0003_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_60', 'IsNotOpenIfSkipedMostRecent': False})

                call IsEnableToAddPouch03({'ActorName': 'ArmorName', 'NotReceivedFlag': 'MiniGame_SkyIsland0003_ArmorNotReceived'})


                call SetTargetTimeToTmpData({'TargetSecond': 'DefaultTargetTimeSec'})

                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_61', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ArmorGetFlag'})
            }
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2]:
        Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void StopBGM() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_00', 'IsUseSuspendFade': False})
}

void RingMissed01() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player_ConsideringSwimming()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_01_IsAfter_EasyGamePlaying_Exp'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    }
    if !Player.EventQueryCheckPlayerState({'State': 3}) {

        call StopBGM()

        Event285:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_01_IsAfter_EasyGamePlaying_Exp'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_22', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0001_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0001', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0001"), 'RingFlag': 'MiniGame_SkyIsland0001_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CheckContinueGame01()

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0001_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0001', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0001"), 'RingFlag': 'MiniGame_SkyIsland0001_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_28', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call InitializeNoCountGame({'SkyIsland000X_ReturnPoint': 'SkyIsland0001_ReturnPoint', 'SkyIsland000X_Activated': 'SkyIsland0001_Activated', 'SkyIsland000X_StartPoint': 'SkyIsland0001_StartPoint', 'RingFlag': 'MiniGame_SkyIsland0001_CreateRing'})

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'EasyGamePlaying', 'ChallengeName': 'SkyIsland_MiniGame_01', 'IsWaitEnd': True})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})

                call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_01'})

            }
        }
    } else {

        call StopBGMQuick()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        goto Event285
    }
}

void RingMissed02() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player_ConsideringSwimming()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_02_IsAfter_EasyGamePlaying_Exp'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    }
    if !Player.EventQueryCheckPlayerState({'State': 3}) {

        call StopBGM()

        Event315:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_02_IsAfter_EasyGamePlaying_Exp'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0002_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0002', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0002"), 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})

            call CheckContinueGame02()

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0002_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0002', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0002"), 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call InitializeNoCountGame({'SkyIsland000X_ReturnPoint': 'SkyIsland0002_ReturnPoint', 'SkyIsland000X_Activated': 'SkyIsland0002_Activated', 'SkyIsland000X_StartPoint': 'SkyIsland0002_StartPoint', 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing'})

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'EasyGamePlaying', 'ChallengeName': 'SkyIsland_MiniGame_02', 'IsWaitEnd': True})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})

                call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_02'})

            }
        }
    } else {

        call StopBGMQuick()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        goto Event315
    }
}

void RingMissed03() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player_ConsideringSwimming()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_03_IsAfter_EasyGamePlaying_Exp'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    }
    if !Player.EventQueryCheckPlayerState({'State': 3}) {

        call StopBGM()

        Event334:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SkyIsland_MiniGame_03_IsAfter_EasyGamePlaying_Exp'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0003_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0003', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0003"), 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})

            call CheckContinueGame03()

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})

            call WarpToGoalPoint({'GoalPointName': 'SkyIsland0003_GoalPoint', 'NPCActorName': 'Npc_Zonau_Golem_Servant_SkyIsland0003', 'NpcActor': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0003"), 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing'})

            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call InitializeNoCountGame({'SkyIsland000X_ReturnPoint': 'SkyIsland0003_ReturnPoint', 'SkyIsland000X_Activated': 'SkyIsland0003_Activated', 'SkyIsland000X_StartPoint': 'SkyIsland0003_StartPoint', 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing'})

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'EasyGamePlaying', 'ChallengeName': 'SkyIsland_MiniGame_03', 'IsWaitEnd': True})
            } else {
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})

                call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_03'})

            }
        }
    } else {

        call StopBGMQuick()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        goto Event334
    }
}

void TargetTimeReward01() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 1, 'Index': -1})

        call IsEnableToAddPouchCapsule01({'ActorName': 'SpObj_FlameThrower_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_FlameThrower_Capsule_A_01'})

      case 1:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 2, 'Index': -1})

        call IsEnableToAddPouchCapsule01({'ActorName': 'SpObj_Cart_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_Cart_Capsule_A_01'})

      case 2:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 3, 'Index': -1})

        call IsEnableToAddPouchCapsule01({'ActorName': 'SpObj_LiftGeneratorWing_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_LiftGeneratorWing_Capsule_A_01'})

    }
}

void TargetTimeReward02() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule02({'ActorName': 'SpObj_Rocket_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_Rocket_Capsule_A_01'})

      case 1:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 2, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule02({'ActorName': 'SpObj_SpringPiston_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_SpringPiston_Capsule_A_01'})

      case 2:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 3, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule02({'ActorName': 'SpObj_CookSet_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_CookSet_Capsule_A_01'})

    }
}

void TargetTimeReward03() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule03({'ActorName': 'SpObj_ControlStick_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_ControlStick_Capsule_A_01'})

      case 1:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 2, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule03({'ActorName': 'SpObj_FloatingStone_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_FloatingStone_Capsule_A_01'})

      case 2:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 3, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1})

        call IsEnableToAddPouchCapsule03({'ActorName': 'SpObj_ElectricBoxGenerator_Capsule_A_01_Bundle_B', 'SingleActorName': 'SpObj_ElectricBoxGenerator_Capsule_A_01'})

    }
}

void IsEnableToAddPouch01() {
    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ActorName'}) {
        Event359:

        fork {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'ActorName'})

        } {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 0, 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NotReceivedFlag'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_SkyIsland0001_ZonaniumNotReceived', 'Index': -1}) {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_57', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event355:

        call InitTimeTmpData()

        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeStep': 'Ready', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SkyIsland_MiniGame_01', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void IsEnableToAddPouch02() {
    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ActorName'}) {
        Event376:

        fork {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'ActorName'})

        } {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NotReceivedFlag'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SkyIsland0002_ZonaniumNotReceived'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_57', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event372:

        call InitTimeTmpData()

        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeStep': 'Ready', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SkyIsland_MiniGame_02', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void IsEnableToAddPouch03() {
    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ActorName'}) {
        Event393:

        fork {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'ActorName'})

        } {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NotReceivedFlag'})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SkyIsland0003_ZonaniumNotReceived'}) {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_57', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event389:

        call InitTimeTmpData()

        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SkyIsland_MiniGame_03', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeStep': 'Ready'})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void ExitGame() {

    call InitTimeTmpData()

    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeStep': 'Ready', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'ChallengeName', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void CheckContinueGame01() {
    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_59', 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Enemy_130', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Enemy_130', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event271:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SkyIsland0001_HaveNewRecord'}) {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event449:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'HardGamePlaying', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SkyIsland_MiniGame_01', 'IsWaitEnd': True})

                call InitializeGame({'RingFlag': 'MiniGame_SkyIsland0001_CreateRing', 'SkyIsland000X_StartPoint': 'SkyIsland0001_StartPoint', 'Npc_EventStarter': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0001")})

            } else {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event449
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1}) {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event325:

            call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_01'})

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1, 'Value': True})
            goto Event271
        }
    } else {
        Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event325
    }
}

void CheckContinueGame02() {
    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Enemy_130', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Enemy_130', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event416:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SkyIsland0002_HaveNewRecord'}) {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                Event451:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'HardGamePlaying', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SkyIsland_MiniGame_02', 'IsWaitEnd': True})

                call InitializeGame({'SkyIsland000X_StartPoint': 'SkyIsland0002_StartPoint', 'RingFlag': 'MiniGame_SkyIsland0002_CreateRing', 'Npc_EventStarter': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0002")})

            } else {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_07', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event451
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1}) {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_14', 'IsNotOpenIfSkipedMostRecent': False})
            Event426:

            call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_02'})

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1, 'Value': True})
            goto Event416
        }
    } else {
        Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event426
    }
}

void CheckContinueGame03() {
    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Enemy_130', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Enemy_130', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event437:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SkyIsland0003_HaveNewRecord'}) {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                Event453:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'HardGamePlaying', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SkyIsland_MiniGame_03', 'IsWaitEnd': True})

                call InitializeGame({'SkyIsland000X_StartPoint': 'SkyIsland0003_StartPoint', 'RingFlag': 'MiniGame_SkyIsland0003_CreateRing', 'Npc_EventStarter': ActorIdentifier(name="Npc_Zonau_Golem_Servant_SkyIsland0003")})

            } else {
                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_07', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event453
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1}) {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_14', 'IsNotOpenIfSkipedMostRecent': False})
            Event447:

            call ExitGame({'ChallengeName': 'SkyIsland_MiniGame_03'})

        } else {
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DivingSkyIsland_FirstService', 'Index': -1, 'Value': True})
            goto Event437
        }
    } else {
        Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event447
    }
}

void IsEnableToAddPouchCapsule01() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'SingleActorName', 'Num': 5}) {
        goto Event359
    } else {
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 1, 'Index': -1}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 2, 'Index': -1}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_SkyIsland0001_CapsuleNotReceived', 'Value': 3, 'Index': -1}) {
                  case [0, 2]:
                    goto Event355
                  case 1:
                    Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_66', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event355
                }
              case 1:
                Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_65', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event355
            }
          case 1:
            Npc_Zonau_Golem_Servant_SkyIsland0001.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0001:Talk_64', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event355
        }
    }
}

void IsEnableToAddPouchCapsule03() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 5, 'Actor': 'SingleActorName'}) {
        goto Event393
    } else {
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'GameDataName': 'MiniGame_SkyIsland0003_CapsuleNotReceived', 'Index': -1}) {
                  case [0, 2]:
                    goto Event389
                  case 1:
                    Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_66', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event389
                }
              case 1:
                Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_65', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event389
            }
          case 1:
            Npc_Zonau_Golem_Servant_SkyIsland0003.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0003:Talk_64', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event389
        }
    }
}

void IsEnableToAddPouchCapsule02() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 5, 'Actor': 'SingleActorName'}) {
        goto Event376
    } else {
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'GameDataName': 'MiniGame_SkyIsland0002_CapsuleNotReceived', 'Index': -1}) {
                  case [0, 2]:
                    goto Event372
                  case 1:
                    Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_66', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event372
                }
              case 1:
                Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_65', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event372
            }
          case 1:
            Npc_Zonau_Golem_Servant_SkyIsland0002.EventTalk({'IsAnonymous': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_SkyIsland0002:Talk_64', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event372
        }
    }
}

void StopBGMQuick() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 80})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_00', 'IsUseSuspendFade': False})
}

void DelayCall60F_Dm_SY_0001() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2})
    EventSystemActor.EventTransition({'EventName': 'Dm_SY_0001', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void StopBGM_CommonFade() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 1, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_00', 'IsUseSuspendFade': True})
}
