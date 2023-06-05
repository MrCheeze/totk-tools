-------- EventFlow: Dm_ZO_0018 --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerEmitXLink', 'EventSageWarpToNearAnchor', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerTargetClearSlotInfo', 'EventTriggerParticipateEvent', 'EventUnequipWeapon']
queries: ['EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0017/Dm_ZO_0017_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0017_Npc_Zora_Prince_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerDisableAutoSavePausing', 'EventEventFadeIn', 'EventEventFadeOut']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerTalk', 'EventPlayerWarpToNearAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void BeforeZoraSkyDungeon() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_GoToWaterFallPhase', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode', 'Value': False, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_BeforeDungeonTalked', 'Index': -1}) {

        fork {
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': '0018_pos01', 'UseDemoWait': True})
            Player.EventPlayerUnequip({'IsWaitEnd': False})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        } {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [3414.300048828125, 1665.969970703125, -624.1199951171875], 'AtVector': [3409.780029296875, 1666.780029296875, -627.5800170898438], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerBecomeSpeaker()
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerTargetClearSlotInfo({'Target': 0})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
            if !Npc_Zora_Prince_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
            }
        }

        Event8:
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_BeforeDungeonTalked'}) {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 180, 'MessageId': 'EventFlowMsg/Dm_ZO_0018:Dm_ZO_0018_08', 'ChoiceLabel2': 181, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0018:Dm_ZO_0018_04', 'ChoiceLabel1': 180, 'ChoiceLabel2': 181, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfZora_BeforeDungeonTalked'})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 180, 'ChoiceLabel2': 181, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0018:Dm_ZO_0018_06', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'FaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3409.363037109375, 1666.6319580078125, -630.87841796875], 'IsWaitEnd': True, 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

            fork {
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C07-Npc_Zora_Prince-A-0', 'ForceFadeInFrame': -1.0})
            } {

                call C07_Npc_Zora_Prince_EF()

            }

            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'InstanceName': 'SageShidoDungeonStartPos', 'ActorName': 'AnchorAction5', 'IsWaitEnd': True})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'GoToDungeonStart', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfZora_BeforeDungeonTalked'})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 180, 'ChoiceLabel2': 181, 'MessageId': 'EventFlowMsg/Dm_ZO_0018:Dm_ZO_0018_07', 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'FaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3409.363037109375, 1666.6319580078125, -630.87841796875], 'IsWaitEnd': True, 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            GameSystemActor.EventTriggerDisableAutoSavePausing()
            GameSystemActor.EventTriggerRequestAutoSave()
        }
    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        fork {

            call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': '0018_pos01', 'UseDemoWait': True})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        } {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        } {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerBecomeSpeaker()
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerTargetClearSlotInfo({'Target': 0})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3410.02392578125, 1664.9759521484375, -628.6599731445312], 'YAngle': 200.0})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Act_LookUp_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            if !Npc_Zora_Prince_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
            }
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [-1.0199999809265137, 1.559999942779541, -1.3899999856948853], 'AtVector': [0.0, 10.0, 4.0], 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [3414.300048828125, 1665.969970703125, -624.1199951171875], 'AtVector': [3409.780029296875, 1666.780029296875, -627.5800170898438], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event8
    }
}

void C07_Npc_Zora_Prince_EF() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0017_Jump', 'SLinkKey': 'Dm_ZO_0018_Jump'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0017_WaterIn', 'SLinkKey': 'Dm_ZO_0018_WaterIn'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0017_WaterFallUp', 'SLinkKey': 'Dm_ZO_0018_WaterFallUp'})
}
