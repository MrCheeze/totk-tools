-------- EventFlow: DmF_GE_BattleBefore --------

Actor: Dm_Locator[Position01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_oasis007[Defense]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTalk', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': False, 'IsGrounding': False, 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[Defense]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerChangeEmotion', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Npc_Gerudo_Queen_Young.root.as', 'EquipmentUser_Weapon': 'Weapon_Sword_152_Main', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': 'Weapon_Sword_152_Sub', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'IsGrounding': False, 'EventMemberCreateMethod': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02[North]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Npc_oasis036[Defense]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis026[Defense]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis025[Defense]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTalk', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Wait_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Wait_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Wait_03]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_A]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3791.0, 150.0, 2849.0], 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_B]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'IsWorld': True, 'Position': [-3791.0, 150.0, 2849.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3951.544921875, 149.531005859375, 2865.429931640625], 'Rotation': [0.0, 64.21900177001953, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_D]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3936.256103515625, 149.67660522460938, 2873.5390625], 'Rotation': [0.0, 41.584999084472656, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_E]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsGrounding': False, 'Rotation': [0.0, 66.14472198486328, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'Position': [-3936.447998046875, 149.44129943847656, 2864.8779296875], 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_F]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3940.9619140625, 149.65809631347656, 2857.281005859375], 'Rotation': [0.0, 50.672000885009766, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_G]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Rotation': [0.0, 40.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsGrounding': False, 'Position': [-3926.364013671875, 148.9600067138672, 2863.343017578125], 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense[Enemy_H]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3927.447021484375, 149.2615966796875, 2855.4208984375], 'Rotation': [0.0, 44.290000915527344, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02[West]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02[East]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerControllerRumble', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_GerudoDesert004
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Enemy_Zombie_Junior_Defense
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_BattleBefore/DmF_GE_BattleBefore_Enemy_Zombie_Junior/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_BattleBefore_Enemy_Zombie_Junior.root.as', 'Position': [-3791.0, 150.0, 2849.0], 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundReleaseDucking', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventSoundRequestDucking', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventSoundChangeListenerPreset', 'EventSoundStartSound', 'EventTriggerSetNpcVoiceFarMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Pre()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_DefenseReceivedBattleExplan', 'Index': -1}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }

    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C13()

    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 0})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
        FldObj_Gerudo_ZombieNest_A_02[North].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Close'})
        Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3848.739990234375, 149.5800018310547, 2927.719970703125], 'YAngle': -104.21589660644531})
        Npc_Gerudo_Queen_Young[Defense].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [-3835.3701171875, 149.5800018310547, 2913.800048828125]})
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': 12.0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3859.139892578125, 156.5399932861328, 2937.47998046875], 'AtVector': [-3858.43994140625, 156.25, 2936.81005859375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2, 'Color': 0})
        Npc_oasis007[Defense].EventTalk({'ASName': 'BattleWait', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_09', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.05999999865889549, 3.2799999713897705, -4.099999904632568], 'AtVector': [-0.12999999523162842, 1.7899999618530273, 0.9800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'MoveTime': 30})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }
}

void Pre() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 135.0, 'Position': [-3865.18994140625, 156.3000030517578, 2941.830078125], 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': True, 'IsWaitEnd': True})
    Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3863.3798828125, 156.30999755859375, 2942.419921875], 'YAngle': 135.0})
    Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_oasis007[Defense].EventWarpToTargetPosAndRot({'YAngle': 135.0, 'Position': [-3847.4599609375, 149.5800018310547, 2926.110107421875], 'IsWaitEnd': True})
    Npc_oasis007[Defense].EventPlayAS({'ASName': 'Act_GeneralWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
    Npc_oasis025[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 135.0, 'Position': [-3844.409912109375, 149.5800018310547, 2924.389892578125]})
    Npc_oasis025[Defense].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_oasis036[Defense].EventWarpToTargetPosAndRot({'YAngle': 200.0, 'Position': [-3850.719970703125, 149.5800018310547, 2924.969970703125], 'IsWaitEnd': True})
    Npc_oasis026[Defense].EventWarpToTargetPosAndRot({'YAngle': 83.0, 'Position': [-3846.39990234375, 149.5800018310547, 2929.610107421875], 'IsWaitEnd': True})
    Npc_GerudoDesert004.EventPlayAS({'ASName': 'Act_Squat', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
}

void C01() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3849.64990234375, 174.24000549316406, 2869.360107421875], 'AtVector': [-3849.6298828125, 173.88999938964844, 2870.300048828125], 'TargetFovy': 29.860000610351562, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3849.60009765625, 173.3800048828125, 2871.659912109375], 'AtVector': [-3849.580078125, 173.02999877929688, 2872.60009765625], 'TargetFovy': 29.860000610351562, 'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsLinearMove': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis007[Defense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[Defense].EventPlayAS({'ASName': 'Act_GeneralWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis025[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis036[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis026[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2, 'Color': 0})
    } {

        call C09_Enemy_West_erase()

    }

}

void C02() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3851.739990234375, 151.41000366210938, 2919.489990234375], 'AtVector': [-3851.030029296875, 151.39999389648438, 2920.199951171875], 'TargetFovy': 20.65999984741211, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsLinearMove': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3853.3798828125, 151.41000366210938, 2920.97998046875], 'AtVector': [-3852.669921875, 151.39999389648438, 2921.679931640625], 'TargetFovy': 20.65999984741211, 'MoveTime': 95, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsLinearMove': True, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_oasis007[Defense].EventPlayAS({'ASName': 'Act_GeneralWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis025[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis036[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis026[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    }

}

void C03() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'SceneName': 'C04-0', 'IsWaitEnd': False, 'TargetActorInstanceName': 'Defense', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_00', 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Defense', 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_01', 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:環境系ミュート(戦闘開始C03用)'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dmf_GE_BattleBefore_C03_Rumble', 'IsIgnoreDucking': False})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'SceneName': 'C04-2', 'TargetActorInstanceName': 'Defense', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerRequestLookAtTheFront()
        Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 4})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_02', 'ChangeMstxtForActor': False, 'ASName': 'AS-C04-Npc_Gerudo_Queen_Young-A-2', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    } {
        EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Camera_Sin00'})
        EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LookAround', 'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        call Enemy_Warp()

    } {
        EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 40})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_GerudoVillageDefense', 'IsReleaseDucking': True, 'CommandLife': 2})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void C04() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        FldObj_Gerudo_ZombieNest_A_02[North].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Nest_Drip', 'SLinkKey': ''})
        FldObj_Gerudo_ZombieNest_A_02[North].EventPlayAS({'ASName': 'Open', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        FldObj_Gerudo_ZombieNest_A_02[West].EventPlayAS({'ASName': 'Open', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        FldObj_Gerudo_ZombieNest_A_02[East].EventPlayAS({'ASName': 'Open', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3774.800048828125, 157.4600067138672, 2854.080078125], 'AtVector': [-3774.090087890625, 157.50999450683594, 2853.3701171875], 'TargetFovy': 50.29999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3770.780029296875, 157.75, 2850.0], 'AtVector': [-3770.080078125, 157.8000030517578, 2849.2900390625], 'TargetFovy': 50.29999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'MoveTime': 60, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3770.780029296875, 157.75, 2850.0], 'AtVector': [-3770.080078125, 157.8000030517578, 2849.2900390625], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'MoveTime': 30, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 0.029999999329447746})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 58})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Dmf_GE_BattleBefore_C04_Zombie_Born'})
    }

}

