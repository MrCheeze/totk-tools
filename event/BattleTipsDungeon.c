-------- EventFlow: BattleTipsDungeon --------

Actor: Enemy_CDungeon_Practice[Golem2]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Enemy_CDungeon_Practice[Golem3]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_CDungeon_Practice
entrypoint: None()
actions: ['EventEnemyCDungeonReset', 'EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void WeaponsThrow() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 14})

}

void ItemThrow() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk02', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 28})

}

void SurpriseAttack() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 18})

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'BattleTipsDungeon_SecondStage', 'Index': -1})
}

void GuardJust() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk05', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 16})

}

void HeadShot1() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk07_01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 2})

}

void BowSlow1() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk06_01', 'IsUnder': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk09'})

    call Common.OpenActionGuideScreenForce({'ActionGuideType': 2})

}

void Finish() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk08', 'IsUnder': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}

void BowSlow2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    Enemy_CDungeon_Practice.EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_CDungeon_Practice[Golem2].EventTriggerParticipateEvent()
    Enemy_CDungeon_Practice[Golem3].EventTriggerParticipateEvent()
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 30, 'PosVector': [-0.10999999940395355, 7.570000171661377, 11.640000343322754], 'AtVector': [-0.20000000298023224, 5.900000095367432, 6.599999904632568], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Mat_StringIn', 'Partial': 'MaterialSub'})
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': 'Material', 'ASName': 'Mat_StringNormal'})
    } {
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Mat_StringIn', 'Partial': 'MaterialSub'})
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': 'Material', 'ASName': 'Mat_StringNormal'})
    }

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk06_02', 'IsUnder': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void HeadShot2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    Enemy_CDungeon_Practice.EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_CDungeon_Practice[Golem2].EventTriggerParticipateEvent()
    Enemy_CDungeon_Practice[Golem3].EventTriggerParticipateEvent()
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 30, 'PosVector': [-0.10999999940395355, 7.570000171661377, 11.640000343322754], 'AtVector': [-0.20000000298023224, 5.900000095367432, 6.599999904632568], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Mat_StringIn', 'Partial': 'MaterialSub'})
        Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': 'Material', 'ASName': 'Mat_StringNormal'})
    } {
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Mat_StringIn', 'Partial': 'MaterialSub'})
        Enemy_CDungeon_Practice[Golem3].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': 'Material', 'ASName': 'Mat_StringNormal'})
    }

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk07_02', 'IsUnder': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void Reset() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'Position': [0.0, 0.0, 15.0], 'IsWaitEnd': False, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Enemy_CDungeon_Practice.EventEnemyCDungeonReset({'IsWaitEnd': True})
    Enemy_CDungeon_Practice.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_CDungeon_Practice', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [0.0, 5.239999771118164, 23.299999237060547], 'AtVector': [0.0, 3.1500000953674316, 18.43000030517578], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Event36:
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03_02', 'IsUnder': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BattleTipsDungeon_SecondStage', 'Index': -1}) {
        GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03_03'})
    } else {
        GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03', 'IsUnder': False})

        call Common.OpenActionGuideScreenForce({'ActionGuideType': 18})

    }
}

void ItemThrow2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk02_02', 'IsUnder': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void WeaponsThrow2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk01_02', 'IsUnder': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void SurpriseAttack2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [0.0, 5.239999771118164, 23.299999237060547], 'AtVector': [0.0, 3.1500000953674316, 18.43000030517578], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    goto Event36
}

void GuardJust2() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    Enemy_CDungeon_Practice[Golem2].EventTriggerParticipateEvent()
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 30, 'PosVector': [5.300000190734863, 5.449999809265137, 13.0], 'AtVector': [5.199999809265137, 4.800000190734863, 8.800000190734863], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_CDungeon_Practice[Golem2].EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Mat_StringIn', 'Partial': 'MaterialSub'})
    Enemy_CDungeon_Practice[Golem2].EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': 'Material', 'ASName': 'Mat_StringNormal'})
    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk05-02'})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}

void SurpriseAttackSecond() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    Enemy_CDungeon_Practice.EventPlayAS({'ASName': 'BattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk10'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'Position': [0.0, 0.0, 15.0], 'IsWaitEnd': False, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Enemy_CDungeon_Practice.EventEnemyCDungeonReset({'IsWaitEnd': True})
    Enemy_CDungeon_Practice.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_CDungeon_Practice', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [0.0, 5.239999771118164, 23.299999237060547], 'AtVector': [0.0, 3.1500000953674316, 18.43000030517578], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False, 'MessageID': 'EventFlowMsg/BattleTipsDungeon:talk03_03'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BattleTipsDungeon_SecondStage', 'Value': True, 'Index': -1})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 75})
}
