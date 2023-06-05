-------- EventFlow: Npc_oasis025 --------

Actor: Npc_oasis025[Defense]
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_OasisSoldier_C[Defense]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis042[Defense]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_OasisSoldier_B[Defense]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis041[Defense]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_OasisSoldier_A[Defense]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis040[Defense]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsDown']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventCloseMessageDialog', 'EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis025
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_GerudoDesert004
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event42:

    call Npc_GerudoDesert001.NearActorsTalk()

}

void PreSpearDeploy() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_OasisSoldier_C[Defense].EventTriggerParticipateEvent()
    Npc_OasisSoldier_B[Defense].EventTriggerParticipateEvent()
    Npc_OasisSoldier_A[Defense].EventTriggerParticipateEvent()
}

void SpearDeployN() {

    call SpearDeployN_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'})
}

void AfterDeploy() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void SpearDeployE() {

    call SpearDeployE_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'})
}

void SpearDeployW() {

    call SpearDeployW_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'})
}

void SpearDeployDefault() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearBefore'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'DeploySpearBefore'})
    }
    Npc_OasisSoldier_C[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_B[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_A[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'})
}

void PreSwordDeploy() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_oasis042[Defense].EventTriggerParticipateEvent()
    Npc_oasis041[Defense].EventTriggerParticipateEvent()
    Npc_oasis040[Defense].EventTriggerParticipateEvent()
}

void SwordDeployN() {

    call SwordDeployN_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'})
}

void SwordDeployE() {

    call SwordDeployE_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'})
}

void SwordDeployW() {

    call SwordDeployW_Warp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'})
}

void SwordDeployDefault() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySwordBefore'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'DeploySpearBefore'})
    }
    Npc_oasis042[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis041[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis040[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'})
}

void PreCannonDeploy() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_GerudoDesert004.EventTriggerParticipateEvent()
}

void CannonDeployN() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonN'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonN', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_GerudoDesert004.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'ForceGetUpDuringSleep': True, 'ActionType': 5, 'AnchorType': 23, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert004.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'})
}

void CannonDeployE() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonE'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonE', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_GerudoDesert004.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'ForceGetUpDuringSleep': True, 'ActionType': 4, 'AnchorType': 23, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert004.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'})
}

void CannonDeployW() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonW'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonW', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_GerudoDesert004.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'ForceGetUpDuringSleep': True, 'ActionType': 6, 'AnchorType': 23, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert004.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'})
}

void CannonDeployDefault() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonBefore'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeployCannonBefore', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_GerudoDesert004.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployBefore', 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'AnchorType': 23, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert004.EventPlayAS({'ASName': 'Act_Squat', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'})
}

