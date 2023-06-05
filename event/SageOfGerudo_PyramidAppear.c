-------- EventFlow: SageOfGerudo_PyramidAppear --------

Actor: Npc_Gerudo_Queen_Young[Dungeon]
entrypoint: None()
actions: ['EventWait', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventOpenActionGuideWithPictScreen', 'EventTriggerNoticeActionGuideWithPictScreenClosable', 'EventCloseActionGuideWithPictScreen', 'EventTriggerRequestAutoSave', 'EventWaitForDynamicSagePresence', 'EventWaitForSageOnGround', 'EventEventFadeOut', 'EventTriggerRequestRelocateAfterEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EventMemberCreateMethod': 4, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_GerudoSwitchBlock_A_01
entrypoint: None()
actions: ['EventTriggerSoundDisableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call Common.AirStartUP_Player()

        DgnObj_GerudoSwitchBlock_A_01.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        Npc_Gerudo_Queen_Young[Dungeon].EventTriggerParticipateEvent()
        Npc_Gerudo_Queen_Young[Dungeon].EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_Pyramid', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfGerudo', 'StepName': 'DungeonStart', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_RougeLightningOn', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Electric.IsSageDynamicGenerate', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode', 'Value': True})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4251.7998046875, 147.8300018310547, 3351.0], 'YAngle': -47.23979949951172, 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4247.66015625, 149.4600067138672, 3347.800048828125], 'AtVector': [-4251.72021484375, 149.6300048828125, 3350.969970703125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWaitForDynamicSagePresence({'SageType': 3, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForSageOnGround({'IsWaitEnd': True, 'SageType': 3})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-4250.97998046875, 147.8300018310547, 3353.909912109375]})
    GameSystemActor.EventTriggerRequestRelocateAfterEvent({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PyramidArea', 'Radius': 400.0, 'Height': 200.0})
    GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    GameSystemActor.EventOpenActionGuideWithPictScreen({'IsWaitEnd': True, 'ActionGuideCompanionOrderType': 3})
    EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerNoticeActionGuideWithPictScreenClosable()
    GameSystemActor.EventCloseActionGuideWithPictScreen({'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfGerudo', 'ChallengeStep': 'DungeonStart'})
    GameSystemActor.EventTriggerRequestAutoSave()
}
