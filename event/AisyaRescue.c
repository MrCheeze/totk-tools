-------- EventFlow: AisyaRescue --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventCloseRupeeDisplay']
queries: ['EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerUnequip', 'EventTriggerPlayerClimbOff']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventClosePlacementShopUI']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_oasis001[BeforeRescue]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis012[OutUG]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis001[OutUG]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis001[InUG]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis012[InUG]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis012[Step2_Talk_Main(Actor1)]
entrypoint: Step2_Talk_Main(Actor1)
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_oasis001[Step2_Talk_Main(Actor2)]
entrypoint: Step2_Talk_Main(Actor2)
actions: ['EventPlayAS', 'EventTalk', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_oasis012[Step2_Npc_oasis012_Buy_Main(Actor1)]
entrypoint: Step2_Npc_oasis012_Buy_Main(Actor1)
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_oasis001[Step2_Npc_oasis012_Buy_Main(Actor2)]
entrypoint: Step2_Npc_oasis012_Buy_Main(Actor2)
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: None

void Ready_Npc_oasis012_Talk() {

    call Ready_Npc_oasis012_Talk_Content()


    call Npc_oasis012.CheckTable()

}

void Ready_Npc_oasis012_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis012:near0000', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_oasis012_Buy() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1006, 'ChoiceLabel2': 1001, 'ChoiceLabel3': 1008, 'ChoiceLabel4': 1007, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1006, 'ChoiceLabel2': 1001, 'ChoiceLabel3': 1008, 'ChoiceLabel4': 1007, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0019', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_oasis012_Talk01'})

    call Sub_StepSetting()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

    call DisplayShop.Armor()


    call Npc_oasis012.Sell()


    call Npc_oasis012.CheckTable()

}

void Step1_Npc_oasis001_Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0043', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0042', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis001_Talk01'})

    call Sub_StepSetting()

}

void Step1_Npc_oasis001_Near() {
    Event92:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis001:near0001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_oasis012_Talk() {

    call Npc_oasis012.Talk()

}

void Step1_Npc_oasis012_Near() {

    call Npc_oasis012.Near()

}

void Step1_Npc_oasis012_Buy() {

    call Npc_oasis012.Buy()

}

void NearActorsTalk() {
    Event154:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
        EventSystemActor.EventTransition({'EventName': 'Step2_Talk_OutUG', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    } else {
        EventSystemActor.EventTransition({'EventName': 'Step2_Talk_InUG', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    }
}

void NearActorsNear_Npc_Oasis001() {
    Event53:
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_oasis012:near0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step2_Npc_oasis012_Buy() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Step2_Npc_oasis012_Buy_OutUG'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Step2_Npc_oasis012_Buy_InUG'})
    }
}

void NearActorsNear_Npc_Oasis012() {
    Event54:
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_oasis012:near0002', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step2_Npc_oasis001_Talk() {
    goto Event154
}

void Step2_Npc_oasis001_Near() {
    goto Event53
}

void Step2_Npc_oasis012_Near() {
    goto Event54
}

void Step2_Npc_oasis012_Talk() {
    goto Event154
}

void AisyaRescue_Defeat() {

    call Common.AirStartUP_Player()

    Npc_oasis001[BeforeRescue].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_oasis001[BeforeRescue].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 0, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_oasis001[BeforeRescue].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0044', 'ASName': 'Talk', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event13:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_oasis001', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'BeforeRescue', 'AtVector': [0.20999999344348907, 1.3899999856948853, 2.25], 'PosVector': [0.30000001192092896, 1.8300000429153442, 5.239999771118164], 'MoveTime': 45, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call EntryPoint0()

        Npc_oasis001[BeforeRescue].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0045', 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
        if !Npc_oasis001[BeforeRescue].EventQueryHaveTalked() {
            Npc_oasis001[BeforeRescue].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0047', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_oasis001[BeforeRescue].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0046', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_oasis001[BeforeRescue].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0048', 'IsNotOpenIfSkipedMostRecent': False})

        call EntryPoint1()

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis001_Talk01'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis001_Talk02'})

        call Sub_StepSetting()

    } else
    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        if Player.EventQueryPlayerCheckRideHorse({'Type': 6, 'IsRidingAny': False, 'ActorFileName': ''}) {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_oasis001', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'InstanceName': 'BeforeRescue', 'OffsetBase': 0})
        }
        goto Event13
    } else {
        goto Event13
    }
}

