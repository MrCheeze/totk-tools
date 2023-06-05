-------- EventFlow: SageOfFire --------

Actor: Npc_Goron033[NorthMine_Iffuru]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron011[NorthMine_Tokachin]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo[Appear_Yunbo]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventAIScheduleWarpToAnchor', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron033[Appear_Iffuru]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventAIScheduleMoveToAnchor', 'EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron011[Appear_Tokachin]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventAIScheduleMoveToAnchor', 'EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event[NorthMine_Zelda]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventEventNPCWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventSageWarpToNearAnchor', 'EventSageMoveToAnchor', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventSetMaterialVisible', 'EventUnequipWeapon', 'EventTriggerChangeEmotion']
queries: ['EventQueryNeedEquipWeapon']
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_SecretStone_A_01[SecretStoneFloor]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron011[Station]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron033[Station]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMessageDialog', 'EventTraverseAroundAndWaitCreateActor', 'EventUpdatePreActorInstanceVisibilityAll', 'EventWaitForSageSkillFinish', 'EventWaitForDynamicSagePresence', 'EventOpenActionGuideWithPictScreen', 'EventCloseActionGuideWithPictScreen', 'EventTriggerNoticeActionGuideWithPictScreenClosable', 'EventTriggerRequestAutoSave', 'EventTriggerDisableAutoSavePausing', 'EventTriggerEnterGameSafetySection', 'EventTriggerLeaveGameSafetySection', 'EventResetGimmick', 'EventTriggerCloseCompanionLifeGauge', 'EventClearActorsAroundAnchor', 'EventEnterGameSafetySection', 'EventTriggerEraseActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerMoveToAnchor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventPlayerHorseGetOff', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLookNow', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerClimbOff', 'EventTriggerParticipateEvent', 'EventWait', 'EventPlayerTalk']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse', 'EventQueryIsEquipArmor', 'EventQueryIsOwnedHorseNear']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron006
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor', 'EventTriggerChangeEmotion', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventWait']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron022
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerGameCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventTriggerSoundRequestWaitSetupNextEvent', 'EventSoundWaitForEventSoundFinished', 'EventTriggerSoundStopPreDieBossSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemovePouchContentAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Goron_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage_Puppet
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventHorseWarpToNearAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron017[01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Goron011[Finale_Tokachin]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_AfterSage[Finale_Yunbo]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron033[Finale_Iffuru]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_SecretStone_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_goron004
entrypoint: None()
actions: ['EventTriggerGoronEyeRecoveredFromMiasma']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_goron002
entrypoint: None()
actions: ['EventTriggerGoronEyeRecoveredFromMiasma']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_goron003[02]
entrypoint: None()
actions: ['EventTriggerGoronEyeRecoveredFromMiasma']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void DefeatBossMiddle() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiddleBoss_Goron', 'IsUseSuspendFade': False})
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call BossBattle_Common.BossBattle_CommonA()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Open_Crater', 'Value': True, 'Index': -1})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GO_0025', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Defeat_BossMiddle', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Yunbo_UnderCannon', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Yunbo_Crater', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_MtMiasmaEffect_Off', 'Value': False})

    call EndFollow()

    Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'Crater', 'IsWaitEnd': True, 'UseDemoWait': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0027'})
    EventCamera.EventTriggerGameCamera()
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'GoMinusField', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void DefeatBoss() {
    DungeonBoss_Goron_EventStarter.EventTriggerParticipateEvent()
    Obj_SecretStone_A_01.EventTriggerParticipateEvent()
    Obj_SecretStone_A_01[SecretStoneFloor].EventTriggerParticipateEvent()

    call BossBattle_Common.StopLowLayerBgm()

    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {

        call BossBattle_Common.BossBattle_CommonA()

    } {
        if !Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
        }
    }

    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_BossOut', 'FadeInTypeEventEnd': 2})

    fork {
        DungeonBoss_Goron_EventStarter.EventTriggerDeathSignal()
    } {

        call EndFollow()

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [1227.800048828125, -691.9500122070312, -2847.550048828125], 'AtVector': [1222.5, -693.2000122070312, -2847.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfFire_Defeat_Boss', 'Index': -1})
    }


    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LargeDungeonFire_SecretStone'})
    } {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'IsWaitEnd': True, 'InstanceName': 'LargeDungeonFire_DefeatBoss', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVector': [0.0, 3.0, -5.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'TouchSecretStone', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void GetSecretStone() {
    Event697:

    fork {

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        if !Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
        }
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_StoneGet', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_StoneMind', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GO_0021_PreRender'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GO_0022', 'FadeInTypeEventEnd': 2})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSetMaterialVisible({'IsWaitEnd': True, 'IsVisible': True, 'ModelAccessIndex': 0, 'MaterialName': 'Mt_SecretStone_Fire'})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSetMaterialVisible({'IsWaitEnd': True, 'IsVisible': True, 'ModelAccessIndex': 0, 'MaterialName': 'Mt_Belt'})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_Awake', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfFire_Erase_MeatRockWire', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfFire_VanishMiasmaRock', 'Index': -1})
    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'Obj_MeatRock_Miasma_A_01'})
    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'DungeonBoss_Goron_Rock_Weapon'})
    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'DungeonBoss_Goron_Rock_Weapon_Large'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.IsSageDynamicGenerate', 'Value': False})
    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextBanc': 'MainField', 'NextStartPos': 'ReturnFromDungeonFire', 'BootEventName': 'SageOfFire_FinishChallenge', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 1})
}

