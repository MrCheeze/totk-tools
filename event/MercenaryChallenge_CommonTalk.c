-------- EventFlow: MercenaryChallenge_CommonTalk --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier002)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier003)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Run(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier004)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Run(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier005)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Run(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier006)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Run(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier007)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Run(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier008)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Run(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Run(MercenarySoldier009)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(Reader)]
entrypoint: MercenaryChallenge_Common_Run(Reader)
actions: ['EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier002)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier003)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier004)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier005)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Start(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier006)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Start(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier007)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Start(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier008)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Start(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Start(MercenarySoldier009)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(Reader)]
entrypoint: MercenaryChallenge_Common_Start(Reader)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier004)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier005)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier006)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier007)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier008)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Finish(MercenarySoldier009)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWait', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_Finish(Reader)]
entrypoint: MercenaryChallenge_Common_Finish(Reader)
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_Finish(Player)]
entrypoint: MercenaryChallenge_Common_Finish(Player)
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Start_Elite(MercenarySoldier002)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Start_Elite(MercenarySoldier003)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Start_Elite(MercenarySoldier004)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Start_Elite(MercenarySoldier005)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName', 'EventTriggerAIScheduleChangeArrivalAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(Reader)]
entrypoint: MercenaryChallenge_Common_Start_Elite(Reader)
actions: ['EventTriggerAIScheduleChangeTargetInstanceName']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerChangeAIScheduleEquipState', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(Reader)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(Reader)
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_Finish_Elite(Player)]
entrypoint: MercenaryChallenge_Common_Finish_Elite(Player)
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier002)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier003)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier004)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier005)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier006)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier007)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier008)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Victory(MercenarySoldier009)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Victory_Elite(MercenarySoldier002)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Victory_Elite(MercenarySoldier003)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Victory_Elite(MercenarySoldier004)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Victory_Elite(MercenarySoldier005)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier004)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier005)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier006)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier007)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier008)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Wait(MercenarySoldier009)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWait', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier006)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier007)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier008)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Wait_Amani(MercenarySoldier009)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier002)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier003)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier004)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier006)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier007)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier008)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier009)
actions: ['EventTriggerParticipateEvent']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier002)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier003)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier006)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier007)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier008)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier009)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: NPC_oasis004_fr04[MercenaryChallenge_Common_BatlleWait_Amani(Reader)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani(Reader)
actions: ['EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier002)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier003)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier004)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier006)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier007)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier008)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier009)
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: None

Actor: NPC_oasis004_fr04[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(Reader)]
entrypoint: MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(Reader)
actions: ['EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier002)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier003)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier006)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier007)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier008)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Victory_Amani(MercenarySoldier009)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier002)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier003)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier004)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier006)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier007)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier008)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier009)
actions: ['EventPlayAS']
queries: ['EventQueryIsDown']
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier002)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier003)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier004)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier005)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier006)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier007)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier008)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier009)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_AfterGetPouch(Reader)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_AfterGetPouch(Player)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier002)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier003)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier004)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier005)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier006)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier007)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier008)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_EndAnime(MercenarySoldier009)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_EndAnime(Reader)]
entrypoint: MercenaryChallenge_Common_EndAnime(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_EndAnime(Player)]
entrypoint: MercenaryChallenge_Common_EndAnime(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier002)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier003)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier004)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier005)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(Reader)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_AfterGetPouch_Elite(Player)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Elite(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier002)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier003)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier004)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier005)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier005)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(Reader)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_EndAnime_Elite(Player)]
entrypoint: MercenaryChallenge_Common_EndAnime_Elite(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier002)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier003)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier006)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier007)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier008)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier009)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_AfterGetPouch_Amani(Reader)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_AfterGetPouch_Amani(Player)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier002)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier003)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier004)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier006)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier007)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier008)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier009)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(Reader)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(Player)]
entrypoint: MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier002)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier003)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier006)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier007)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier008)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier009)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_EndAnime_Amani(Reader)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_EndAnime_Amani(Player)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani(Player)
actions: []
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier002)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier002)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier003)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier003)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier004)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier004)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier006)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier006)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier007)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier007)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier008)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier008)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier009)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier009)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_TamourHatago004[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(Reader)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(Reader)
actions: []
queries: []
params: None

Actor: Player[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(Player)]
entrypoint: MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(Player)
actions: []
queries: []
params: None

Actor: Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow(LeaderActorName)]
entrypoint: Ready_MercenarySoldier_CommonFlow(LeaderActorName)
actions: ['EventTalk', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn(LeaderActorName)]
entrypoint: Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn(LeaderActorName)
actions: ['EventTalk', 'EventTriggerLookAtObject']
queries: []
params: None