void EntryPoint0() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})

    call Check_RideRaumiGolem()

    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventTriggerPlayerClimbOff()
    }

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_oasis001", sub_name="BeforeRescue")})

    Player.EventPlayerWarpToNearAnchorWithRidableActor({'InstanceName': 'WarpPlayer', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Npc_oasis001[BeforeRescue].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'WarpNPC', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis001[BeforeRescue].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4767.35986328125, 137.5, 2836.110107421875], 'AtVector': [-4769.60009765625, 136.44000244140625, 2831.760009765625], 'TargetFovy': 50.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void EntryPoint1() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AisyaRescue_NpcOn', 'Value': True, 'Index': -1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Npc_oasis001[BeforeRescue].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'WarpNPC2', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})
}

void Ready_Npc_oasis001_Talk() {
    goto Event0
}

void Ready_Npc_oasis001_Near() {
    goto Event92
}

void Sub_StepSetting() {
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_oasis012_Talk01', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NpcOasis001_Talk01'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NpcOasis001_Talk02'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'AisyaRescue', 'StepName': 'Step2', 'IsWaitEnd': True})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'AisyaRescue', 'StepName': 'Step1a', 'IsWaitEnd': True})
            }
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'AisyaRescue', 'StepName': 'Step1', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True})
        }
    }
}

void Ready_Npc_oasis012_Talk_Content() {

    fork {
        Npc_EventStarter.EventClosePlacementShopUI({'IsWaitEnd': False})
    } {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': False})
    }


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0011', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0012', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0019', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_oasis012_Talk01'})

    call Sub_StepSetting()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0013', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_EventStarter")})

        Event37:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event95:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_EventStarter")})

            Event104:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1028', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event95
          case 1:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcOasis012_TalkQ1', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0029', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis012_TalkQ1', 'Value': True, 'Index': -1})
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1002', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event104
          case 2:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcOasis012_TalkQ2', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0028', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0027', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis012_TalkQ2', 'Value': True, 'Index': -1})
            goto Event104
          case 3:
            Event39:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis012_TalkQ1', 'Value': True, 'Index': -1})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk1002', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 1003, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event37
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1001, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0027', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis012_TalkQ2', 'Value': True, 'Index': -1})
        goto Event37
      case 3:
        goto Event39
    }
}

void Step2_Talk_InUG() {

    call Step2_Talk_Main({'Spearker1ActorName': 'Npc_oasis012', 'Spearker2ActorName': 'Npc_oasis001', 'Spearker2InstanceName': 'InUG', 'Spearker1InstanceName': 'InUG', 'Actor2': ActorIdentifier(name="Npc_oasis001", sub_name="InUG"), 'Actor1': ActorIdentifier(name="Npc_oasis012", sub_name="InUG")})

}

void Step2_Talk_OutUG() {

    call Step2_Talk_Main({'Actor1': ActorIdentifier(name="Npc_oasis012", sub_name="OutUG"), 'Spearker1ActorName': 'Npc_oasis012', 'Actor2': ActorIdentifier(name="Npc_oasis001", sub_name="OutUG"), 'Spearker1InstanceName': 'OutUG', 'Spearker2ActorName': 'Npc_oasis001', 'Spearker2InstanceName': 'OutUG'})

}