void FinishChallenge() {
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_RockDestroy', 'FadeInTypeEventEnd': 2})

    call RecoverRedEye()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        GameSystemActor.EventUpdatePreActorInstanceVisibilityAll()
        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmF_GO_GrandFinale', 'FadeInTypeEventEnd': 0})

    fork {
        Npc_Goron033[Finale_Iffuru].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Goron011[Finale_Tokachin].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Goron_Yunbo_AfterSage[Finale_Yunbo].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Goron006.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': True})
    }

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

    call MainChallenge.Check_4Sage()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'PlayerStatus.Companion.Fire.IsSummon', 'Index': -1})
    GameSystemActor.EventTriggerDisableAutoSavePausing()
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Dream_Npc_Goron033_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Goron', 'CheckUpper': False, 'CheckLower': False}) {
        Event377:
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk115', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Goron', 'CheckHead': False, 'CheckLower': False}) {
        goto Event377
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Goron', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
        goto Event377
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_183_Head', 'ArmorSlot': 0}) {
        goto Event377
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_194_Head', 'ArmorSlot': 0}) {
        goto Event377
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_195_Head', 'ArmorSlot': 0}) {
        goto Event377
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_196_Head', 'ArmorSlot': 0}) {
        goto Event377
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_197_Head', 'ArmorSlot': 0}) {
        goto Event377
    } else {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk114', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Dream_Npc_Goron011_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk129', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk112', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void DefeatBossMiddle_Npc_Goron006_Talk() {
    Event448:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Index': -1}) {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    }

    call BludoTalk()

}

void DefeatBoss_Npc_Goron006_Talk() {
    goto Event448
}

void TouchSecretStone_Npc_Goron006_Talk() {

    call BludoTalk()

}

void Dream_Npc_Goron006_Talk() {

    call BludoTalk()

}

void GoDungeon_Npc_Goron006_Talk() {
    goto Event448
}

void StartFollow() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Value': True, 'Index': -1})
}

void EndFollow() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Value': False, 'Index': -1})
}

void GoDungeon_Npc_Goron_Yunbo_Sage_FrontDungeon_Talk() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    call InitTalk.InitTalkExceptCamera({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_NearDungeonEntrance', 'Index': -1}) {
        Event109:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0014'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GoDungeon', 'IsWaitEnd': True})

        call StartFollow()

    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        fork {
            Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -91.4000015258789, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [1441.27001953125, -715.0, -2846.632080078125]})
        } {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'Position': [1440.3380126953125, -715.4500122070312, -2849.010009765625]})
        }

        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event109
    }
}

