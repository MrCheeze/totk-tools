-------- EventFlow: Fairy_Common --------

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerClimbOff', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerStopInAir', 'EventTriggerPlayerRequestParasail']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventResetGimmick', 'EventEntrustOutsideOwnedHorse', 'EventEventCircleWipeFadeIn', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryCheckIsOwnedHorseAssociated', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_00_FairyTela[Tribune16]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_W_00[Tribune16]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Rito_Postman_012[Tribune16]
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: AsbObj_CaravanWagon_A_05[Tribune16]
entrypoint: None()
actions: ['EventTriggerErasePauseMask', 'EventTriggerPushPauseMask', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerStartSpotBgm', 'EventTriggerSoundControlBGM', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['EventHorseDisconnectCouplerFrom']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Orchestra_M_00[Fairy_InteractCarriage(Miroyan)]
entrypoint: Fairy_InteractCarriage(Miroyan)
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_InteractCarriage(CaravanWagon)]
entrypoint: Fairy_InteractCarriage(CaravanWagon)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_AncientDoctor[Fairy_OutOfChallengeArea_Warning(Miroyan)]
entrypoint: Fairy_OutOfChallengeArea_Warning(Miroyan)
actions: ['EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Warning(Wagon_Actor)]
entrypoint: Fairy_OutOfChallengeArea_Warning(Wagon_Actor)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Fairy_OutOfChallengeArea_Reset(Miroyan)]
entrypoint: Fairy_OutOfChallengeArea_Reset(Miroyan)
actions: ['EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Reset(Wagon_Actor)]
entrypoint: Fairy_OutOfChallengeArea_Reset(Wagon_Actor)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_AncientDoctor[Fairy_Drown(Miroyan)]
entrypoint: Fairy_Drown(Miroyan)
actions: ['EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_Drown(CaravanWagon)]
entrypoint: Fairy_Drown(CaravanWagon)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_AncientDoctor[Fairy_Orchestra_Tilt(Miroyan)]
entrypoint: Fairy_Orchestra_Tilt(Miroyan)
actions: ['EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Tilt(CaravanWagon)]
entrypoint: Fairy_Orchestra_Tilt(CaravanWagon)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_AncientDoctor[Fairy_Orchestra_Hand(Miroyan)]
entrypoint: Fairy_Orchestra_Hand(Miroyan)
actions: ['EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Hand(Wagon_Actor)]
entrypoint: Fairy_Orchestra_Hand(Wagon_Actor)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_00[WagonOutOfArea(Miroyan)]
entrypoint: WagonOutOfArea(Miroyan)
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)]
entrypoint: WagonOutOfArea(Wagon)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor']
params: None

Actor: Npc_Orchestra_M_00_FairySiza[CheckWagonSeats(Miroyan)]
entrypoint: CheckWagonSeats(Miroyan)
actions: ['EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)]
entrypoint: CheckWagonSeats(Wagon)
actions: ['EventTriggerParticipateEvent', 'EventTriggerErasePauseMask']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle']
params: None

Actor: Npc_Orchestra_M_00[Fairy_BurnWagon(Miroyan)]
entrypoint: Fairy_BurnWagon(Miroyan)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_01[Fairy_BurnWagon(CaravanWagon)]
entrypoint: Fairy_BurnWagon(CaravanWagon)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_W_00[Fairy_BurnWagon(Npc_Orchestra_W_00)]
entrypoint: Fairy_BurnWagon(Npc_Orchestra_W_00)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Fairy_BurnWagon(Npc_Orchestra_M_H)]
entrypoint: Fairy_BurnWagon(Npc_Orchestra_M_H)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Fairy_BurnWagon(Npc_Orchestra_M_P)]
entrypoint: Fairy_BurnWagon(Npc_Orchestra_M_P)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Fairy_BurnWagon(Npc_Orchestra_BT_F)]
entrypoint: Fairy_BurnWagon(Npc_Orchestra_BT_F)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Fairy_BrakeWagon(Miroyan)]
entrypoint: Fairy_BrakeWagon(Miroyan)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_W_00[Fairy_BrakeWagon(Npc_Orchestra_W_00)]
entrypoint: Fairy_BrakeWagon(Npc_Orchestra_W_00)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Fairy_BrakeWagon(Npc_Orchestra_M_H)]
entrypoint: Fairy_BrakeWagon(Npc_Orchestra_M_H)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Fairy_BrakeWagon(Npc_Orchestra_M_P)]
entrypoint: Fairy_BrakeWagon(Npc_Orchestra_M_P)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Fairy_BrakeWagon(Npc_Orchestra_BT_F)]
entrypoint: Fairy_BrakeWagon(Npc_Orchestra_BT_F)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[CheckNaked(Npc_Orchestra_M_00)]
entrypoint: CheckNaked(Npc_Orchestra_M_00)
actions: ['EventTalk', 'EventDisableRecentTalkFlag']
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairyTela[GetOn_Miroyan(Miroyan)]
entrypoint: GetOn_Miroyan(Miroyan)
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_W_00[GetOn_Violan(Violan)]
entrypoint: GetOn_Violan(Violan)
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_H[GetOn_Euphol(Euphol)]
entrypoint: GetOn_Euphol(Euphol)
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[GetOn_Fei(Fei)]
entrypoint: GetOn_Fei(Fei)
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_P[GetOn_Beats(Beats)]
entrypoint: GetOn_Beats(Beats)
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[GetOff(Npc_Orchestra_M)]
entrypoint: GetOff(Npc_Orchestra_M)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[GetOff(Npc_Orchestra_BT_F)]
entrypoint: GetOff(Npc_Orchestra_BT_F)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[GetOff(Npc_Orchestra_W_00)]
entrypoint: GetOff(Npc_Orchestra_W_00)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[GetOff(Npc_Orchestra_M_P)]
entrypoint: GetOff(Npc_Orchestra_M_P)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[GetOff(Npc_Orchestra_M_H)]
entrypoint: GetOff(Npc_Orchestra_M_H)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[OrchestraGetOff(Npc_Orchestra_M)]
entrypoint: OrchestraGetOff(Npc_Orchestra_M)
actions: ['EventCancelFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[OrchestraGetOff(Npc_Orchestra_BT_F)]
entrypoint: OrchestraGetOff(Npc_Orchestra_BT_F)
actions: ['EventCancelFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_W_00[OrchestraGetOff(Npc_Orchestra_W_00)]
entrypoint: OrchestraGetOff(Npc_Orchestra_W_00)
actions: ['EventCancelFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_P[OrchestraGetOff(Npc_Orchestra_M_P)]
entrypoint: OrchestraGetOff(Npc_Orchestra_M_P)
actions: ['EventCancelFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_H[OrchestraGetOff(Npc_Orchestra_M_H)]
entrypoint: OrchestraGetOff(Npc_Orchestra_M_H)
actions: ['EventCancelFollowToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairyTela[Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)]
entrypoint: Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_05[Fairy_AfterResetEvent(AsbObj_CaravanWagon_A_05)]
entrypoint: Fairy_AfterResetEvent(AsbObj_CaravanWagon_A_05)
actions: ['EventTriggerParticipateEvent', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: AsbObj_CaravanWagon_A_05[DeleteWagonAndHorse(AsbObj_CaravanWagon_A_05)]
entrypoint: DeleteWagonAndHorse(AsbObj_CaravanWagon_A_05)
actions: ['EventTriggerCombinedActorDeleteAll']
queries: []
params: None

Actor: Npc_Orchestra_M_00[AllTurn(Npc_Orchestra_M)]
entrypoint: AllTurn(Npc_Orchestra_M)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[AllTurn(Npc_Orchestra_W_00)]
entrypoint: AllTurn(Npc_Orchestra_W_00)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_H[AllTurn(Npc_Orchestra_M_H)]
entrypoint: AllTurn(Npc_Orchestra_M_H)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_M_P[AllTurn(Npc_Orchestra_M_P)]
entrypoint: AllTurn(Npc_Orchestra_M_P)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[AllTurn(Npc_Orchestra_BT_F)]
entrypoint: AllTurn(Npc_Orchestra_BT_F)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[MemberSuprised(Npc_Orchestra_W_00)]
entrypoint: MemberSuprised(Npc_Orchestra_W_00)
actions: ['EventWait', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Orchestra_M_P[MemberSuprised(Npc_Orchestra_M_P)]
entrypoint: MemberSuprised(Npc_Orchestra_M_P)
actions: ['EventWait', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Orchestra_BT_F[MemberSuprised(Npc_Orchestra_BT_F)]
entrypoint: MemberSuprised(Npc_Orchestra_BT_F)
actions: ['EventWait', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Orchestra_M_H[MemberSuprised(Npc_Orchestra_M_H)]
entrypoint: MemberSuprised(Npc_Orchestra_M_H)
actions: ['EventWait', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Orchestra_M_00[AllTurn_Tribune16(Npc_Orchestra_M)]
entrypoint: AllTurn_Tribune16(Npc_Orchestra_M)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[AllTurn_Tribune16(Npc_Orchestra_W_00)]
entrypoint: AllTurn_Tribune16(Npc_Orchestra_W_00)
actions: ['EventWait', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Rito_Postman_001[AllTurn_Tribune16(Postman)]
entrypoint: AllTurn_Tribune16(Postman)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Orchestra_W_00[MemberSuprised_Tribune16(Npc_Orchestra_W_00)]
entrypoint: MemberSuprised_Tribune16(Npc_Orchestra_W_00)
actions: ['EventWait', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Rito_Postman_001[MemberSuprised_Tribune16(Postman)]
entrypoint: MemberSuprised_Tribune16(Postman)
actions: ['EventWait', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: None

Actor: Npc_Orchestra_M_00[Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)]
entrypoint: Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)
actions: ['EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_M_00[PauseAllMembers(Npc_Orchestra_M)]
entrypoint: PauseAllMembers(Npc_Orchestra_M)
actions: ['EventTriggerPushPauseMask']
queries: []
params: None

Actor: Npc_Orchestra_W_00[PauseAllMembers(Npc_Orchestra_W_00)]
entrypoint: PauseAllMembers(Npc_Orchestra_W_00)
actions: ['EventTriggerPushPauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_H[PauseAllMembers(Npc_Orchestra_M_H)]
entrypoint: PauseAllMembers(Npc_Orchestra_M_H)
actions: ['EventTriggerPushPauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_P[PauseAllMembers(Npc_Orchestra_M_P)]
entrypoint: PauseAllMembers(Npc_Orchestra_M_P)
actions: ['EventTriggerPushPauseMask']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[PauseAllMembers(Npc_Orchestra_BT_F)]
entrypoint: PauseAllMembers(Npc_Orchestra_BT_F)
actions: ['EventTriggerPushPauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DeletePauseAll(Npc_Orchestra_M)]
entrypoint: DeletePauseAll(Npc_Orchestra_M)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_W_00[DeletePauseAll(Npc_Orchestra_W_00)]
entrypoint: DeletePauseAll(Npc_Orchestra_W_00)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_H[DeletePauseAll(Npc_Orchestra_M_H)]
entrypoint: DeletePauseAll(Npc_Orchestra_M_H)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_P[DeletePauseAll(Npc_Orchestra_M_P)]
entrypoint: DeletePauseAll(Npc_Orchestra_M_P)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[DeletePauseAll(Npc_Orchestra_BT_F)]
entrypoint: DeletePauseAll(Npc_Orchestra_BT_F)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Orchestra_M_00[WagonOutOfArea_AfterWarp(Miroyan)]
entrypoint: WagonOutOfArea_AfterWarp(Miroyan)
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Fairy_WarpHorse(Npc_Orchestra)]
entrypoint: Fairy_WarpHorse(Npc_Orchestra)
actions: ['EventWarpOwnedHorse']
queries: []
params: None

void Fairy_InteractCarriage() {
    AsbObj_CaravanWagon_A_01[Fairy_InteractCarriage(CaravanWagon)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Miroyan'})

    Npc_Orchestra_M_00[Fairy_InteractCarriage(Miroyan)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_00[Fairy_InteractCarriage(Miroyan)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0049', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    AsbObj_CaravanWagon_A_01[Fairy_InteractCarriage(CaravanWagon)].EventTriggerErasePauseMask()
}

void Fairy_OutOfChallengeArea_Warning() {

    call Common.AirStartUP_Player()

    AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Warning(Wagon_Actor)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Miroyan'})

    Npc_AncientDoctor[Fairy_OutOfChallengeArea_Warning(Miroyan)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Miroyan_Actor', 'InstanceNameB': 'Miroyan_InstanceName'}) {
        Event5:
        Npc_AncientDoctor[Fairy_OutOfChallengeArea_Warning(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0050', 'IsNotOpenIfSkipedMostRecent': False})
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Miroyan_Actor', 'InstanceNameB': 'Miroyan_InstanceName'}) {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        }
        AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Warning(Wagon_Actor)].EventTriggerErasePauseMask()
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call Camera_Miroyan({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_InstanceName'})

        goto Event5
    }
}

void Fairy_OutOfChallengeArea_Reset() {

    call Common.AirStartUP_Player()

    AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Reset(Wagon_Actor)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Miroyan'})

    Npc_Orchestra_M_00[Fairy_OutOfChallengeArea_Reset(Miroyan)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'ActorNameB': 'Miroyan_Actor', 'InstanceNameB': 'Miroyan_Instance', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False}) {
        Event8:
        Npc_Orchestra_M_00[Fairy_OutOfChallengeArea_Reset(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0051', 'IsNotOpenIfSkipedMostRecent': False})

        call SndStopInGameBgm_OutOfArea()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Miroyan_Actor', 'InstanceNameB': 'Miroyan_Instance'}) {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        }
        AsbObj_CaravanWagon_A_01[Fairy_OutOfChallengeArea_Reset(Wagon_Actor)].EventTriggerErasePauseMask()
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call Camera_Miroyan({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_Instance'})

        goto Event8
    }
}

void Fairy_Drown() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Miroyan'})

    AsbObj_CaravanWagon_A_01[Fairy_Drown(CaravanWagon)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {

        call Camera_WipeFadeOut({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_InstanceName'})

    }

    Npc_AncientDoctor[Fairy_Drown(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0052', 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    AsbObj_CaravanWagon_A_01[Fairy_Drown(CaravanWagon)].EventTriggerErasePauseMask()

    call SndStopInGameBgm()

}

void Fairy_Orchestra_Tilt() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Miroyan'})

    AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Tilt(CaravanWagon)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {

        call Camera_WipeFadeOut({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_InstanceName'})

    }

    Npc_AncientDoctor[Fairy_Orchestra_Tilt(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0020', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Tilt(CaravanWagon)].EventTriggerErasePauseMask()

    call SndStopInGameBgm()

}

void Fairy_Orchestra_Hand() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Hand(Wagon_Actor)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': 'Miroyan'})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Fairy_Hand_Num'}) {
      case 0:
        Npc_AncientDoctor[Fairy_Orchestra_Hand(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0063', 'IsNotOpenIfSkipedMostRecent': False})
        Event83:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Fairy_Hand_Num'})
        AsbObj_CaravanWagon_A_01[Fairy_Orchestra_Hand(Wagon_Actor)].EventTriggerErasePauseMask()
      case 1:
        Event81:
        Npc_AncientDoctor[Fairy_Orchestra_Hand(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0059', 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event83
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'Fairy_Hand_Num'}) {
          case 0:
            goto Event81
          case 1:
            Npc_AncientDoctor[Fairy_Orchestra_Hand(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0060', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event83
          case 2:
            Npc_AncientDoctor[Fairy_Orchestra_Hand(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0061', 'IsNotOpenIfSkipedMostRecent': False})

            call SndStopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            goto Event83
        }
    }
}

void WagonOutOfArea() {
    AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Orchestra_M_00[WagonOutOfArea(Miroyan)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'ActorName': 'WagonActor', 'InstanceName': 'InstanceName_Wagon', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call InitTalk.InitTalkOnEventWithAirPause({'Self': 'Miroyan', 'Arg_Turn': 0})

    Npc_Orchestra_M_00[WagonOutOfArea(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_5004', 'IsNotOpenIfSkipedMostRecent': False})

    call SndStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_Name', 'UseDemoWait': True})

    call ResetPlayerState()


    call SndStartInGameBgm()

    if !AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)].EventQueryWarpToSafeSpaceWithCombinedActor({'EndHeightOffset': -1.0, 'IsEnableFailDelete': True, 'StartHeightOffset': 8.0, 'BaseRot': 'BaseRot', 'BasePos': 'BasePos', 'IsEnableHitPlayer': True}) {
        AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)].EventTriggerErasePauseMask()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        call WagonOutOfArea_AfterWarp({'Miroyan': 'Miroyan', 'WagonActorName': 'WagonActor', 'WagonInstanceName': 'InstanceName_Wagon', 'MiroyanActorName': 'Actor_Miroyan', 'MiroyanInstanceName': 'Instance_Miroyan'})

        AsbObj_CaravanWagon_A_05[WagonOutOfArea(Wagon)].EventTriggerErasePauseMask()
    } else {
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})

        call WagonOutOfArea_AfterWarp({'Miroyan': 'Miroyan', 'WagonActorName': 'WagonActor', 'WagonInstanceName': 'InstanceName_Wagon', 'MiroyanActorName': 'Actor_Miroyan', 'MiroyanInstanceName': 'Instance_Miroyan'})

    }
}

void CheckWagonSeats() {
    AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)].EventTriggerParticipateEvent()
    if !AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)].EventQueryCheckNoObjectDirY({'Length': 2.0, 'Radius': 1.0, 'Offest': [0.0, 1.5, -3.0]}) {
        Event329:

        call Camera_LookAtWagon({'WagonActorName': 'WagonActorName', 'WagonInstanceName': 'WagonInstanceName', 'MiroyanActorName': 'MiroyanActorName', 'MiroyanAInstanceName': 'MiroyanAInstanceName'})

        Npc_Orchestra_M_00_FairySiza[CheckWagonSeats(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0053', 'IsNotOpenIfSkipedMostRecent': False})
        Event148:
        AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)].EventTriggerErasePauseMask()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)].EventQueryCheckNoObjectDirY({'Length': 2.0, 'Offest': [0.0, 1.5, -2.0], 'Radius': 1.0}) {
        goto Event329
    } else
    if !AsbObj_CaravanWagon_A_01[CheckWagonSeats(Wagon)].EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {

        call Camera_LookAtWagon({'WagonActorName': 'WagonActorName', 'WagonInstanceName': 'WagonInstanceName', 'MiroyanActorName': 'MiroyanActorName', 'MiroyanAInstanceName': 'MiroyanAInstanceName'})

        Npc_Orchestra_M_00_FairySiza[CheckWagonSeats(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event148
    }
}

void Fairy_BurnWagon() {

    call Common.AirStartUP_Player()

    AsbObj_CaravanWagon_A_01[Fairy_BurnWagon(CaravanWagon)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1}) {
        Npc_Orchestra_M_00[Fairy_BurnWagon(Miroyan)].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Miroyan'})

        } {

            call Camera_WipeFadeOut({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_InstanceName'})

        } {
            GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
        }

        Npc_Orchestra_M_00[Fairy_BurnWagon(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0055', 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
        Event59:
        AsbObj_CaravanWagon_A_01[Fairy_BurnWagon(CaravanWagon)].EventTriggerErasePauseMask()

        call SndStopInGameBgm()

    } else {

        call AllTurn({'Target': 3, 'Npc_Orchestra_M': 'Miroyan', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F', 'TurnTargetActor': 'WagonActor', 'TargetInstance': 'WagonInstance'})

        Npc_Orchestra_M_00[Fairy_BurnWagon(Miroyan)].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Miroyan'})

        } {

            call CameraSelectedByDistance_Start({'NpcActor': 'Miroyan_Actor', 'NpcInstanceName': 'Miroyan_InstanceName'})

        }


        fork {
            Npc_Orchestra_M_00[Fairy_BurnWagon(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0055', 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call MemberSuprised({'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00'})

        }

        goto Event59
    }
}

void Fairy_BrakeWagon() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1}) {

        call PauseAllMembers({'Npc_Orchestra_M': 'Miroyan', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F'})

        Npc_Orchestra_M_00[Fairy_BrakeWagon(Miroyan)].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Miroyan'})

        } {

            call Camera_WipeFadeOut({'Miroyan_Actor': 'Miroyan_Actor', 'Miroyan_InstanceName': 'Miroyan_InstanceName'})

        } {
            GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
        }

        Npc_Orchestra_M_00[Fairy_BrakeWagon(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0058', 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

        call DeletePauseAll({'Npc_Orchestra_M': 'Miroyan', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F'})


        call SndStopInGameBgm()

    } else {

        call AllTurn({'Target': 2, 'TurnTargetActor': 'Player', 'TargetInstance': '', 'Npc_Orchestra_M': 'Miroyan', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F'})

        Npc_Orchestra_M_00[Fairy_BrakeWagon(Miroyan)].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Miroyan'})

        } {

            call CameraSelectedByDistance_Start({'NpcActor': 'Miroyan_Actor', 'NpcInstanceName': 'Miroyan_InstanceName'})

        }


        fork {
            Npc_Orchestra_M_00[Fairy_BrakeWagon(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0058', 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call MemberSuprised({'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H'})

        }


        call SndStopInGameBgm()

    }
}

void CheckNaked() {
    if Player.EventQueryCheckPlayerState({'State': 0}) {
        Npc_Orchestra_M_00_FairySiza[CheckNaked(Npc_Orchestra_M_00)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0005', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Orchestra_M_00_FairySiza[CheckNaked(Npc_Orchestra_M_00)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Fairy3:Talk0022', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Orchestra_M_00_FairySiza[CheckNaked(Npc_Orchestra_M_00)].EventDisableRecentTalkFlag({'IsWaitEnd': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void ResetWagon() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Fairy_RespawnWagon'})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Fairy_RespawnWagon'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void WaitBeforeComplete() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void WaitAfterComplete() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
}

void GetOn_Miroyan() {
    Npc_Orchestra_M_00_FairyTela[GetOn_Miroyan(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'ASName': 'Wait'})
    Npc_Orchestra_M_00_FairyTela[GetOn_Miroyan(Miroyan)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Orchestra_M_00_FairyTela[GetOn_Miroyan(Miroyan)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': -90.0, 'ActorName': 'Wagon', 'InstanceName': 'WagonName', 'PositionOffset': [0.36000001430511475, 1.4800000190734863, -2.5]})
}

void GetOn_Violan() {
    Npc_Orchestra_W_00[GetOn_Violan(Violan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'ASName': 'Wait'})
    Npc_Orchestra_W_00[GetOn_Violan(Violan)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Orchestra_W_00[GetOn_Violan(Violan)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'PositionOffset': [0.5600000023841858, 1.4800000190734863, -1.4249999523162842], 'XZDegOffset': -90.0, 'ActorName': 'Wagon', 'InstanceName': 'WagonName'})
}

void GetOn_Euphol() {
    Npc_Orchestra_M_H[GetOn_Euphol(Euphol)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'ASName': 'Wait'})
    Npc_Orchestra_M_H[GetOn_Euphol(Euphol)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Orchestra_M_H[GetOn_Euphol(Euphol)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'PositionOffset': [-0.46000000834465027, 1.4800000190734863, -1.5750000476837158], 'XZDegOffset': 90.0, 'ActorName': 'Wagon', 'InstanceName': 'WagonName'})
}

void GetOn_Fei() {
    Npc_Orchestra_BT_F[GetOn_Fei(Fei)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1, 'ASName': 'Wait'})
    Npc_Orchestra_BT_F[GetOn_Fei(Fei)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Orchestra_BT_F[GetOn_Fei(Fei)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': -90.0, 'ActorName': 'Wagon', 'InstanceName': 'WagonName', 'PositionOffset': [0.36000001430511475, 1.4800000190734863, -3.5250000953674316]})
}

void GetOn_Beats() {
    Npc_Orchestra_M_P[GetOn_Beats(Beats)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1, 'ASName': 'Wait'})
    Npc_Orchestra_M_P[GetOn_Beats(Beats)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    Npc_Orchestra_M_P[GetOn_Beats(Beats)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': 90.0, 'ActorName': 'Wagon', 'InstanceName': 'WagonName', 'PositionOffset': [-0.46000000834465027, 1.4800000190734863, -3.375]})
}

void Camera_WipeFadeOut() {
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IdealDistance': 4.0, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetOffset': [0.0, 1.5, 0.0], 'MoveTime': 5, 'TargetActorName': 'Miroyan_Actor', 'TargetActorInstanceName': 'Miroyan_InstanceName', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookAtWagon() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1ActorName': 'WagonActorName', 'Actor1InstanceName': 'WagonInstanceName', 'CameraCollisionLookAtActor': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 1.5, -2.0], 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor2ActorName': 'MiroyanActorName', 'Actor2InstanceName': 'MiroyanAInstanceName', 'IsPosVectorReferenceActorPosOnce': True, 'PosVectorSetType': 4, 'PosVector': [0.0, 2.0, -0.20000000298023224]})
}

void Camera_LookAtWagonFromNear() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsAtVectorReferenceActorPosOnce': False, 'PosVector': [5.389999866485596, 4.179999828338623, -5.010000228881836], 'AtVector': [0.46000000834465027, 1.4500000476837158, -2.390000104904175], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'WagonActorName', 'Actor1InstanceName': 'WagonInstanceName'})
}

void GetOff() {

    fork {

        call PlayerGetOff()

    } {

        call OrchestraGetOff({'Npc_Orchestra_M': 'Npc_Orchestra_M', 'Wagon_Actor': 'Wagon_Actor', 'Wagon_InstanceName': 'Wagon_InstanceName', 'Npc_Orchestra_BT_F': 'Npc_Orchestra_BT_F', 'Npc_Orchestra_W_00': 'Npc_Orchestra_W_00', 'Npc_Orchestra_M_P': 'Npc_Orchestra_M_P', 'Npc_Orchestra_M_H': 'Npc_Orchestra_M_H'})

    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Value': False, 'Index': -1})
}

void OrchestraGetOff() {

    fork {
        Npc_Orchestra_M_00_FairySiza[OrchestraGetOff(Npc_Orchestra_M)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Wagon_Actor', 'InstanceName': 'Wagon_InstanceName'})
    } {
        Npc_Orchestra_W_00[OrchestraGetOff(Npc_Orchestra_W_00)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'InstanceName': 'Wagon_InstanceName', 'ActorName': 'Wagon_Actor'})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {
            Npc_Orchestra_M_P[OrchestraGetOff(Npc_Orchestra_M_P)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Wagon_Actor', 'InstanceName': 'Wagon_InstanceName'})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
            Npc_Orchestra_BT_F[OrchestraGetOff(Npc_Orchestra_BT_F)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Wagon_Actor', 'InstanceName': 'Wagon_InstanceName'})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            Npc_Orchestra_M_H[OrchestraGetOff(Npc_Orchestra_M_H)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Wagon_Actor', 'InstanceName': 'Wagon_InstanceName'})
        }
    }

}

void Fairy_AfterResetEvent() {

    call SndStartBgm()

    AsbObj_CaravanWagon_A_05[Fairy_AfterResetEvent(AsbObj_CaravanWagon_A_05)].EventTriggerParticipateEvent()
    AsbObj_CaravanWagon_A_05[Fairy_AfterResetEvent(AsbObj_CaravanWagon_A_05)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    Npc_Orchestra_M_00_FairyTela[Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_00_FairyTela[Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0056', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_00_FairyTela[Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'ActorName': 'WagonActorName', 'InstanceName': 'WagonInstanceName', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'WagonActorName', 'InstanceName': 'WagonInstanceName', 'OffsetBase': 0})
    EventCamera.EventTriggerCameraSavePoint()

    call Camera_LookAtWagon({'WagonActorName': 'WagonActorName', 'WagonInstanceName': 'WagonInstanceName', 'MiroyanActorName': 'Miroyan_ActorName', 'MiroyanAInstanceName': 'Miroyan_InstanceName'})

    Npc_Orchestra_M_00_FairyTela[Fairy_AfterResetEvent(Npc_Orchestra_M_00_FairyTela)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0057', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    AsbObj_CaravanWagon_A_05[Fairy_AfterResetEvent(AsbObj_CaravanWagon_A_05)].EventTriggerErasePauseMask()
}

void DeleteWagonAndHorse() {
    AsbObj_CaravanWagon_A_05[DeleteWagonAndHorse(AsbObj_CaravanWagon_A_05)].EventTriggerCombinedActorDeleteAll()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
      case [0, 1, 2, 4, 5, 6, 7]:
        GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
        Event151:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DeleteWagon_Flag'})
      case 3:
        goto Event151
    }
}

void AllTurn() {

    fork {
        Npc_Orchestra_M_00[AllTurn(Npc_Orchestra_M)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': True, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Orchestra_W_00[AllTurn(Npc_Orchestra_W_00)].EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Orchestra_W_00[AllTurn(Npc_Orchestra_W_00)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {
            Npc_Orchestra_M_P[AllTurn(Npc_Orchestra_M_P)].EventWait({'IsWaitEnd': True, 'Frames': 12})
            Npc_Orchestra_M_P[AllTurn(Npc_Orchestra_M_P)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
            Npc_Orchestra_BT_F[AllTurn(Npc_Orchestra_BT_F)].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Orchestra_BT_F[AllTurn(Npc_Orchestra_BT_F)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'TurnTargetActor', 'Target': 'Target', 'InstanceName': 'TargetInstance', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            Npc_Orchestra_M_H[AllTurn(Npc_Orchestra_M_H)].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_Orchestra_M_H[AllTurn(Npc_Orchestra_M_H)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }

}

void MemberSuprised() {

    fork {
        if !Npc_Orchestra_W_00[MemberSuprised(Npc_Orchestra_W_00)].EventQueryCheckTerrorLevel() {
            Npc_Orchestra_W_00[MemberSuprised(Npc_Orchestra_W_00)].EventWait({'IsWaitEnd': True, 'Frames': 8})
            Npc_Orchestra_W_00[MemberSuprised(Npc_Orchestra_W_00)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
            Npc_Orchestra_W_00[MemberSuprised(Npc_Orchestra_W_00)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'})
        && !Npc_Orchestra_M_P[MemberSuprised(Npc_Orchestra_M_P)].EventQueryCheckTerrorLevel() {
            Npc_Orchestra_M_P[MemberSuprised(Npc_Orchestra_M_P)].EventWait({'IsWaitEnd': True, 'Frames': 12})
            Npc_Orchestra_M_P[MemberSuprised(Npc_Orchestra_M_P)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
            Npc_Orchestra_M_P[MemberSuprised(Npc_Orchestra_M_P)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'})
        && !Npc_Orchestra_BT_F[MemberSuprised(Npc_Orchestra_BT_F)].EventQueryCheckTerrorLevel() {
            Npc_Orchestra_BT_F[MemberSuprised(Npc_Orchestra_BT_F)].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Orchestra_BT_F[MemberSuprised(Npc_Orchestra_BT_F)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
            Npc_Orchestra_BT_F[MemberSuprised(Npc_Orchestra_BT_F)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'})
        && !Npc_Orchestra_M_H[MemberSuprised(Npc_Orchestra_M_H)].EventQueryCheckTerrorLevel() {
            Npc_Orchestra_M_H[MemberSuprised(Npc_Orchestra_M_H)].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_Orchestra_M_H[MemberSuprised(Npc_Orchestra_M_H)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
            Npc_Orchestra_M_H[MemberSuprised(Npc_Orchestra_M_H)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    }

}

void ResetPlayerState() {
    Player.EventTriggerParticipateEvent()
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Fairy_BurnWagon_Tribune16() {

    call Common.AirStartUP_Player()

    AsbObj_CaravanWagon_A_05[Tribune16].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1}) {
        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16")})

        } {

            call Camera_WipeFadeOut({'Miroyan_Actor': 'Npc_Orchestra_M_00_FairyTela', 'Miroyan_InstanceName': 'Tribune16'})

        } {
            GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
        }

        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0055', 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
        Event64:
        AsbObj_CaravanWagon_A_05[Tribune16].EventTriggerErasePauseMask()

        call SndStopInGameBgm()

    } else {

        call AllTurn_Tribune16({'Target': 3, 'Npc_Orchestra_M': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16"), 'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Tribune16"), 'Postman': ActorIdentifier(name="Npc_Rito_Postman_012", sub_name="Tribune16"), 'TurnTargetActor': 'AsbObj_CaravanWagon_A_05', 'TargetInstance': 'Tribune16'})

        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16")})

        } {

            call CameraSelectedByDistance_Start({'NpcActor': 'Npc_Orchestra_M_00_FairyTela', 'NpcInstanceName': 'Tribune16'})

        }


        fork {
            Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0055', 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call MemberSuprised_Tribune16({'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Tribune16"), 'Postman': ActorIdentifier(name="Npc_Rito_Postman_012", sub_name="Tribune16")})

        }

        goto Event64
    }
}

void AllTurn_Tribune16() {

    fork {
        Npc_Orchestra_M_00[AllTurn_Tribune16(Npc_Orchestra_M)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': True, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Orchestra_W_00[AllTurn_Tribune16(Npc_Orchestra_W_00)].EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Orchestra_W_00[AllTurn_Tribune16(Npc_Orchestra_W_00)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NewsPaper_Mitsuba_IsAfter_Ready_Exp'})
        && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1}) {
            Npc_Rito_Postman_001[AllTurn_Tribune16(Postman)].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 'Target', 'ActorName': 'TurnTargetActor', 'InstanceName': 'TargetInstance', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }

}

void MemberSuprised_Tribune16() {

    fork {
        if !Npc_Orchestra_W_00[MemberSuprised_Tribune16(Npc_Orchestra_W_00)].EventQueryCheckTerrorLevel() {
            Npc_Orchestra_W_00[MemberSuprised_Tribune16(Npc_Orchestra_W_00)].EventWait({'IsWaitEnd': True, 'Frames': 8})
            Npc_Orchestra_W_00[MemberSuprised_Tribune16(Npc_Orchestra_W_00)].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
            Npc_Orchestra_W_00[MemberSuprised_Tribune16(Npc_Orchestra_W_00)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NewsPaper_Mitsuba_IsAfter_Ready_Exp'})
        && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1})
        && !Npc_Rito_Postman_001[MemberSuprised_Tribune16(Postman)].EventQueryCheckTerrorLevel() {
            Npc_Rito_Postman_001[MemberSuprised_Tribune16(Postman)].EventWait({'IsWaitEnd': True, 'Frames': 8})
            Npc_Rito_Postman_001[MemberSuprised_Tribune16(Postman)].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    }

}

void Fairy_BrakeWagon_Tribune16() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Fairy_OnWagon', 'Index': -1}) {
        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        Npc_Orchestra_W_00[Tribune16].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16")})

        } {

            call Camera_WipeFadeOut({'Miroyan_Actor': 'Npc_Orchestra_M_00_FairyTela', 'Miroyan_InstanceName': 'Tribune16'})

        } {
            GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
        }

        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0058', 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerErasePauseMask()
        Npc_Orchestra_W_00[Tribune16].EventTriggerErasePauseMask()

        call SndStopInGameBgm()

    } else {

        call AllTurn_Tribune16({'Npc_Orchestra_M': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16"), 'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Tribune16"), 'Postman': ActorIdentifier(name="Npc_Rito_Postman_012", sub_name="Tribune16"), 'Target': 2, 'TurnTargetActor': 'Player', 'TargetInstance': ''})

        Npc_Orchestra_M_00_FairyTela[Tribune16].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_00_FairyTela", sub_name="Tribune16")})

        } {

            call CameraSelectedByDistance_Start({'NpcActor': 'Npc_Orchestra_M_00_FairyTela', 'NpcInstanceName': 'Tribune16'})

        }


        fork {
            Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0058', 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call MemberSuprised_Tribune16({'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Tribune16"), 'Postman': ActorIdentifier(name="Npc_Rito_Postman_012", sub_name="Tribune16")})

        }


        call SndStopInGameBgm()

    }
}

void Fairy_AfterResetEvent_Tribune16() {

    call SndStartBgm()

    AsbObj_CaravanWagon_A_05[Tribune16].EventTriggerParticipateEvent()
    AsbObj_CaravanWagon_A_05[Tribune16].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    Npc_Orchestra_M_00_FairyTela[Tribune16].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0056', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_00_FairyTela[Tribune16].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_05', 'InstanceName': 'Tribune16', 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'AsbObj_CaravanWagon_A_05', 'InstanceName': 'Tribune16', 'OffsetBase': 0})
    } {
        Npc_Orchestra_W_00[Tribune16].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_05', 'InstanceName': 'Tribune16', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NewsPaper_Mitsuba_IsAfter_Ready_Exp'}) {
            Npc_Rito_Postman_012[Tribune16].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_05', 'InstanceName': 'Tribune16', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }

    EventCamera.EventTriggerCameraSavePoint()

    call Camera_LookAtWagon({'WagonActorName': 'AsbObj_CaravanWagon_A_05', 'WagonInstanceName': 'Tribune16', 'MiroyanActorName': 'Npc_Orchestra_M_00_FairyTela', 'MiroyanAInstanceName': 'Tribune16'})

    Npc_Orchestra_M_00_FairyTela[Tribune16].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0057', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    AsbObj_CaravanWagon_A_05[Tribune16].EventTriggerErasePauseMask()
}

void Fairy_AfterReturnHomeEvent() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Fairy_SelectReturn'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Fairy_SelectReturn'})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call SndStartBgm()

    } else {
        Npc_Orchestra_M_00[Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsWaitEnd': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Orchestra_M_00[Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'Orchestra_M_ActorName', 'InstanceName': 'Orchestra_M_InstanceName', 'OffsetBase': 0})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'Fairy_Hand_Num'}) {
          case [0, 1]:
            GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})

            call SndStartBgm()

            Npc_Orchestra_M_00[Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0021', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call SndStartBgm()

            Npc_Orchestra_M_00[Fairy_AfterReturnHomeEvent(Npc_Orchestra_M)].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_0062', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Camera_Miroyan() {
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IdealDistance': 4.0, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Miroyan_Actor', 'TargetActorInstanceName': 'Miroyan_InstanceName', 'MoveTime': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void SndStopInGameBgm() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 88})
}

void PauseAllMembers() {

    fork {
        Npc_Orchestra_M_00[PauseAllMembers(Npc_Orchestra_M)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    } {
        Npc_Orchestra_W_00[PauseAllMembers(Npc_Orchestra_W_00)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {
            Npc_Orchestra_M_P[PauseAllMembers(Npc_Orchestra_M_P)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
            Npc_Orchestra_BT_F[PauseAllMembers(Npc_Orchestra_BT_F)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            Npc_Orchestra_M_H[PauseAllMembers(Npc_Orchestra_M_H)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsCloth': False, 'IsPhysics': True})
        }
    }

}

void DeletePauseAll() {

    fork {
        Npc_Orchestra_M_00[DeletePauseAll(Npc_Orchestra_M)].EventTriggerErasePauseMask()
    } {
        Npc_Orchestra_W_00[DeletePauseAll(Npc_Orchestra_W_00)].EventTriggerErasePauseMask()
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {
            Npc_Orchestra_M_P[DeletePauseAll(Npc_Orchestra_M_P)].EventTriggerErasePauseMask()
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
            Npc_Orchestra_BT_F[DeletePauseAll(Npc_Orchestra_BT_F)].EventTriggerErasePauseMask()
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
            Npc_Orchestra_M_H[DeletePauseAll(Npc_Orchestra_M_H)].EventTriggerErasePauseMask()
        }
    }

}

void SndStartBgm() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'IsClearRefCount': True, 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False})
}

void SndStopInGameBgm_OutOfArea() {
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': ''})
    SoundSystemActor.EventTriggerStartSpotBgm({'SpotBgmControlType': 5})
}

void SndStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void Camera_Player_OutOfChallengeArea() {
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': False, 'TargetActorName': 'Player', 'IdealDistance': 4.0, 'ToleranceDistance': 2.0, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorXZ': 0, 'TargetOffset': [0.0, 2.0, 0.0], 'EnableCameraAlpha': False})
}

void CameraSelectedByDistance_Start() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'CheckDistance': 15.0, 'ActorNameB': 'NpcActor', 'InstanceNameB': 'NpcInstanceName'}) {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    } else {

        call Camera_Miroyan({'Miroyan_Actor': 'NpcActor', 'Miroyan_InstanceName': 'NpcInstanceName'})

    }
}

void SetPlayerFall() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6})
    && !Player.EventQueryCheckPlayerState({'State': 11})
    && !Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Fall', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False})
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        Player.EventTriggerPlayerRequestParasail()
    }
}

void PlayerGetOff() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
}

void WagonOutOfArea_AfterWarp() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'MiroyanActorName', 'InstanceName': 'MiroyanInstanceName'})
    Npc_Orchestra_M_00[WagonOutOfArea_AfterWarp(Miroyan)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call Camera_LookAtWagonFromNear({'WagonActorName': 'WagonActorName', 'WagonInstanceName': 'WagonInstanceName'})

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call SndStartBgm()

    Npc_Orchestra_M_00[WagonOutOfArea_AfterWarp(Miroyan)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune16:Talk_5005', 'IsNotOpenIfSkipedMostRecent': False})
}

void Fairy_WarpHorse() {
    OwnedHorse_ForEvent.EventHorseDisconnectCouplerFrom({'IsWaitForComplete': False, 'IsWaitEnd': True})
    Npc_Orchestra_M_00[Fairy_WarpHorse(Npc_Orchestra)].EventWarpOwnedHorse({'InstanceName': 'Anchor_InstanceName'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}