void MercenaryChallenge_Common_Run() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(Reader)].EventAIScheduleMoveToAnchor({'InstanceName': '01', 'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(MercenarySoldier002)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '02', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Run(MercenarySoldier003)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'InstanceName': '03', 'DesiredGear': 2, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Run(MercenarySoldier004)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '04', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Run(MercenarySoldier005)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '05', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Run(MercenarySoldier006)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '06', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Run(MercenarySoldier007)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '07', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Run(MercenarySoldier008)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '08', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Run(MercenarySoldier009)].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'AnchorType': 2, 'ActionType': 0, 'IsWaitEnd': False, 'DesiredGear': 2, 'InstanceName': '09', 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
}

void MercenaryChallenge_Common_Start() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(Reader)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '01'})

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier002)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '02'})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier002)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier003)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '03'})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start(MercenarySoldier003)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start(MercenarySoldier004)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '04'})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start(MercenarySoldier004)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start(MercenarySoldier005)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '05'})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start(MercenarySoldier005)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Start(MercenarySoldier006)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '06'})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Start(MercenarySoldier006)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Start(MercenarySoldier007)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '07'})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Start(MercenarySoldier007)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Start(MercenarySoldier008)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '08'})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Start(MercenarySoldier008)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Start(MercenarySoldier009)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '09'})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Start(MercenarySoldier009)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    }

}

void MercenaryChallenge_Common_Finish() {

    fork {
        Npc_TamourHatago004[MercenaryChallenge_Common_Finish(Reader)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '01', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Player[MercenaryChallenge_Common_Finish(Player)].EventPlayerWarpToStarterLinkAnchor({'ActorName': 'AnchorAction1', 'IsWaitEnd': True, 'InstanceName': 'リンク', 'NotChangeRot': False, 'UseDemoWait': True})
    }

    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Npc_TamourHatago004[MercenaryChallenge_Common_Finish(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Player[MercenaryChallenge_Common_Finish(Player)].EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
    }


    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '02', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Tired_B'})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '03', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Finish(MercenarySoldier003)].EventPlayAS({'ASName': 'Act_Lookfar', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '04', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish(MercenarySoldier004)].EventPlayAS({'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '05', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish(MercenarySoldier005)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Tired_A'})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '06', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Finish(MercenarySoldier006)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait'})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '07', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Finish(MercenarySoldier007)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '08', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Finish(MercenarySoldier008)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '09', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Finish(MercenarySoldier009)].EventPlayAS({'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

}

void MercenaryChallenge_Common_Start_Elite() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(Reader)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '01'})

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier002)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '02'})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier002)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier003)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '03'})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Start_Elite(MercenarySoldier003)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start_Elite(MercenarySoldier004)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '04'})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Start_Elite(MercenarySoldier004)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start_Elite(MercenarySoldier005)].EventTriggerAIScheduleChangeTargetInstanceName({'Action': 1, 'InstanceName': '05'})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Start_Elite(MercenarySoldier005)].EventTriggerAIScheduleChangeArrivalAS({'ASName': 'BattleWait'})
    }

}

void MercenaryChallenge_Common_Finish_Elite() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(Reader)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '01', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player[MercenaryChallenge_Common_Finish_Elite(Player)].EventPlayerWarpToStarterLinkAnchor({'ActorName': 'AnchorAction1', 'InstanceName': 'リンク', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Player[MercenaryChallenge_Common_Finish_Elite(Player)].EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '02', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'InstanceName': '02', 'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier002)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '03', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'InstanceName': '03', 'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier003)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '04', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'InstanceName': '04', 'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier004)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventTriggerParticipateEvent()
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventTriggerRecoverFainted()
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '05', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'InstanceName': '05', 'ActionType': 0, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'DesiredGear': 1, 'ASName': 'Walk', 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Patient_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Finish_Elite(MercenarySoldier005)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void MercenaryChallenge_Common_Victory() {

    fork {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier002)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier002)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier002)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier003)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier003)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory(MercenarySoldier003)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory(MercenarySoldier004)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory(MercenarySoldier004)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory(MercenarySoldier005)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory(MercenarySoldier005)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory(MercenarySoldier005)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory(MercenarySoldier006)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory(MercenarySoldier006)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory(MercenarySoldier006)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory(MercenarySoldier007)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory(MercenarySoldier007)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory(MercenarySoldier007)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory(MercenarySoldier008)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory(MercenarySoldier008)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory(MercenarySoldier008)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory(MercenarySoldier009)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory(MercenarySoldier009)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory(MercenarySoldier009)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    }

}

void MercenaryChallenge_Common_Victory_Elite() {

    fork {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier002)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier002)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier002)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier003)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier003)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier003)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier004)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier004)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier005)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier005)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Victory_Elite(MercenarySoldier005)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    }

}