void Dream_BrokeMiasma() {

    call Common.AirStartUP_Player()

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Break_Miasma', 'Index': -1}) {
        GameSystemActor.EventWaitForSageSkillFinish({'IsWaitEnd': True, 'SageType': 2})

        call EndFollow()

        GameSystemActor.EventTriggerLeaveGameSafetySection()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Break_Miasma'})
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage"), 'Actor2': ActorIdentifier(name="Npc_Goron033", sub_name="NorthMine_Iffuru"), 'Actor3': ActorIdentifier(name="Npc_Goron011", sub_name="NorthMine_Tokachin"), 'Spearker1ActorName': 'Npc_Goron_Yunbo_Sage', 'Spearker2ActorName': 'Npc_Goron033', 'Spearker3ActorName': 'Npc_Goron011', 'Spearker1InstanceName': 'DynamicGenerateSage', 'Spearker2InstanceName': 'NorthMine_Iffuru', 'Spearker3InstanceName': 'NorthMine_Tokachin', 'Arg_Greeting': 3})

        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'AtVectorSetType': 1, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'CameraCollisionLookAtActor': 0, 'TargetFovy': 40.0, 'CameraCollisionMode': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Goron011', 'InstanceName': 'NorthMine_Tokachin', 'FaceControlType': 0, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk136', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False})
        } {
            Npc_Goron033[NorthMine_Iffuru].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Goron033[NorthMine_Iffuru].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        } {
            Npc_Goron011[NorthMine_Tokachin].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Goron011[NorthMine_Tokachin].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
        }


        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'IsWaitEnd': False, 'InstanceName': 'Yunbo_MineEntrance', 'ASName': 'Run_GoronRoll', 'AnchorType': 22})
        } {
            Npc_Goron033[NorthMine_Iffuru].EventAIScheduleMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'ASName': 'Run_GoronRoll', 'DesiredGear': 1, 'InstanceName': '', 'AnchorType': 10, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        } {
            Npc_Goron011[NorthMine_Tokachin].EventAIScheduleMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'ASName': 'Run_GoronRoll', 'DesiredGear': 1, 'InstanceName': '', 'AnchorType': 10, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        }

        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_AfterYunboBattle', 'IsUseSuspendFade': False})
        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GO_0026', 'FadeInTypeEventEnd': 2})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'GoCrater', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Yunbo_UnderCannon'})

        call StartFollow()

    }
}

void DefeatBossMiddle_Npc_Goron006_Near() {
    Event283:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SageOfFire:near83', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
}

void GoDungeon_Npc_Goron006_Near() {
    goto Event283
}

void DefeatBoss_Npc_Goron006_Near() {
    goto Event283
}

void TouchSecretStone_Npc_Goron006_Near() {
    goto Event283
}

void GoMinusField_Npc_Goron006_Talk() {

    call BludoTalk()

}

void GoCrater_Npc_Goron006_Talk() {
    goto Event448
}

void GoCrater_Npc_Goron_Yunbo_Sage_UnderTower_Talk() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'GoronMiddleBoss'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Appear_BossMiddle', 'Value': True, 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_NearCrater', 'Index': -1}) {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 0.0, 'Position': [2394.0, 944.0499877929688, -2554.0]})
    }
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GO_MiddleBossIn', 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfFire_Appear_BossMiddleAirPlane'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfFire_MtMiasmaEffect_Off'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0030'})

    call StartFollow()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'DefeatBossMiddle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Dream_DefeatYunbo() {

    call Common.AirStartUP_Player()

    Player.EventPlayerClimbOff({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GO_0031'})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_YunboPuppet', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.IsSageDynamicGenerate', 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventWaitForDynamicSagePresence({'SageType': 2, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Dream_IsFighting_Yunbo', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Dream_Defeat_Yunbo', 'Value': True})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'SageOfFire_Yunbo_Accessory', 'Value': 'Off'})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Npc_Zelda_Black_Event[NorthMine_Zelda].EventTriggerParticipateEvent()
    Npc_Zelda_Black_Event[NorthMine_Zelda].EventEventNPCWarpToAnchor({'IsWaitEnd': True, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'InstanceName': 'NorthMine_Zelda_Entrance'})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Yunbo_Tutorial'})
    Npc_Goron033[NorthMine_Iffuru].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '', 'ActionType': 0, 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Goron011[NorthMine_Tokachin].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '', 'ActionType': 0, 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.0, 'AnchorInstanceName': 'NorthMine_Player_TutorialPos'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0010'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Drop_Miasma'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GO_0012'})

    call StartFollow()

    GameSystemActor.EventOpenActionGuideWithPictScreen({'IsWaitEnd': True, 'ActionGuideCompanionOrderType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor.EventTriggerNoticeActionGuideWithPictScreenClosable()
    GameSystemActor.EventCloseActionGuideWithPictScreen({'IsWaitEnd': True})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Dream_IsTutorial', 'Value': True})
}

void Dream_EscapeBattle() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Goron033", sub_name="NorthMine_Iffuru")})


    fork {
        Npc_Goron033[NorthMine_Iffuru].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk97', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk98', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event658:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': True, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_BattlePos', 'NotChangeRot': False, 'UseDemoWait': True})
            Event662:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [0.0, 3.0, -4.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_BattlePos', 'NotChangeRot': False, 'UseDemoWait': True})
            goto Event662
        }
    } else {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk116', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk117', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event658
    }
}