void C05() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.029999999329447746})
    FldObj_Gerudo_ZombieNest_A_02[North].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Nest_Drip', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'PosVector': [-3773.7900390625, 149.7899932861328, 2852.510009765625], 'AtVector': [-3772.919921875, 149.7899932861328, 2851.6201171875], 'TargetFovy': 24.399999618530273, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'MoveTime': 200, 'PosVector': [-3773.18994140625, 149.7899932861328, 2851.889892578125], 'AtVector': [-3772.919921875, 149.7899932861328, 2851.6201171875], 'TargetFovy': 24.399999618530273, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Generate_GibdoA', 'SLinkKey': ''})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'ASName': 'AS-C06-Enemy_Zombie_Junior-A-0', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Smoke_GibdoA', 'SLinkKey': ''})
        EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'IsWaitEnd': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-1', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'ASName': 'AS-C06-Enemy_Zombie_Junior-A-2', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Dm_Enemy_Zombie_Junior_Defense.EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Generate_GibdoC', 'SLinkKey': ''})
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-4', 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Enemy_Zombie_Junior_Defense.EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Smoke_GibdoC', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-5', 'ForceFadeInFrame': -1.0})
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-6', 'IsWaitEnd': False})
    } {
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Generate_GibdoB', 'SLinkKey': ''})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'ASName': 'AS-C06-Enemy_Zombie_Junior-A-0', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_Smoke_GibdoB', 'SLinkKey': ''})
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-1', 'ForceFadeInFrame': -1.0})
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C06-Enemy_Zombie_Junior-A-0_Stand_Up', 'ForceFadeInFrame': -1.0})
    } {

        call NPC_Furimuki_Bunki0()

    } {

        call C06_Cam_Sheikh()

    }


    call C06_Npc_Position()

}