void MercenaryChallenge_Common_Wait() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventTriggerParticipateEvent()
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_MercenarySoldier_Hylia002', 'IsCheckInstanceName': False, 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 1, 'Index': -1})
        Event521:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 1, 'Index': -1}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventWait({'IsWaitEnd': True, 'Frames': 8})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Squat'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 2, 'Index': -1}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_Wait(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_LookAround'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 3, 'Index': -1}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventWait({'IsWaitEnd': True, 'Frames': 18})
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Lookfar'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 4}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventWait({'IsWaitEnd': True, 'Frames': 4})
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Lookfar'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 5}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventWait({'IsWaitEnd': True, 'Frames': 26})
                    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait(MercenarySoldier006)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Squat'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 6}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventWait({'IsWaitEnd': True, 'Frames': 36})
                    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait(MercenarySoldier007)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_LookAround'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 7}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait(MercenarySoldier008)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Squat'})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 8}) in [0, 2] {
                if !Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventWait({'IsWaitEnd': True, 'Frames': 28})
                    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait(MercenarySoldier009)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_LookAround'})
                }
            }
        }

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia003', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 2, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia004', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 3, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia005', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 4, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia006', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 5, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia007', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 6, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia008', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 7, 'Index': -1})
        goto Event521
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'ActorName': 'Npc_MercenarySoldier_Hylia009', 'InstanceName': ''}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 8, 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 0, 'Index': -1})
    }
    goto Event521
}

void MercenaryChallenge_Common_Wait_Elite() {
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventTriggerParticipateEvent()
    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventTriggerParticipateEvent()
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_MercenarySoldier_Hylia002A'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 1, 'Index': -1})
        Event247:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 1, 'Index': -1}) in [0, 2] {
                Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventTriggerParticipateEvent()
                if !Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventWait({'IsWaitEnd': False, 'Frames': 4})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Patient_Wait'})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier002)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 2, 'Index': -1}) in [0, 2] {
                Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventTriggerParticipateEvent()
                if !Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
                    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier003)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 3, 'Index': -1}) in [0, 2] {
                Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventTriggerParticipateEvent()
                if !Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventPlayAS({'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
                    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier004)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                }
            }
        } {
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Index': -1, 'Value': 4}) in [0, 2] {
                Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventTriggerParticipateEvent()
                if !Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
                } else {
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventWait({'IsWaitEnd': False, 'Frames': 0})
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Patient_Wait'})
                    Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_Wait_Elite(MercenarySoldier005)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                }
            }
        }

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_MercenarySoldier_Hylia003A'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 2, 'Index': -1})
        goto Event247
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_MercenarySoldier_Hylia004A'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 3, 'Index': -1})
        goto Event247
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_MercenarySoldier_Hylia005A'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 4, 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MercenaryChallenge_TalkedSoldierNum', 'Value': 0, 'Index': -1})
    }
    goto Event247
}

void MercenaryChallenge_Common_Wait_Amani() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier002)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier003)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier006)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier007)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier008)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait_Amani(MercenarySoldier009)].EventTriggerParticipateEvent()
    }

}

void MercenaryChallenge_Common_Wait_Amani_GerudoIn() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier002)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier003)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier004)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier006)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier007)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier008)].EventTriggerParticipateEvent()
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Wait_Amani_GerudoIn(MercenarySoldier009)].EventTriggerParticipateEvent()
    }

}

void MercenaryChallenge_Common_BatlleWait_Amani() {
    NPC_oasis004_fr04[MercenaryChallenge_Common_BatlleWait_Amani(Reader)].EventTriggerRequestLookAtTheFront()
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier002)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier003)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier006)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier007)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier008)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier009)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier002)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier003)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier006)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier007)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier008)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani(MercenarySoldier009)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

}

void MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn() {
    NPC_oasis004_fr04[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(Reader)].EventTriggerRequestLookAtTheFront()
    Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier002)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier003)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier004)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier006)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier007)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier008)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier009)].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier002)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier003)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier004)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier006)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier007)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier008)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn(MercenarySoldier009)].EventPlayAS({'ASName': 'BattleWait', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

}

void MercenaryChallenge_Common_Victory_Amani() {

    fork {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier002)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier002)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier002)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier003)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier003)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier003)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier006)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier006)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier006)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier007)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier007)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier007)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier008)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier008)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier008)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier009)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier009)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani(MercenarySoldier009)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    }

}

void MercenaryChallenge_Common_Victory_Amani_GerudoIn() {

    fork {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier002)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier002)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier002)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier003)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier003)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier003)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier004)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier004)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier004)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier006)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier006)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier006)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier007)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier007)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier007)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier008)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier008)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier008)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    } {
        if Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier009)].EventQueryIsDown() {
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier009)].EventPlayAS({'ASName': 'Victory', 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_Victory_Amani_GerudoIn(MercenarySoldier009)].EventPlayAS({'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BattleWait'})
        }
    }

}