void Dm_GO_0004() {

    call InitTalk.InitTalk_Trio({'Actor1': ActorIdentifier(name="Npc_Goron006"), 'Actor2': ActorIdentifier(name="Npc_Goron033", sub_name="Appear_Iffuru"), 'Actor3': ActorIdentifier(name="Npc_Goron011", sub_name="Appear_Tokachin"), 'Arg_Turn': 0, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Goron006', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Goron033', 'Spearker2InstanceName': 'Appear_Iffuru', 'Spearker3ActorName': 'Npc_Goron011', 'Spearker3InstanceName': 'Appear_Tokachin'})

    Npc_Goron022.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron022', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 30, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-7.164999961853027, 4.236000061035156, 1.0410000085830688], 'AtVector': [-6.140999794006348, 3.740000009536743, 0.9309999942779541], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Goron006.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron022', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'SageOfFire_Yunbo_Accessory', 'Value': 'On'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfFire_AppearanceDemo_End'})
    Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_00', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron033[Appear_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron022', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        Npc_Goron011[Appear_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_06', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin'})
    }

    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})

    fork {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_07', 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_Goron011[Appear_Tokachin].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
            Npc_Goron011[Appear_Tokachin].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_Goron011[Appear_Tokachin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Act_LookAround_Loop'})
        } {
            Npc_Goron033[Appear_Iffuru].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
            Npc_Goron033[Appear_Iffuru].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_Goron033[Appear_Iffuru].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Act_LookAround_Loop'})
        }

        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
    }


    fork {
        Npc_Goron006.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Yunbo_AppearPoint', 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Yunbo_AppearPoint', 'ActorName': 'DesignateMatrixActor', 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Yunbo_AppearPoint', 'ActorName': 'DesignateMatrixActor', 'ResetArriveTransformFixed': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Yunbo_AppearPoint', 'ActorName': 'DesignateMatrixActor'})
    }

    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})


    call GetOffHorse()

}

void Dream_Iffuru_DefeatYunbo_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefeatYunbo_F_Iffuru', 'Index': -1}) {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk122', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk120', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatYunbo_F_Iffuru', 'Value': True})
    }
}

void Dream_Tokachin_DefeatYunbo_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefeatYunbo_F_Tokachin', 'Index': -1}) {
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk121', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk119', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatYunbo_F_Tokachin', 'Value': True})
    }
}

void Iffuru_Intro_Talk() {
    Event163:

    call Dm_GO_0004()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GO_MeetAgain'})
    GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorInstanceName': 'Appear_PlayerPos', 'AnchorActorName': 'DestinationAnchor', 'Radius': 6.0, 'Height': 3.0, 'IsExcludePlacedAroundAnchor': False, 'IsEraseNPC': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Appear_PlayerPos', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True})

    fork {
        Npc_Goron006.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 6, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Goron006.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Goron006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Goron006.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron011[Appear_Tokachin].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Goron011[Appear_Tokachin].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
        Npc_Goron011[Appear_Tokachin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Goron033[Appear_Iffuru].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Goron033[Appear_Iffuru].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
        Npc_Goron033[Appear_Iffuru].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Goron_Yunbo[Appear_Yunbo].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
    }

    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    Npc_Goron017[01].EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron_Yunbo', 'Actor1InstanceName': 'Appear_Yunbo', 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-7.771999835968018, 2.63100004196167, -1.1510000228881836], 'AtVector': [-6.258999824523926, 2.2639999389648438, -0.527999997138977], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Dm_GO_0005()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'StepName': 'Dream', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Yunbo_First'})
}

void Tokachin_Intro_Talk() {
    goto Event163
}

void Bludo_Intro_Talk() {
    goto Event163
}

