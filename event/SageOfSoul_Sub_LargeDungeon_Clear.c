-------- EventFlow: SageOfSoul_Sub_LargeDungeon_Clear --------

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventSetMaterialVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventEventFadeOut', 'EventOpenInstantTips']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventTriggerParticipateEvent', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerRideRobot']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Obj_HeartUtuwa_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Zonau_RaumiGolem[NpcRaumiGolem]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerAIScheduleSelectSchedule']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zonau
entrypoint: None()
actions: ['EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundWaitForEventSoundFinished', 'EventTriggerSoundStopPreDieBossSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_RaumiGolem[GotSecretStone]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Event_DungeonBoss_Defeated() {
    Player.EventTriggerParticipateEvent()
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call BossBattle_Common.BossBattle_CommonA()

    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZN_BossOut', 'FadeInTypeEventEnd': 2})
    Enemy_DungeonBoss_Zonau.EventTriggerDeathSignal()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_DungeonBoss_Defeated', 'Value': True, 'Index': -1})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1370.219970703125, -627.8900146484375, 3303.64990234375], 'AtVector': [1367.72998046875, -631.3599853515625, 3310.409912109375], 'TargetFovy': 65.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Obj_HeartUtuwa_A_01.EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 24}) {
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventPlayerRideRobot({'ActorName': 'Npc_RaumiGolem_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 180, 'IsWaitEnd': True})
        Event50:
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'BossBattleEnd', 'UseDemoWait': True})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    } else {
        goto Event50
    }
}

void Event_GotSecretStone() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSetMaterialVisible({'IsVisible': True, 'MaterialName': 'Mt_SecretStone_Spirit', 'IsWaitEnd': True, 'ModelAccessIndex': 0})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSetMaterialVisible({'IsVisible': True, 'MaterialName': 'Mt_Metal_SecretStone', 'IsWaitEnd': True, 'ModelAccessIndex': 0})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSetMaterialVisible({'IsVisible': True, 'IsWaitEnd': True, 'ModelAccessIndex': 0, 'MaterialName': 'Mt_Glow_SecretStone'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0030', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZN_0030_SpiritualWorld'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsFollowMode', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsSageDynamicGenerate', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_GotSecretStone', 'Value': True, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call C1()

}

void C1() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0031', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZN_0033_PreRender'})
    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call C2()

}

void C2() {
    Npc_Zonau_RaumiGolem[GotSecretStone].EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZN_0034'})
    Npc_Zonau_RaumiGolem[GotSecretStone].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZN_0039_PreRender'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.5, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'PosVector': [2.5299999713897705, 0.4699999988079071, -2.740000009536743], 'AtVector': [-1.5499999523162842, 2.819999933242798, 4.400000095367432], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    } {
        SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    }


    call C3()

}

void C3() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZN_0047'})
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTriggerParticipateEvent()
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTriggerAIScheduleSelectSchedule()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 46})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SageSoul_Zonau'})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Soul.IsGet'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsSummon', 'Value': True, 'Index': -1})

    call Common.OpenActionGuideScreen({'ActionGuideType': 25})

    GameSystemActor.EventOpenInstantTips({'InstantTipwType': 38, 'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call C4()

}

void C4() {
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'StepName': 'Complete'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveMasterSword', 'Index': -1}) {
        Event61:
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MasterSwordClues', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        Event52:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClueTotheSixthSage_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'ClueTotheSixthSage', 'StepName': 'UntilYouReport'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event0:

            call DragonMemoryCommonFlow.OpenPlayButton({'OpenCondition': 18})

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_BlacksmithGolem_Appears', 'Index': -1})
        } else {
            goto Event0
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
        goto Event61
    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MasterSwordClues', 'IsIgnoreCompletedChallenge': True, 'StepName': 'TalkOldKorok'})
        GameSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        goto Event52
    }
}
