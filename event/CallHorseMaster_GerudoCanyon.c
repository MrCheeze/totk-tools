-------- EventFlow: CallHorseMaster_GerudoCanyon --------

Actor: Npc_GerudoCanyonHatago001
entrypoint: None()
actions: ['EventTriggerNPCChangePosture', 'EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleMoveToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTalk', 'EventPlayerUnequip', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoCanyonHatago001.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_GerudoCanyonHatago001', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 2})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        Npc_GerudoCanyonHatago001.EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0001', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsNotBecomeSpeaker': True, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventAIScheduleMoveToAnchor({'AnchorType': 22, 'InstanceName': 'UmayadoBell', 'IsWaitEnd': True, 'ASName': '', 'IsTurnToAnchorRot': False, 'DesiredGear': 1, 'ActionType': 0, 'IsAlignAnchorPos': True, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_GerudoCanyonHatago001.EventTalk({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call HorseInn_RewardItemPresent.PointGift_For_You({'Npc_EventStarter': ActorIdentifier(name="Npc_GerudoCanyonHatago001")})

        Npc_GerudoCanyonHatago001.EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': False})
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Bell0004', 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': False})
    }
}