void C06() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:環境系ミュート(戦闘開始C03用)'})

    call C07_Bunki()

}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3862.510009765625, 157.25, 2940.919921875], 'AtVector': [-3863.110107421875, 157.4499969482422, 2941.68994140625], 'TargetFovy': 42.79999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3862.6201171875, 157.27999877929688, 2941.06005859375], 'AtVector': [-3863.22998046875, 157.49000549316406, 2941.830078125], 'TargetFovy': 42.79999923706055, 'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 180, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_03', 'ChangeMstxtForActor': False, 'ASName': 'AS-C08-Npc_Gerudo_Queen_Young-A-0', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_GerudoDesert004.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Locator[Position01].EventTriggerParticipateEvent()

        call C08_Enemy_Position_01()

    }

}

void C08() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.10000000149011612, 'ListenerPresetName': 'CameraFront_24m'})

        call C09Cam()

        SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.10000000149011612, 'ListenerPresetName': 'Normal'})
    } {

        call C08_Enemy_Position_02()

    } {

        call NPC_Warp02()

        Npc_oasis025[Defense].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_oasis025[Defense].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
        Npc_oasis025[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3846.590087890625, 149.5800018310547, 2926.52001953125], 'YAngle': 135.0})
    }

}

void C11() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'TargetActorInstanceName': 'Defense', 'SceneName': 'C12-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'AS-C12-Npc_Gerudo_Queen_Young-A-0', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
}

void C12() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'TargetActorInstanceName': 'Defense', 'SceneName': 'C13-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'YAngle': 135.0, 'IsWaitEnd': True, 'Position': [-3847.199951171875, 149.5800018310547, 2925.429931640625]})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerEmitXLink({'ELinkKey': 'DmF_GE_BattleBefore_FallLand_Soil', 'SLinkKey': ''})
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'AS-C13-Npc_Gerudo_Queen_Young-A-0', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_07', 'ChangeMstxtForActor': False, 'ASName': 'AS-C13-Npc_Gerudo_Queen_Young-A-1', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.5})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3864.47607421875, 156.30140686035156, 2942.25], 'YAngle': 135.0, 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
}

void C09() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3838.830078125, 151.47999572753906, 2917.18994140625], 'AtVector': [-3839.52001953125, 151.42999267578125, 2917.909912109375], 'TargetFovy': 21.100000381469727, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3839.2099609375, 151.4499969482422, 2917.590087890625], 'AtVector': [-3839.89990234375, 151.39999389648438, 2918.31005859375], 'TargetFovy': 21.100000381469727, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 250, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_oasis025[Defense].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'AS-C10-UMii_Gerudo_BodyS_W_000-A-0', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        Npc_oasis025[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_04', 'ChangeMstxtForActor': False, 'ASName': 'AS-C10-UMii_Gerudo_BodyS_W_000-A-1', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    } {
        Npc_oasis026[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
        Npc_oasis007[Defense].EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerLookAtObject({'WorldPos': [-3862.360107421875, 157.57000732421875, 2941.39990234375], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3864.64990234375, 156.3000030517578, 2942.14990234375], 'IsWaitEnd': True, 'YAngle': 115.0, 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Defense', 'TurnFaceControlType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_oasis036[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    } {

        call C09_Enemy_West_erase()

    }

}

void C10() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()
    Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'Position': [-3863.3798828125, 156.30999755859375, 2942.419921875], 'YAngle': 135.0, 'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Defense', 'PosVector': [-0.05999999865889549, 0.5699999928474426, 3.5899999141693115], 'AtVector': [0.009999999776482582, 1.2300000190734863, 0.949999988079071], 'TargetFovy': 21.059999465942383, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Defense', 'PosVector': [-0.05999999865889549, 0.5699999928474426, 3.5899999141693115], 'AtVector': [0.009999999776482582, 1.2300000190734863, 0.949999988079071], 'TargetFovy': 21.059999465942383, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 2, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Defense', 'PosVector': [-0.029999999329447746, 0.8600000143051147, 2.440000057220459], 'AtVector': [0.009999999776482582, 1.2300000190734863, 0.949999988079071], 'TargetFovy': 21.059999465942383, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 9, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'MoveTime': 300, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Defense', 'PosVector': [-0.029999999329447746, 0.8600000143051147, 2.440000057220459], 'AtVector': [0.009999999776482582, 1.2300000190734863, 0.949999988079071], 'TargetFovy': 21.059999465942383, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_05', 'EndDialogOption': 3, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Gerudo_Queen_Young[Defense].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_06', 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0_Loop', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    } {

        call NPC_Warp_Position()

        Npc_oasis025[Defense].EventPlayAS({'ASName': 'BattleWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Defense', 'PosVector': [-0.029999999329447746, 0.8600000143051147, 2.440000057220459], 'AtVector': [0.009999999776482582, 1.559999942779541, 1.0700000524520874], 'TargetFovy': 21.059999465942383, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 3, 'IsLinearMove': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call C11_Gerudo_Queen_wepon_on()

        Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 137.0, 'Position': [-3850.010009765625, 149.5800018310547, 2928.570068359375]})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerRequestLookAtTheFront()
    }

}

