-------- EventFlow: AssassinSecretBase --------

Actor: Enemy_Assassin_Junior_GateKeeper[AzitoJunior01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_GateKeeper[AzitoJunior02]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_GateKeeper[AzitoJunior03]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior_GateKeeper[AzitoJunior04]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle02]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_Azito003
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventEventFadeOut', 'EventWaitForActorPresence', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor', 'EventWarpSoulFollowersFormationPos']
queries: ['EventQueryRandomChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventPlayerUnequip', 'EventTriggerPlayerGetOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_Azito002
entrypoint: None()
actions: ['EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_Azito001
entrypoint: None()
actions: ['EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_AssassinDoor_A_03
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Junior_Azito006
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Assassin_Middle_Azito003[ChatRandom(ActorName)]
entrypoint: ChatRandom(ActorName)
actions: ['EventTalk']
queries: []
params: None

void DoorOK() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    FldObj_AssassinDoor_A_03.EventTriggerParticipateEvent()
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0001', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Close', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    Npc_Assassin_Middle_Azito003.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_EnemyAppear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SecretBase_EnemyAppear2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_Door'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SecretBase_Secure'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void DoorNG() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    FldObj_AssassinDoor_A_03.EventTriggerParticipateEvent()
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call StopBgm_NormalFade()

    Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0002', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Whistle()

    Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0007', 'IsNotOpenIfSkipedMostRecent': False})
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Close', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Event184:
    Npc_Assassin_Middle_Azito003.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Event69:
    GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoAzito_Battle2', 'Index': -1}) {

        call SecretBase_MiniGame.GameCancel()

    }

    call EnemyAppearTrigger()

    Player.EventTriggerPlayerGetOff()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_GerudoAzitoEntrance', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVector': [-0.5099999904632568, 2.7200000286102295, -4.96999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.6100000143051147, 2.9000000953674316, -5.949999809265137], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'InstanceName': 'AzitoJunior01', 'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Middle_Gatekeeper', 'InstanceName': 'AzitoMiddle01', 'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle01].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'InstanceName': 'AzitoJunior02', 'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior02].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior02].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})

    fork {
        Enemy_Assassin_Junior_GateKeeper[AzitoJunior01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle01].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Junior_GateKeeper[AzitoJunior02].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'AssassinSecretBase_MultiEventStopper', 'Value': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomNG() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call StopBgm_WithWhistle()


    fork {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'LookAroundAttention', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        }
    } {

        call ChatRandom({'ActorName': ActorIdentifier(name="Npc_Assassin_Middle_Azito003")})

    }

    goto Event184
}

void RoomClose() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Middle_Azito003.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void DoorOK2() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    FldObj_AssassinDoor_A_03.EventTriggerParticipateEvent()
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    Npc_Assassin_Junior_Azito006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0001', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Close', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    Npc_Assassin_Junior_Azito006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_EnemyAppear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SecretBase_EnemyAppear2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_Door'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_Door2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SecretBase_Secure'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomClose2() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    Npc_Assassin_Junior_Azito006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Assassin_Junior_Azito006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void DoorNG2() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    FldObj_AssassinDoor_A_03.EventTriggerParticipateEvent()
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call StopBgm_NormalFade()

    Npc_Assassin_Junior_Azito006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0002', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Whistle()

    Npc_Assassin_Junior_Azito006.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0007', 'IsNotOpenIfSkipedMostRecent': False})
    FldObj_AssassinDoor_A_03.EventPlayAS({'ASName': 'Close', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Assassin_Junior_Azito006.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Event43:
    GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoAzito_Battle2', 'Index': -1}) {

        call SecretBase_MiniGame.GameCancel()

    }

    call EnemyAppearTrigger2()

    Player.EventTriggerPlayerGetOff()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'PlayerPos_GerudoAzitoEntrance2', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVector': [-0.5099999904632568, 2.7200000286102295, -4.96999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.6100000143051147, 2.9000000953674316, -5.949999809265137], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'IsWaitEnd': True, 'InstanceName': 'AzitoJunior03'})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior03].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior03].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Middle_Gatekeeper', 'IsWaitEnd': True, 'InstanceName': 'AzitoMiddle02'})
    Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle02].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle02].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Assassin_Junior_GateKeeper', 'IsWaitEnd': True, 'InstanceName': 'AzitoJunior04'})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior04].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Assassin_Junior_GateKeeper[AzitoJunior04].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})

    fork {
        Enemy_Assassin_Junior_GateKeeper[AzitoJunior03].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle_Gatekeeper[AzitoMiddle02].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Junior_GateKeeper[AzitoJunior04].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameSystemActor.EventTriggerRequestAutoSave()
}

void RoomNG2() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call StopBgm_WithWhistle()


    fork {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'LookAroundAttention', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        }
    } {

        call ChatRandom({'ActorName': ActorIdentifier(name="Npc_Assassin_Middle_Azito002")})

    }

    Npc_Assassin_Middle_Azito002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    goto Event43
}

void RoomNG3() {

    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'AssassinSecretBase_MultiEventStopper'})
    Player.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call StopBgm_WithWhistle()


    fork {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'LookAroundAttention', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        }
    } {

        call ChatRandom({'ActorName': ActorIdentifier(name="Npc_Assassin_Middle_Azito001")})

    }

    Npc_Assassin_Middle_Azito001.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    goto Event69
}

void EnemyAppearTrigger() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_EnemyAppear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Door', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Door2', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Secure', 'Value': True})
}

void EnemyAppearTrigger2() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SecretBase_EnemyAppear2'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Door', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Door2', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SecretBase_Secure', 'Value': True})
}

void ChatRandom() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_Assassin_Middle_Azito003[ChatRandom(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_Assassin_Middle_Azito003[ChatRandom(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_Assassin_Middle_Azito003[ChatRandom(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void StopBgm_WithWhistle() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AssassinWhistle', 'IsIgnoreDucking': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'WithPlayableEvent': True, 'IsForceFadeTime': False, 'FadeType': 0})
}

void StopBgm_NormalFade() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'WithPlayableEvent': True, 'IsForceFadeTime': False, 'FadeType': 1})
}

void Whistle() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AssassinWhistle', 'IsIgnoreDucking': False})
}

void StopBgm_ShortFade() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'WithPlayableEvent': True, 'IsForceFadeTime': False, 'FadeType': 2})
}

void Middle03TalkNG() {

    call StopBgm_NormalFade()

    Player.EventTriggerParticipateEvent()

    fork {
        Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
    } {
        Npc_Assassin_Middle_Azito003.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Assassin_Middle_Azito003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/AssassinSecretBase:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event184
}