void Dm_GO_0005() {
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_17', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron006.EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_01', 'ASName': 'Wait_Angry', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron006', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_19', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin', 'ResetArriveTransformFixed': False})

    fork {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Goron011[Appear_Tokachin].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_23', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    }

    Npc_Goron011[Appear_Tokachin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'ResetArriveTransformFixed': False})
    Npc_Goron011[Appear_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_24', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron033', 'InstanceName': 'Appear_Iffuru', 'ResetArriveTransformFixed': False})

    fork {
        GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Goron033[Appear_Iffuru].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    }

    Npc_Goron033[Appear_Iffuru].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'ResetArriveTransformFixed': False})
    Npc_Goron033[Appear_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_26', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron006', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_27', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait_Angry', 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_20', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})

    fork {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_08', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
    }

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})

    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Goron006.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Goron006.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Goron006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Goron006.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_09', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron006.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron006.EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})

    fork {
        Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_10', 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron006', 'InstanceName': ''})
    }

    Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron006', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron033[Appear_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_11', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron033', 'InstanceName': 'Appear_Iffuru', 'ResetArriveTransformFixed': False})
    Npc_Goron011[Appear_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    fork {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }

    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_14', 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin', 'ResetArriveTransformFixed': False})

    fork {
        Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_15', 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Goron011[Appear_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron033[Appear_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'ResetArriveTransformFixed': False})
    }

    Npc_Goron006.EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo', 'InstanceName': 'Appear_Yunbo', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_16', 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Act_Pain_Talk', 'MessageId': 'EventFlowMsg/SageOfFire:Comment_18', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron006', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_21', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'Appear_Tokachin', 'ResetArriveTransformFixed': False})
    Npc_Goron_Yunbo[Appear_Yunbo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/SageOfFire:Comment_22', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Goron_Yunbo[Appear_Yunbo].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'InstanceName': 'GoToNorthMine', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'ASName': 'Run_GoronRoll', 'DesiredGear': 1, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    } {
        Npc_Goron033[Appear_Iffuru].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'InstanceName': 'GoToNorthMine', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'ASName': 'Run_GoronRoll', 'DesiredGear': 1, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    } {
        Npc_Goron011[Appear_Tokachin].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'InstanceName': 'GoToNorthMine', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'ASName': 'Run_GoronRoll', 'DesiredGear': 1, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    } {
        GameSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [5.099999904632568, 1.7999999523162842, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Dm_GO_0006() {

    call Common.AirStartUP_Player()


    call ResetPlayerState()

    Event721:
    GameSystemActor.EventTriggerRequestAutoSave()
    if !Npc_Goron033[NorthMine_Iffuru].EventQueryIsOnRecentTalkFlag() {

        call Init_DmGo0006()

        Npc_Goron033[NorthMine_Iffuru].EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/SageOfFire:talk113', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event39:
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_Goron011[NorthMine_Tokachin].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
                Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'NorthMine_Tokachin', 'ResetArriveTransformFixed': False})
                Npc_Goron033[NorthMine_Iffuru].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
            }

            Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk94', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron033', 'InstanceName': 'NorthMine_Iffuru', 'ResetArriveTransformFixed': False})
            Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk105', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
            } {
                Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
            }

            if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Goron', 'CheckUpper': False, 'CheckLower': False}) {
                Event229:
                Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk108', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
                Event277:
                Npc_Goron011[NorthMine_Tokachin].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                Npc_Goron033[NorthMine_Iffuru].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()

                fork {
                    Npc_Goron011[NorthMine_Tokachin].EventAIScheduleMoveToAnchor({'AnchorType': 6, 'InstanceName': '', 'ASName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'ActionType': 0, 'DesiredGear': 1, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                } {
                    Npc_Goron033[NorthMine_Iffuru].EventAIScheduleMoveToAnchor({'AnchorType': 6, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': False, 'InstanceName': '', 'ASName': '', 'ActionType': 0, 'DesiredGear': 1, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                }

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Dream_Enter_NorthMine', 'Value': True, 'Index': -1})
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Goron', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': False}) {
                goto Event229
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': True, 'CheckSeries': 'Goron', 'CheckHead': False, 'CheckUpper': False}) {
                goto Event229
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_183_Head', 'ArmorSlot': 0}) {
                goto Event229
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_194_Head', 'ArmorSlot': 0}) {
                goto Event229
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_195_Head', 'ArmorSlot': 0}) {
                goto Event229
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_196_Head', 'ArmorSlot': 0}) {
                goto Event229
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_197_Head', 'ArmorSlot': 0}) {
                goto Event229
            } else {
                Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk109', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk110', 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event277
            }
        } else {

            fork {
                Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron033', 'InstanceName': 'NorthMine_Iffuru', 'ResetArriveTransformFixed': False})
            } {
                Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'NorthMine_Tokachin', 'ResetArriveTransformFixed': False})
            }

            Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk95', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk112', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'AnchorInstanceName': 'NorthMine_Player_StartPos', 'Radius': 2.0, 'IsDeleteActor': False})
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_StartPos', 'NotChangeRot': False, 'UseDemoWait': True})
            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
                Event668:
                Npc_Goron011[NorthMine_Tokachin].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                Npc_Goron011[NorthMine_Tokachin].EventTriggerRequestLookAtTheFront()
                Npc_Goron033[NorthMine_Iffuru].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                Npc_Goron033[NorthMine_Iffuru].EventTriggerRequestLookAtTheFront()
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            } else
            if !Player.EventQueryIsOwnedHorseNear({'Distance': 10.0}) {
                LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'HorsePos_NorthMine'})
            }
            goto Event668
        }
    } else {

        call Init_DmGo0006()

        Npc_Goron033[NorthMine_Iffuru].EventTalk({'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:talk103', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk104', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:talk89', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron033', 'InstanceName': 'NorthMine_Iffuru', 'ResetArriveTransformFixed': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk90', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron011', 'InstanceName': 'NorthMine_Tokachin', 'ResetArriveTransformFixed': False})
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk91', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk92', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk93', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event39
    }
}

void Dream_ApproachYunbo() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0007'})
    Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'BrainWashing_EyeGlow_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_Goron033[NorthMine_Iffuru].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Goron011[NorthMine_Tokachin].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_BattlePos', 'NotChangeRot': False, 'UseDemoWait': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Dream_IsFighting_Yunbo'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventEnterGameSafetySection({'GameSafetySetting': 'GoronYunboPuppet', 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_YunboPuppet', 'CommandLife': 2, 'IsReleaseDucking': True})
}