void C13() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3859.139892578125, 156.5399932861328, 2937.47998046875], 'AtVector': [-3858.43994140625, 156.25, 2936.81005859375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 180, 'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3860.3798828125, 157.0500030517578, 2938.669921875], 'AtVector': [-3858.43994140625, 156.25, 2936.81005859375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3848.739990234375, 149.5800018310547, 2927.719970703125], 'YAngle': -104.21589660644531})
        Npc_Gerudo_Queen_Young[Defense].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [-3835.3701171875, 149.5800018310547, 2913.800048828125]})
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': 12.0})
    } {
        Npc_oasis007[Defense].EventTalk({'ASName': 'BattleWait', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_08', 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
        Npc_oasis007[Defense].EventTalk({'ASName': 'BattleWait', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_09', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.05999999865889549, 3.2799999713897705, -4.099999904632568], 'AtVector': [-0.12999999523162842, 1.7899999618530273, 0.9800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfGerudo_DefenseReceivedBattleExplan', 'Index': -1})
}

void Enemy_Warp() {
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3765.3798828125, 150.1999969482422, 2838.699951171875], 'YAngle': -43.0})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'IsWaitEnd': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-3', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventWarpToTargetPosAndRot({'Position': [-3763.469970703125, 147.0, 2845.320068359375], 'IsWaitEnd': True, 'YAngle': -45.0})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'ASName': 'AS-C06-Enemy_Zombie_Junior-A-3', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Dm_Enemy_Zombie_Junior_Defense.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -45.0, 'Position': [-3770.85009765625, 200.0, 2849.419921875]})
    Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'ASName': 'AS-C06-Enemy_Zombie_Junior-A-3', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
}

void NPC_Warp_Position() {
    Npc_oasis007[Defense].EventWarpToTargetPosAndRot({'Position': [-3850.840087890625, 149.5800018310547, 2928.239990234375], 'IsWaitEnd': True, 'YAngle': 135.0})
    Npc_oasis025[Defense].EventWarpToTargetPosAndRot({'Position': [-3848.659912109375, 149.5800018310547, 2930.1201171875], 'IsWaitEnd': True, 'YAngle': 135.0})
    Npc_oasis026[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 135.0, 'Position': [-3847.60693359375, 149.5800018310547, 2931.40087890625]})
    Npc_oasis036[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 135.0, 'Position': [-3852.590087890625, 149.5800018310547, 2927.110107421875]})
}

void C09Cam() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3859.719970703125, 161.80999755859375, 2935.77001953125], 'AtVector': [-3860.219970703125, 161.32000732421875, 2936.5], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3891.469970703125, 169.6199951171875, 2881.389892578125], 'AtVector': [-3892.2900390625, 169.25999450683594, 2880.93994140625], 'TargetFovy': 50.0, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-3794.449951171875, 172.25, 2872.969970703125], 'AtVector': [-3786.179931640625, 165.38999938964844, 2864.8798828125], 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3780.6201171875, 168.92999267578125, 2944.31005859375], 'AtVector': [-3779.75, 168.67999267578125, 2944.72998046875], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void NPC_Warp02() {
    Npc_oasis036[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3846.39990234375, 149.5800018310547, 2929.610107421875], 'YAngle': 135.0})
    Npc_oasis026[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3850.719970703125, 149.5800018310547, 2924.969970703125], 'YAngle': 135.0})
    Npc_oasis025[Defense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3846.590087890625, 149.5800018310547, 2926.52001953125], 'YAngle': 135.0})
    Npc_oasis007[Defense].EventWarpToTargetPosAndRot({'YAngle': 135.0, 'IsWaitEnd': False, 'Position': [-3845.820068359375, 149.5800018310547, 2923.56005859375]})
    Npc_oasis025[Defense].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Npc_oasis036[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    Npc_oasis026[Defense].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    Npc_oasis007[Defense].EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    Npc_Gerudo_Queen_Young[Defense].EventTriggerRequestLookAtTheFront()
}