void MercenaryChallenge_Common_AfterGetPouch() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier002)].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier002)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier003)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier003)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier004)].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier004)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier005)].EventWait({'IsWaitEnd': True, 'Frames': 18})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier005)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier006)].EventWait({'Frames': 8, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier006)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier007)].EventWait({'IsWaitEnd': True, 'Frames': 2})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier007)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier008)].EventWait({'IsWaitEnd': True, 'Frames': 33})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier008)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier009)].EventWait({'IsWaitEnd': True, 'Frames': 12})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch(MercenarySoldier009)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void MercenaryChallenge_Common_EndAnime() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime(MercenarySoldier002)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime(MercenarySoldier003)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime(MercenarySoldier004)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime(MercenarySoldier004)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime(MercenarySoldier005)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime(MercenarySoldier006)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime(MercenarySoldier006)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime(MercenarySoldier007)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime(MercenarySoldier007)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up_Spear'})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime(MercenarySoldier008)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime(MercenarySoldier008)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up_Spear'})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime(MercenarySoldier009)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime(MercenarySoldier009)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Hand_Up'})
    }

}

void MercenaryChallenge_Common_AfterGetPouch_Elite() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier002)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier002)].EventNPCTurnToTarget({'InstanceName': '02', 'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier003)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier003)].EventNPCTurnToTarget({'InstanceName': '03', 'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier004)].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier004)].EventNPCTurnToTarget({'InstanceName': '04', 'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier005)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_AfterGetPouch_Elite(MercenarySoldier005)].EventNPCTurnToTarget({'InstanceName': '05', 'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void MercenaryChallenge_Common_EndAnime_Elite() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier002)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier002)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier003)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier003)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hand_Up_Spear'})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier004)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier004)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hand_Up_Spear'})
    } {
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier005)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia005[MercenaryChallenge_Common_EndAnime_Elite(MercenarySoldier005)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hand_Up'})
    }

}

void MercenaryChallenge_Common_AfterGetPouch_Amani() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier002)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier002)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier003)].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier003)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier006)].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier006)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier007)].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier007)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier008)].EventWait({'IsWaitEnd': True, 'Frames': 33})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier008)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier009)].EventWait({'IsWaitEnd': True, 'Frames': 38})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani(MercenarySoldier009)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier002)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier002)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier003)].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier003)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier006)].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier006)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier007)].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier007)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier008)].EventWait({'IsWaitEnd': True, 'Frames': 33})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier008)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier009)].EventWait({'IsWaitEnd': True, 'Frames': 38})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier009)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier004)].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn(MercenarySoldier004)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsWaitEnd': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void MercenaryChallenge_Common_EndAnime_Amani() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier002)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier002)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier003)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier003)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier006)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier006)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier007)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier007)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier008)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier008)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier009)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani(MercenarySoldier009)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    }

}

void MercenaryChallenge_Common_EndAnime_Amani_GerudoIn() {

    fork {
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier002)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia002[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier002)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier003)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia003[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier003)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier006)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia006[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier006)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier007)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia007[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier007)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier008)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia008[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier008)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier009)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia009[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier009)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Hand_Up'})
    } {
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier004)].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_MercenarySoldier_Hylia004[MercenaryChallenge_Common_EndAnime_Amani_GerudoIn(MercenarySoldier004)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hand_Up'})
    }

}

void Ready_MercenarySoldier_CommonFlow() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow(LeaderActorName)].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'MessageId_GameDataName_True', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow(LeaderActorName)].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'MessageId_GameDataName_False', 'IsNotOpenIfSkipedMostRecent': False})
    }

    fork {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TurntoActorName', 'InstanceName': 'TurntoInstanceName', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow(LeaderActorName)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'PosVector': [-0.3199999928474426, 0.6899999976158142, 2.5199999809265137], 'AtVector': [0.6200000047683716, 0.23000000417232513, -4.730000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TurntoActorName', 'Actor1InstanceName': 'TurntoInstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow(LeaderActorName)].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_Last', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn(LeaderActorName)].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId_GameDataName_True'})
    } else {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn(LeaderActorName)].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId_GameDataName_False'})
    }

    fork {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'TurntoActorName', 'InstanceName': 'TurntoInstanceName'})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_TamourHatago004[Ready_MercenarySoldier_CommonFlow_BattleEventTalkOn(LeaderActorName)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'PosVector': [-0.3199999928474426, 0.6899999976158142, 2.5199999809265137], 'AtVector': [0.6200000047683716, 0.23000000417232513, -4.730000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'TurntoActorName', 'Actor1InstanceName': 'TurntoInstanceName'})
}