void TouchSecretStone_Npc_Goron_Yunbo_Sage_InDungeon_Talk() {
    Obj_SecretStone_A_01[SecretStoneFloor].EventTriggerParticipateEvent()
    goto Event697
}

void EnterDungeon() {

    fork {

        call Common.AirStartUP_Player()

        if Player.EventQueryCheckPlayerState({'State': 5}) {

            call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

            Player.EventPlayerWait({'IsWaitEnd': True})
        }
    } {

        call YunboCheckWeapon()

    }

    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk140', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GO_0023', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'LargeDungeonFire_FloatUpMiasma', 'Index': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 40.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [1295.81298828125, -696.9879760742188, -2847.341064453125], 'AtVector': [1291.6949462890625, -696.4879760742188, -2847.54296875], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_FrontBossRoom', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerTurnAndLookNow({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Goron_Yunbo_Sage', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'DynamicGenerateSage', 'OffsetBase': 0})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'InstanceName': 'Yunbo_FrontBossRoom', 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor'})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk165', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void GoMinusField_Npc_Goron_Yunbo_UnderCrater_Near() {
    Event136:
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/SageOfFire:near01', 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 300, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GoCrater_Npc_Goron_Yunbo_Sage_UnderTower_Near() {
    goto Event136
}

void GoDungeon_Npc_Goron_Yunbo_Sage_FrontDungeon_Near() {
    goto Event136
}

void StartBossBattle_Npc_Goron006_Talk() {
    goto Event448
}

void StartBossBattle_Npc_Goron006_Near() {
    goto Event283
}

void Init_DmGo0006() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Goron033', 'Spearker1InstanceName': 'NorthMine_Iffuru', 'Spearker2ActorName': 'Npc_Goron011', 'Spearker2InstanceName': 'NorthMine_Tokachin', 'Actor1': ActorIdentifier(name="Npc_Goron033", sub_name="NorthMine_Iffuru"), 'Actor2': ActorIdentifier(name="Npc_Goron011", sub_name="NorthMine_Tokachin"), 'Arg_Turn': 3})

    Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
}

void Dungeon_Npc_Goron006_Talk() {
    goto Event448
}

void Dungeon_Npc_Goron006_Near() {
    goto Event283
}

void GoMinusField_Npc_Goron_Yunbo_Sage_FrontDungeon_Talk() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    call InitTalk.InitTalkExceptCamera({'Arg_Turn': 4, 'Arg_Greeting': 4})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GO_0013'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfFire_Yunbo_FrontDungeon'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GoEntranceDungeon', 'IsWaitEnd': True})

    call StartFollow()

}

void GoDungeon_Npc_Goron_Yunbo_Sage_FrontDungeon_SageOfFire_Arrive_FrontBossDoor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LargeDungeonFire_FloatUpMiasma'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk165', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk139', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void GoCrater_Npc_Goron033_NorthMine_Iffuru_Talk() {
    Event396:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Goron033", sub_name="NorthMine_Iffuru"), 'Actor2': ActorIdentifier(name="Npc_Goron011", sub_name="NorthMine_Tokachin"), 'Spearker1ActorName': 'Npc_Goron033', 'Spearker1InstanceName': 'NorthMine_Iffuru', 'Spearker2ActorName': 'Npc_Goron011', 'Spearker2InstanceName': 'NorthMine_Tokachin'})

    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk159', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'ActorName': 'Npc_Goron011', 'InstanceName': 'NorthMine_Tokachin', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron033[NorthMine_Iffuru].EventTalk({'MessageId': 'EventFlowMsg/SageOfFire:talk160', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'ActorName': 'Npc_Goron033', 'InstanceName': 'NorthMine_Iffuru', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk161', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk162', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void GoCrater_Npc_Goron011_NorthMine_Tokachin_Talk() {
    goto Event396
}

void Dream_Npc_Goron033_NorthMine_Iffuru_Talk() {
    Event410:

    call Dm_GO_0006()

}

void Dream_Npc_Goron011_NorthMine_Tokachin_Talk() {
    goto Event410
}