void C07_Bunki() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'}) {

        call C07_North()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'}) {

        call C07_East()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'}) {

        call C07_West()

    } else {

        call C07_North()

    }
}

void C07_North() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'PosVector': [-3815.590087890625, 164.07000732421875, 2882.389892578125], 'AtVector': [-3804.219970703125, 165.38999938964844, 2880.1201171875], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'MoveTime': 300, 'PosVector': [-3816.219970703125, 164.07000732421875, 2882.510009765625], 'AtVector': [-3804.85009765625, 165.38999938964844, 2880.25], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        Npc_GerudoDesert004.EventTalk({'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_10', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'AS-C07-UMii_Gerudo_BodyS_W_000-A-0', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    }

}

void C07_East() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3790.070068359375, 159.4199981689453, 2931.3701171875], 'AtVector': [-3789.14990234375, 159.4499969482422, 2931.77001953125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3790.199951171875, 159.4199981689453, 2931.31005859375], 'AtVector': [-3789.280029296875, 159.4499969482422, 2931.7099609375], 'TargetFovy': 50.0, 'IsWaitEnd': False, 'MoveTime': 210, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        Npc_GerudoDesert004.EventTalk({'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_10', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'AS-C07-UMii_Gerudo_BodyS_W_000-A-0', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    }

}

void C07_West() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'PosVector': [-3886.330078125, 158.05999755859375, 2886.070068359375], 'AtVector': [-3887.580078125, 158.02000427246094, 2885.25], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 300, 'PosVector': [-3885.85009765625, 158.05999755859375, 2886.3798828125], 'AtVector': [-3887.10009765625, 158.02000427246094, 2885.56005859375], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        Npc_GerudoDesert004.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_BattleBefore:NewText_10', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'AS-C07-UMii_Gerudo_BodyS_W_000-A-0', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': True})
    }

}

void C11_Gerudo_Queen_wepon_on() {

    fork {
        EventSystemActor[Wait_03].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Determination_00'})
    } {
        Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'IsAllSlot': False, 'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'AS-C11-Npc_Gerudo_Queen_Young-A-0', 'ForceFadeInFrame': -1.0})
        EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 37})
    } {
        EventSystemActor[Wait_02].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    }

}

void C06_Npc_Position() {
    Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3864.64990234375, 156.3000030517578, 2942.14990234375], 'IsWaitEnd': True, 'YAngle': 115.0, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_GerudoDesert004.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    Npc_Gerudo_Queen_Young[Defense].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Npc_Gerudo_Queen_Young[Defense].EventTriggerRequestLookAtTheFront()
    Npc_Gerudo_Queen_Young[Defense].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
}

