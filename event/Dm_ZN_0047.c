-------- EventFlow: Dm_ZN_0047 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerWait', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Zonau_RaumiGolem[NpcRaumiGolem]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerAIScheduleSelectSchedule', 'EventTalk', 'EventTriggerSetRecentTalkFlag', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Dm_ZN_0047() {

    call Ready()


    call C01-0()


    call C02-0()


    call C05-0()

    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveMasterSword', 'Index': -1}) {
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk03', 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_IsCompleteHaveMasterSword', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
            Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk07', 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk04', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'IsWaitEnd': False, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Zonau_RaumiGolem', 'Actor1InstanceName': 'NpcRaumiGolem', 'PosVector': [0.0, 2.950000047683716, 6.670000076293945], 'AtVector': [0.0, 3.690000057220459, 3.4100000858306885], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        Event27:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 1, 'Length': 2})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'ClearedDungeon', 'IsWaitEnd': True, 'UseDemoWait': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        }

        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTriggerAIScheduleSelectSchedule()
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 1, 'Length': 2})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk02', 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk01', 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }

    fork {
        EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk07', 'IsAnonymous': False, 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk04', 'EndDialogOption': 3, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'IsWaitEnd': False, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Zonau_RaumiGolem', 'Actor1InstanceName': 'NpcRaumiGolem', 'PosVector': [0.0, 2.950000047683716, 6.670000076293945], 'AtVector': [0.0, 3.690000057220459, 3.4100000858306885], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    goto Event27
}

void Ready() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_RaumiGolem_Replacement', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_ZN_0031_Pos', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoLookUp', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventNPCTurnToTarget({'Target': 2, 'LookingControllerName': 'Head', 'LookIKParameterVariationName': 'HeadSlight', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
}

void C01-0() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZN_0047', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.5, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'PosVector': [2.5299999713897705, 0.4699999988079071, -2.740000009536743], 'AtVector': [-1.5499999523162842, 2.819999933242798, 4.400000095367432], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk00', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C02-0() {
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk06', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zonau_RaumiGolem[NpcRaumiGolem].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0047:Talk10', 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C05-0() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.7300000190734863, 3.0, 2.440000057220459], 'AtVector': [-0.23000000417232513, 0.47999998927116394, -0.8100000023841858], 'TargetFovy': 28.200000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}