void NoticeChangeFollowMode() {

    call Common.AirStartUP_Player()


    call CleanAnchor()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_ArriveCrater'})

    call EndFollow()

    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event604:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk138', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Yunbo_FromCrater', 'Index': -1}) {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_MiddleBoss2'})
        } else {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_MiddleBoss'})
        }
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'IdealDistance': 0.6000000238418579, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event58:
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk132', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Yunbo_FromCrater', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 90, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [2365.169921875, 953.676025390625, -2558.16796875], 'AtVector': [2371.1201171875, 954.4660034179688, -2558.677978515625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Event192:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player', 'CameraCollisionMode': 1, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron_Yunbo_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 2.5, 0.0], 'PosVector': [0.0, 3.0, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                if !Player.EventQueryCheckPlayerState({'State': 6})
                && Player.EventQueryCheckPlayerState({'State': 5}) {
                    Player.EventPlayerTurnAndLook({'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 1.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0})
                }
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'IsWaitEnd': False, 'ASName': 'Run_GoronRoll', 'InstanceName': 'Yunbo_MiddleBoss', 'AnchorType': 0})
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 90, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [2365.169921875, 953.676025390625, -2558.16796875], 'AtVector': [2371.1201171875, 954.4660034179688, -2558.677978515625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            goto Event192
        }
    } else
    if !Player.EventQueryCheckPlayerState({'State': 26}) {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Yunbo_FromCrater', 'Index': -1}) {
                Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_MiddleBoss2'})
            } else {
                Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_MiddleBoss'})
            }
        } {
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'IdealDistance': 0.6000000238418579, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        goto Event58
    } else {
        goto Event604
    }
}

void NoticeChangeFollowMode_Dungeon() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'YunboChangeNpc_Entrance', 'IsDeleteActor': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_ArriveFrontDungeon', 'Index': -1, 'Value': True})

    call EndFollow()

    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event568:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk138', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_Entrance'})
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LookAtVectorY': 1, 'IdealDistance': 0.6000000238418579, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event362:
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [1445.0, -715.0, -2847.5], 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk133', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1457.2099609375, -708.8599853515625, -2847.47998046875], 'AtVector': [1453.9100341796875, -707.4099731445312, -2847.52001953125], 'TargetFovy': 50.0, 'MoveTime': 90, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player', 'CameraCollisionMode': 1, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron_Yunbo_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 2.5, 0.0], 'PosVector': [0.0, 3.0, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            if !Player.EventQueryCheckPlayerState({'State': 6})
            && Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 1.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'IsWaitEnd': False, 'ASName': 'Run_GoronRoll', 'InstanceName': 'Yunbo_FrontDungeon', 'AnchorType': 22})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !Player.EventQueryCheckPlayerState({'State': 26}) {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_Entrance'})
        } {
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LookAtVectorY': 1, 'IdealDistance': 0.6000000238418579, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        goto Event362
    } else {
        goto Event568
    }
}

void NoticeChangeFollowMode_BossDoor() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'YunboChangeNpc_BossDoor', 'IsDeleteActor': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Arrive_FrontBossDoor'})

    call EndFollow()

    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event326:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk138', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_BossDoor'})
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'LookAtVectorY': 1, 'IdealDistance': 0.6000000238418579, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event361:
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [1300.0, -695.0, -2847.5], 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk135', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1336.8499755859375, -695.97998046875, -2847.1298828125], 'AtVector': [1333.27001953125, -695.6799926757812, -2847.179931640625], 'TargetFovy': 50.0, 'MoveTime': 90, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player', 'CameraCollisionMode': 1, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron_Yunbo_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVectorSetType': 3, 'AtVector': [0.0, 2.5, 0.0], 'PosVector': [0.0, 3.0, -3.0], 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            if !Player.EventQueryCheckPlayerState({'State': 6})
            && Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerTurnAndLook({'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 1.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageMoveToAnchor({'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'IsWaitEnd': False, 'ASName': 'Run_GoronRoll', 'InstanceName': 'Yunbo_BossDoor', 'AnchorType': 0})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !Player.EventQueryCheckPlayerState({'State': 26}) {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

        fork {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'YunboChangeNpc_BossDoor'})
        } {
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Goron_Yunbo_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'TargetOffset': [0.0, 2.0, 0.0], 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 0, 'ToleranceXZAngle': 10.0, 'IdealDistance': 0.6000000238418579, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        goto Event361
    } else {
        goto Event326
    }
}