void Step2_Talk_Main() {

    fork {
        Npc_EventStarter.EventClosePlacementShopUI({'IsWaitEnd': False})
    } {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AisyaRescue_FullLuggage', 'Index': -1}) {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Actor1': 'Actor1', 'Actor2': 'Actor2', 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName'})

        Npc_oasis001[Step2_Talk_Main(Actor2)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_A'}) {
            Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0014', 'IsNotOpenIfSkipedMostRecent': False})
            Event62:

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

            Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0030', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AisyaRescue_AfterRescue', 'Index': -1}) {
                Npc_oasis001[Step2_Talk_Main(Actor2)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1003, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0026', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_oasis001[Step2_Talk_Main(Actor2)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis001:talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
                Npc_oasis001[Step2_Talk_Main(Actor2)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1003, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0020', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_oasis001[Step2_Talk_Main(Actor2)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1002, 'ChoiceLabel2': 1000, 'ChoiceLabel4': 1003, 'ChoiceLabel3': 1003, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0010', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Npc_oasis012.CheckTable()

            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'AisyaRescue', 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
        } else {
            Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0015', 'IsNotOpenIfSkipedMostRecent': False})
            Event146:

            call Npc_oasis012.CheckTable()

        }
    } else {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': 'Actor1', 'Actor2': 'Actor2', 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName'})

        if Npc_oasis012[Step2_Talk_Main(Actor1)].EventQueryIsOnRecentTalkFlag() {
            Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0016', 'IsNotOpenIfSkipedMostRecent': False})
        }

        fork {
            Npc_oasis012[Step2_Talk_Main(Actor1)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_oasis001[Step2_Talk_Main(Actor2)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0008', 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_A'}) {
            goto Event62
        } else {
            Npc_oasis012[Step2_Talk_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0009', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AisyaRescue_FullLuggage', 'Value': True, 'Index': -1})
            goto Event146
        }
    }
}

void Step2_Npc_oasis012_Buy_InUG() {

    call Step2_Npc_oasis012_Buy_Main({'Spearker1ActorName': 'Npc_oasis012', 'Spearker1InstanceName': 'InUG', 'Spearker2ActorName': 'Npc_oasis001', 'Spearker2InstanceName': 'InUG', 'Actor1': ActorIdentifier(name="Npc_oasis012", sub_name="InUG"), 'Actor2': ActorIdentifier(name="Npc_oasis001", sub_name="InUG")})

}

void Step2_Npc_oasis012_Buy_OutUG() {

    call Step2_Npc_oasis012_Buy_Main({'Actor1': ActorIdentifier(name="Npc_oasis012", sub_name="OutUG"), 'Spearker1ActorName': 'Npc_oasis012', 'Actor2': ActorIdentifier(name="Npc_oasis001", sub_name="OutUG"), 'Spearker1InstanceName': 'OutUG', 'Spearker2ActorName': 'Npc_oasis001', 'Spearker2InstanceName': 'OutUG'})

}

void Step2_Npc_oasis012_Buy_Main() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': 'Actor1', 'Actor2': 'Actor2', 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AisyaRescue_FullLuggage', 'Index': -1}) {
        Npc_oasis012[Step2_Npc_oasis012_Buy_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0022', 'IsNotOpenIfSkipedMostRecent': False})
        Event145:

        call Npc_oasis012.CheckTable()

    } else
    if !Npc_oasis001[Step2_Npc_oasis012_Buy_Main(Actor2)].EventQueryIsOnRecentTalkFlag() {
        Event86:
        Npc_oasis012[Step2_Npc_oasis012_Buy_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0021', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event145
    } else
    if !Npc_oasis012[Step2_Npc_oasis012_Buy_Main(Actor1)].EventQueryIsOnRecentTalkFlag() {
        goto Event86
    } else {
        Npc_oasis012[Step2_Npc_oasis012_Buy_Main(Actor1)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:talk0018', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event145
}

void Check_RideRaumiGolem() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 6, 'IsRidingAny': False, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
}
