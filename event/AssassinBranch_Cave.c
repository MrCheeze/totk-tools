-------- EventFlow: AssassinBranch_Cave --------

Actor: Enemy_Assassin_Junior_GateKeeper[CaveJunior01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior_003
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_003
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventWaitForActorPresence', 'EventTriggerRequestAutoSave', 'EventWarpSoulFollowersFormationPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

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

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_HyruleDepthHatago006
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void RoomNG() {

    call Common.AirStartUP_Player()

    Npc_Assassin_Junior_003.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_003.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    fork {
        Npc_Assassin_Junior_003.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Assassin_Middle_003.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {

        call AssassinSecretBase.StopBgm_ShortFade()

        Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_103', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Assassin_Middle_003', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-650.25, 253.64999389648438, -2107.659912109375], 'AtVector': [-650.5900268554688, 253.3800048828125, -2109.949951171875]})

    fork {
        Npc_Assassin_Junior_003.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Surprised'})
        Npc_Assassin_Junior_003.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CaveBase_Invade', 'Index': -1}) {
            Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_102', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_101', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_Assassin_Junior_003.EventTriggerEmitXLink({'SLinkKey': 'Dm_Assassin_Whistle_Short_Delay', 'ELinkKey': ''})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
        }
    }

    Npc_Assassin_Middle_003.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CaveBase_EnemyAppear'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'IsWaitEnd': True, 'InstanceName': 'CaveJunior01'})
    Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Middle_Gatekeeper', 'IsWaitEnd': True, 'InstanceName': 'CaveMiddle01'})
    Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})

    fork {
        Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomNG2() {

    call Common.AirStartUP_Player()

    Npc_Assassin_Junior_003.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_003.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    fork {

        call AssassinSecretBase.StopBgm_ShortFade()

        Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_103', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'LookAroundAttention', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        }
    }

    Event77:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CaveBase_Invade', 'Index': -1}) {
        Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_102', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_101', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_Assassin_Junior_003.EventTriggerEmitXLink({'SLinkKey': 'Dm_Assassin_Whistle_Short_Delay', 'ELinkKey': ''})
    Npc_Assassin_Middle_003.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CaveBase_EnemyAppear'})
    Player.EventTriggerPlayerGetOff()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'PlayerPosInBattleCave', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 3.2899999618530273, -4.150000095367432], 'AtVector': [0.0, 3.009999990463257, -3.190000057220459], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'IsWaitEnd': True, 'InstanceName': 'CaveJunior01'})
    Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Middle_Gatekeeper', 'IsWaitEnd': True, 'InstanceName': 'CaveMiddle01'})
    Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})

    fork {
        Enemy_Assassin_Junior_GateKeeper[CaveJunior01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle_Gatekeeper[CaveMiddle01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomNG2withNPC() {

    call Common.AirStartUP_Player()

    Npc_Assassin_Junior_003.EventTriggerParticipateEvent()
    Npc_Assassin_Middle_003.EventTriggerParticipateEvent()
    Npc_HyruleDepthHatago006.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    fork {

        call AssassinSecretBase.StopBgm_ShortFade()

        Npc_Assassin_Middle_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Assassin_Middle_003:Talk_103', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'LookAroundAttention', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        }
    } {
        Npc_HyruleDepthHatago006.EventPlayAS({'ASName': 'Crouch', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    goto Event77
}