void GoCrater_Npc_Goron_Yunbo_Sage_DynamicGenerateSage_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Balloon_Trolley', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/SageOfFire:near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void DefeatBossMiddle_Npc_Goron033_Station_Talk() {
    Event404:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_Goron033', 'Spearker2ActorName': 'Npc_Goron011', 'Actor1': ActorIdentifier(name="Npc_Goron033", sub_name="Station"), 'Actor2': ActorIdentifier(name="Npc_Goron011", sub_name="Station"), 'Spearker1InstanceName': 'Station', 'Spearker2InstanceName': 'Station'})

    if !Npc_Goron011[Station].EventQueryIsOnRecentTalkFlag() {
        Npc_Goron011[Station].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk159', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron033[Station].EventTriggerLookAtObject({'ActorName': 'Npc_Goron011', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Station', 'ResetArriveTransformFixed': False})
        Npc_Goron033[Station].EventTalk({'MessageId': 'EventFlowMsg/SageOfFire:talk160', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[Station].EventTriggerLookAtObject({'ActorName': 'Npc_Goron033', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Station', 'ResetArriveTransformFixed': False})
        Npc_Goron011[Station].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk161', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Npc_Goron033[Station].EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            Npc_Goron011[Station].EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }

        Npc_Goron011[Station].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk162', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Goron011[Station].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk163', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron033[Station].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron033[Station].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk166', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void DefeatBossMiddle_Npc_Goron011_Station_Talk() {
    goto Event404
}

void BludoTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Bull', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsAfter_Dream_Exp'})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_B_First_withY', 'Index': -1}) {
            if !Npc_Goron006.EventQueryIsOnRecentTalkFlag() {
                Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/SageOfFire:talk51', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk46', 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Goron006.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk48', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Goron006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Talk', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk49', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_Goron006.EventQueryIsOnRecentTalkFlag() {
            Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SageOfFire:talk45', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event158:
            Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfFire:talk44', 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Goron006.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/SageOfFire:talk47', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event118:
            Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/SageOfFire:talk50', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Wait', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Goron006.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Goron006.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Talk', 'MessageId': 'EventFlowMsg/SageOfFire:talk118', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron006_BeforeSage_YunboInCity'}) {
                Npc_Goron006.EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Bull', 'Index': -1, 'Value': True})
                Npc_Goron006.EventTalk({'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Talk', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk123', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Goron006.EventTalk({'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ASName': 'Act_Pain_Talk', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk124', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_B_First_withY', 'Index': -1, 'Value': True})
                Npc_Goron006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
            } else {
                Npc_Goron022.EventTriggerParticipateEvent()
                Npc_Goron006.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron022', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Bull', 'Index': -1, 'Value': True})
            }
        } else {
            Npc_Goron006.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            goto Event118
        }
    } else {
        goto Event158
    }
}

void Dream_EscapeBattleRoof() {

    call Common.AirStartUP_Player()

    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk97', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk98', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event490:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_BattlePos', 'NotChangeRot': False, 'UseDemoWait': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [0.0, 3.0, -4.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk116', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk117', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event490
    }
}

void Dream_EscapeRoof() {

    call Common.AirStartUP_Player()

    Npc_Goron011[NorthMine_Tokachin].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk125', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerClimbOff({'IsWaitEnd': True})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'NorthMine_Player_TutorialRestartPos', 'UseDemoWait': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [0.0, 3.0, -4.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void GetOffHorse() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event583:
        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseCity', 'IsWaitEnd': True})
    } else
    if !Player.EventQueryIsOwnedHorseNear({'Distance': 10.0}) {
        goto Event583
    }
}

void Ready_Npc_Goron006_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SageOfFire:near83', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Dream_Npc_Goron006_Near() {
    goto Event283
}

void GoCrater_Npc_Goron006_Near() {
    goto Event283
}

void ResetPlayerState() {
    Player.EventTriggerParticipateEvent()
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Dream_DirectEnter() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetPlayerState()

    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'AnchorInstanceName': 'NorthMine_Player_StartPos', 'Radius': 2.0, 'IsDeleteActor': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NorthMine_Player_StartPos', 'NotChangeRot': False, 'UseDemoWait': True})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    goto Event721
}

void YunboCheckWeapon() {
    if !Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
    }
}

void CleanAnchor() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Yunbo_FromCrater', 'Index': -1}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'YunboChangeNpc_MiddleBoss2', 'IsDeleteActor': True})
    } else {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'YunboChangeNpc_MiddleBoss', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True})
    }
}

void RecoverRedEye() {

    fork {
        Npc_goron003[02].EventTriggerGoronEyeRecoveredFromMiasma({'IsRecovered': True})
    } {
        Npc_goron004.EventTriggerGoronEyeRecoveredFromMiasma({'IsRecovered': True})
    } {
        Npc_goron002.EventTriggerGoronEyeRecoveredFromMiasma({'IsRecovered': True})
    }

}