void NPC_Furimuki_Bunki0() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonN'}) {
        Npc_GerudoDesert004.EventNPCTurnToTarget({'Target': 0, 'WorldPos': [-3800.56005859375, 165.22000122070312, 2879.89990234375], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonE'}) {
        Npc_GerudoDesert004.EventNPCTurnToTarget({'Target': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-3812.030029296875, 157.0500030517578, 2941.3798828125], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DeployCannonW'}) {
        Npc_GerudoDesert004.EventNPCTurnToTarget({'Target': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-3874.530029296875, 157.4600067138672, 2921.0400390625], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } else {
        Npc_GerudoDesert004.EventNPCTurnToTarget({'Target': 0, 'WorldPos': [-3800.56005859375, 165.22000122070312, 2879.89990234375], 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
}

void C08_Enemy_Position_01() {

    call C08_Enemy_West()

}

void C08_Enemy_Position_West_test() {

    fork {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'BattleWait', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    }

}

void C08_Enemy_West() {
    Dm_Enemy_Zombie_Junior_Defense.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 34.0, 'Position': [-3926.972900390625, 149.8802947998047, 2849.81396484375]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 40.722618103027344, 'Position': [-3911.35302734375, 149.23330688476562, 2853.287109375]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 50.0, 'Position': [-3917.342041015625, 148.92160034179688, 2859.425048828125]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventTriggerParticipateEvent()
    Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventTriggerParticipateEvent()
    Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventTriggerParticipateEvent()
    Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventTriggerParticipateEvent()
    Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventTriggerParticipateEvent()
    Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventTriggerParticipateEvent()
}

void C08_Enemy_Position_North_test() {

    fork {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventPlayAS({'IsAllSlot': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'BattleWait', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk'})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk'})
    }

}

void C08_Enemy_North() {
    Dm_Enemy_Zombie_Junior_Defense.EventWarpToTargetPosAndRot({'Position': [-3765.2490234375, 147.2239990234375, 2853.404052734375], 'YAngle': -65.27400207519531, 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventWarpToTargetPosAndRot({'Position': [-3765.743896484375, 147.54119873046875, 2860.922119140625], 'YAngle': -41.20899963378906, 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventWarpToTargetPosAndRot({'Position': [-3755.281005859375, 147.59060668945312, 2857.822021484375], 'YAngle': -50.0, 'IsWaitEnd': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventWarpToTargetPosAndRot({'YAngle': -46.4640007019043, 'IsWaitEnd': False, 'Position': [-3771.39892578125, 147.1367950439453, 2834.448974609375]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -49.16653060913086, 'Position': [-3773.14501953125, 147.3986053466797, 2842.631103515625]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3780.158935546875, 147.25709533691406, 2843.219970703125], 'YAngle': -49.16653060913086})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -27.636789321899414, 'Position': [-3770.825927734375, 147.5334014892578, 2849.85009765625]})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3784.06201171875, 146.89419555664062, 2832.56103515625], 'YAngle': -50.0})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3760.616943359375, 148.72250366210938, 2866.3349609375], 'YAngle': -73.69937896728516})
}

void C08_Enemy_Position_East_test() {

    fork {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventPlayAS({'IsAllSlot': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Wait', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'BattleWait', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C08-Enemy_Zombie_Junior-A-0_Walk', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    }

}

void C08_Enemy_East() {
    Dm_Enemy_Zombie_Junior_Defense.EventWarpToTargetPosAndRot({'Position': [-3737.5048828125, 148.24960327148438, 2972.35302734375], 'YAngle': -155.25399780273438, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3722.580078125, 148.2696075439453, 2964.075927734375], 'YAngle': -120.38939666748047})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3756.279052734375, 148.02369689941406, 2975.208984375], 'YAngle': -136.93389892578125})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventWarpToTargetPosAndRot({'Position': [-3754.35400390625, 148.3905029296875, 2967.926025390625], 'YAngle': -153.88900756835938, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventWarpToTargetPosAndRot({'Position': [-3734.111083984375, 149.4248046875, 2950.447021484375], 'YAngle': -136.12399291992188, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventWarpToTargetPosAndRot({'Position': [-3736.26611328125, 149.1488037109375, 2957.986083984375], 'YAngle': -140.0, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventWarpToTargetPosAndRot({'Position': [-3734.797119140625, 148.843994140625, 2964.469970703125], 'YAngle': -157.13800048828125, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventWarpToTargetPosAndRot({'Position': [-3744.240966796875, 148.76150512695312, 2958.632080078125], 'YAngle': -144.6320037841797, 'IsWaitEnd': True})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventWarpToTargetPosAndRot({'Position': [-3749.950927734375, 148.25570678710938, 2969.117919921875], 'YAngle': -163.66099548339844, 'IsWaitEnd': True})
}

void C08_Enemy_Position_02() {

    call C08_Enemy_Position_West_test()

    EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 195})

    call C08_Enemy_North()


    call C08_Enemy_Position_North_test()

    EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 138})

    call C08_Enemy_East()


    call C08_Enemy_Position_East_test()

}

void C09_Enemy_West_erase() {
    Dm_Enemy_Zombie_Junior_Defense.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_A].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_B].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_E].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_F].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_G].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Enemy_Zombie_Junior_Defense[Enemy_H].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void C06_Cam_Sheikh() {
    EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 1.0, 'IsRumbleController': True})
    EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 16})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 1.0, 'IsRumbleController': True})
    EventSystemActor[Wait_03].EventWait({'IsWaitEnd': True, 'Frames': 13})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 2.0, 'IsRumbleController': True})
}