void SpearDeployCenter() {
    Npc_OasisSoldier_C[Defense].EventTriggerParticipateEvent()
    if !Npc_OasisSoldier_C[Defense].EventQueryIsDown() {
        Event11:
        Npc_OasisSoldier_B[Defense].EventTriggerParticipateEvent()
        if !Npc_OasisSoldier_B[Defense].EventQueryIsDown() {
            Event12:
            Npc_OasisSoldier_A[Defense].EventTriggerParticipateEvent()
            if !Npc_OasisSoldier_A[Defense].EventQueryIsDown() {
                Event333:
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearC'})
            } else {
                Npc_OasisSoldier_A[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                Npc_OasisSoldier_A[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                goto Event333
            }
        } else {
            Npc_OasisSoldier_B[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_OasisSoldier_B[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event12
        }
    } else {
        Npc_OasisSoldier_C[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_OasisSoldier_C[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        goto Event11
    }
}

void SwordDeployCenter() {
    Npc_oasis042[Defense].EventTriggerParticipateEvent()
    if !Npc_oasis042[Defense].EventQueryIsDown() {
        Event14:
        Npc_oasis041[Defense].EventTriggerParticipateEvent()
        if !Npc_oasis041[Defense].EventQueryIsDown() {
            Event15:
            Npc_oasis040[Defense].EventTriggerParticipateEvent()
            if Npc_oasis040[Defense].EventQueryIsDown() {
                Npc_oasis040[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                Npc_OasisSoldier_A[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordC'})
            }
        } else {
            Npc_oasis041[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_OasisSoldier_B[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event15
        }
    } else {
        Npc_oasis042[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployCenter', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_OasisSoldier_C[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        goto Event14
    }
}

void SageOfGerudo_PreDefenseEnd_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_oasis025[Defense].EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_Deployed'}) {
            Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_22', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Event121:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_24', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event138:

                        call PreSpearDeploy()


                        call SpearDeployE()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3764.469970703125, 152.25, 2931.449951171875], 'AtVector': [-3763.89990234375, 152.27000427246094, 2932.27001953125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_36', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event140:

                        call AfterDeploy()


                        call SpearDeploySetCheck()

                      case 1:
                        Event141:

                        call PreSpearDeploy()


                        call SpearDeployW()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3892.679931640625, 153.24000549316406, 2891.199951171875], 'AtVector': [-3893.610107421875, 153.19000244140625, 2890.830078125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_37', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event140
                      case 2:
                        Event144:

                        call PreSpearDeploy()


                        call SpearDeployDefault()

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                      case 3:
                        Event47:
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_42', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_25', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event130:

                        call PreSpearDeploy()


                        call SpearDeployN()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3819.7900390625, 153.2899932861328, 2899.97998046875], 'AtVector': [-3819.06005859375, 153.25999450683594, 2899.2900390625], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_35', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event140
                      case 1:
                        goto Event141
                      case 2:
                        goto Event144
                      case 3:
                        goto Event47
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_26', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event130
                      case 1:
                        goto Event138
                      case 2:
                        goto Event144
                      case 3:
                        goto Event47
                    }
                } else {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_23', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event130
                      case 1:
                        goto Event138
                      case 2:
                        goto Event141
                      case 3:
                        goto Event47
                    }
                }
              case 1:
                Event193:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordN'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_27', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event205:

                        call PreSwordDeploy()


                        call SwordDeployE()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3764.469970703125, 152.25, 2931.449951171875], 'AtVector': [-3763.89990234375, 152.27000427246094, 2932.27001953125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_36', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 1:
                        Event208:

                        call PreSwordDeploy()


                        call SwordDeployW()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3892.679931640625, 153.24000549316406, 2891.199951171875], 'AtVector': [-3893.610107421875, 153.19000244140625, 2890.830078125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_37', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 2:
                        Event211:

                        call PreSwordDeploy()


                        call SwordDeployDefault()

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                      case 3:
                        Event49:
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_42', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordE'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_28', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event202:

                        call PreSwordDeploy()


                        call SwordDeployN()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3819.7900390625, 153.2899932861328, 2899.97998046875], 'AtVector': [-3819.06005859375, 153.25999450683594, 2899.2900390625], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_35', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 1:
                        goto Event208
                      case 2:
                        goto Event211
                      case 3:
                        goto Event49
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySwordW'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_29', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event202
                      case 1:
                        goto Event205
                      case 2:
                        goto Event211
                      case 3:
                        goto Event49
                    }
                } else {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_23', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event202
                      case 1:
                        goto Event205
                      case 2:
                        goto Event208
                      case 3:
                        goto Event49
                    }
                }
              case 2:
                Event216:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_30', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event228:

                        call PreCannonDeploy()


                        call CannonDeployE()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3787.080078125, 159.42999267578125, 2925.5], 'AtVector': [-3786.360107421875, 159.4499969482422, 2926.18994140625], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_36', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 1:
                        Event231:

                        call PreCannonDeploy()


                        call CannonDeployW()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3878.419921875, 161.6999969482422, 2892.110107421875], 'AtVector': [-3879.340087890625, 161.64999389648438, 2891.72998046875], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_37', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 2:
                        Event234:

                        call PreCannonDeploy()


                        call CannonDeployDefault()

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                      case 3:
                        Event50:
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_42', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_31', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 8, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event225:

                        call PreCannonDeploy()


                        call CannonDeployN()

                        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3809.489990234375, 166.17999267578125, 2889.25], 'AtVector': [-3808.820068359375, 166.0500030517578, 2888.52001953125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_35', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call AfterDeploy()

                      case 1:
                        goto Event231
                      case 2:
                        goto Event234
                      case 3:
                        goto Event50
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'}) {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_32', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event225
                      case 1:
                        goto Event228
                      case 2:
                        goto Event234
                      case 3:
                        goto Event50
                    }
                } else {
                    Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_23', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event225
                      case 1:
                        goto Event228
                      case 2:
                        goto Event231
                      case 3:
                        goto Event50
                    }
                }
              case 3:
                Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_42', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Event115:
            Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_22', 'ChoiceNumber': 4, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                goto Event121
              case 1:
                goto Event193
              case 2:
                goto Event216
              case 3:
                Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_41', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_21', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event115
    }
}

void SageOfGerudo_PreDefenseEnd_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_oasis025:Near_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SageOfGerudo_DefenseStart_Talk() {

    call GerudoGreeting.NoTalk_Yiga({'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_46'})


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEOpen'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearC'}) {
            Event54:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEDead'})
            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestNDead'})
            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestWDead'}) {
                Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_44', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Event133:
                Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_33', 'ASName': 'GuardWait', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_43', 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Npc_oasis025_CallBack'})
            } else
            goto Event54
        }
    } else {
        goto Event133
    }
}

void SageOfGerudo_IsAfter_DefenseStart_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {

        call GerudoGreeting.InitTalk_GerudoGreeting()


        call GerudoGreeting.Hello1()

        Npc_oasis025.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_38', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_oasis025.EventQueryIsOnRecentTalkFlag() {
            Npc_oasis025.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_40', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_oasis025.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_39', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void SpearDeployN_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'DeploySpearN', 'Length': 3.0, 'Radius': 4.0}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearN', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_OasisSoldier_C[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_B[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_A[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SpearDeployE_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearE'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearE', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_OasisSoldier_C[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_B[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_A[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SpearDeployW_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearW'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearW', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_OasisSoldier_C[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_B[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OasisSoldier_A[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SwordDeployN_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'DeploySpearN', 'Length': 3.0, 'Radius': 4.0}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearN', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_oasis042[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis041[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis040[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployN', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SwordDeployE_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearE'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearE', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_oasis042[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis041[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis040[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployE', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SwordDeployW_Warp() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 3.0, 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearW'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'AnchorInstanceName': 'DeploySpearW', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
    Npc_oasis042[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis041[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis040[Defense].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'DeployW', 'AnchorType': 23, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
}

void SpearDeploySetCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployFenceN'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearN'}) {
            Event38:
            Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_45', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployFenceE'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearE'}) {
            goto Event38
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployFenceW'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeploySpearW'}) {
        goto Event38
    }
}

void NearActorsTalk() {
    goto Event42
}

void NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_PracticeStart_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis025:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void SageOfGerudo_IsAfter_DefenseStart_Exp_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis025:Near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_oasis025_CallBack() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call SpearDeployCenter()


    call SwordDeployCenter()

    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3860.06005859375, 159.02000427246094, 2938.389892578125], 'AtVector': [-3859.429931640625, 158.6199951171875, 2937.72998046875], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
