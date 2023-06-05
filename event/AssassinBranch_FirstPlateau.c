-------- EventFlow: AssassinBranch_FirstPlateau --------

Actor: Enemy_Assassin_Middle_Gatekeeper[FirstPlateauMiddle01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_GateKeeper[FirstPlateauJunior01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'EventMemberCreateMethod': 4, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior_002
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventDisableRecentTalkFlag', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_002
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventWaitForActorPresence', 'EventTriggerRequestAutoSave', 'EventWarpSoulFollowersFormationPos']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventTriggerParticipateEvent', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_041
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Peek() {
    EventCamera.EventTriggerCameraSavePoint()
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    Npc_Road_041.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Actor1': ActorIdentifier(name="Npc_Assassin_Junior_002"), 'Actor2': ActorIdentifier(name="Npc_Assassin_Middle_002"), 'Spearker1ActorName': 'Npc_Assassin_Junior_002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Assassin_Middle_002', 'Spearker2InstanceName': ''})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DesignateMatrixActor', 'Actor2ActorName': 'DesignateMatrixActor', 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor2InstanceName': 'PeekCameraTarget', 'Actor1InstanceName': 'PeekCameraPos', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'MoveTime': 20, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FirstPlateauBase_Invade'}) {
        if GameSystemActor.EventQueryRandomChoice2() {
            Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_209', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_205', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Junior_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_206', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_207', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event23:
        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_202', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Junior_002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        Npc_Assassin_Middle_002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})

        call OnEventFinish()

    } else {
        Npc_Assassin_Junior_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_200', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_201', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event23
    }
}

void DoorOK() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    Npc_Assassin_Junior_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Assassin_Junior_002:Talk_100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Assassin_Junior_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Npc_Assassin_Junior_002:Talk_101', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkSurprise', 'ClothWarpMode': 0})
    }

    Npc_Assassin_Junior_002.EventDisableRecentTalkFlag({'IsWaitEnd': True})

    call OnEventFinish()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void DoorNG() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})

    call AssassinSecretBase.StopBgm_NormalFade()

    Npc_Assassin_Junior_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Assassin_Junior_002:Talk_200', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Junior_002.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Assassin_Whistle_Short_Delay'})
    Npc_Assassin_Junior_002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Event21:
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FirstPlateauBase_EnemyAppear'})
    Player.EventTriggerPlayerGetOff()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'PlayerPosInBattleFirstPlateau', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 3.2899999618530273, -4.150000095367432], 'AtVector': [0.0, 3.009999990463257, -3.190000057220459], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'IsWaitEnd': True, 'InstanceName': 'FirstPlateauJunior01'})
    Enemy_Assassin_Junior_GateKeeper[FirstPlateauJunior01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[FirstPlateauJunior01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Middle_Gatekeeper', 'IsWaitEnd': True, 'InstanceName': 'FirstPlateauMiddle01'})
    Enemy_Assassin_Middle_Gatekeeper[FirstPlateauMiddle01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[FirstPlateauMiddle01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})

    fork {
        Enemy_Assassin_Junior_GateKeeper[FirstPlateauJunior01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle_Gatekeeper[FirstPlateauMiddle01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomNG() {

    call Common.AirStartUP_Player()

    Npc_Assassin_Junior_002.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_002.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    fork {
        Npc_Assassin_Junior_002.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Assassin_Middle_002.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        Npc_Assassin_Junior_002.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Surprised'})
        Npc_Assassin_Junior_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {

        call AssassinSecretBase.StopBgm_ShortFade()

        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_100', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Junior_002.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Assassin_Whistle_Short_Delay'})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
        }
    }

    Event89:
    Npc_Assassin_Middle_002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    goto Event21
}

void OnEventFinish() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
}

void RoomNGwithNPC() {

    call Common.AirStartUP_Player()

    Npc_Assassin_Junior_002.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_002.EventTriggerParticipateEvent()
    Npc_Road_041.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    fork {
        Npc_Assassin_Junior_002.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Assassin_Middle_002.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        Npc_Assassin_Junior_002.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Surprised'})
        Npc_Assassin_Junior_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {

        call AssassinSecretBase.StopBgm_ShortFade()

        Npc_Assassin_Middle_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_002:Talk_100', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Assassin_Junior_002.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Assassin_Whistle_Short_Delay'})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
        }
    } {
        Npc_Road_041.EventPlayAS({'ASName': 'Crouch', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    goto Event89
}
