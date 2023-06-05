-------- EventFlow: Npc_OasisStep_A --------

Actor: Npc_OasisStep_A
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventTriggerSetRecentTalkFlag', 'EventClosePlacementShopUI']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMessageDialog', 'EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventWait', 'EventPlayerHorseGetOff', 'EventPlayerOffSurfaceVelocityFloatWater', 'EventPlayerWait', 'EventTriggerSetExtraOrderInput', 'EventPlayerStopInAir', 'EventPlayerOffStopMode', 'EventPlayerOnSurfaceVelocityFloatWater', 'EventPlayerClimbOff', 'EventTriggerPlayerGetOff']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis036
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis036[Defense]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis009[NoScra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis023[NoScra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[ScraClearGerudo]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[ScraClearMini]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis010[NoScra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[NoScra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis024[Scra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis010[Scra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis023[Scra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis009[Scra]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016[OutUG]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerUnshowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_StoneBall_A[AncientBall_gerudo]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_oasis036[BadEquipment_oasisgatekeeper(Self)]
entrypoint: BadEquipment_oasisgatekeeper(Self)
actions: ['EventNPCTurnToTarget', 'EventPlayAS', 'EventWait', 'EventTalk']
queries: []
params: None

Actor: Npc_oasis036[Naked_oasis036(Self)]
entrypoint: Naked_oasis036(Self)
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_oasis024[BadEquipment1_Main(Self)]
entrypoint: BadEquipment1_Main(Self)
actions: []
queries: []
params: None

Actor: Npc_oasis010[BadEquipment1_Main(Self2)]
entrypoint: BadEquipment1_Main(Self2)
actions: ['EventNPCTurnToTarget', 'EventPlayAS']
queries: []
params: None

Actor: Npc_oasis024[Naked1_Main(Self)]
entrypoint: Naked1_Main(Self)
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_oasis023[Naked2_Main(Self)]
entrypoint: Naked2_Main(Self)
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_oasis009[Naked3_Main(Self)]
entrypoint: Naked3_Main(Self)
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_oasis036[InitTalkNoTurnOnEvent_NpcOasisStepA(Self)]
entrypoint: InitTalkNoTurnOnEvent_NpcOasisStepA(Self)
actions: ['EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Event14:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy'}) {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0007', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_OasisStep_A.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoUGPrison_BadBoy_Yiga'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoUGPrison_BadBoy_Naked'})
    } else
    if !Npc_OasisStep_A.EventQueryIsOnRecentTalkFlag() {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0001', 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0000', 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0002', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void rouya() {

    call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_OasisStep_A"), 'Arg_Turn': 4})

    Player.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3884.43994140625, 141.55999755859375, 2934.5400390625], 'AtVector': [-3888.590087890625, 140.75, 2937.199951171875], 'TargetFovy': 40.0, 'MoveTime': 15, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_OasisStep_A.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_OasisStep_A', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_Yiga'}) {
        Event85:
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event116:
            Npc_OasisStep_A.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckHead': False, 'CheckUpper': True, 'CheckSeries': 'Naked'}) {
            Event60:
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event116
        } else
        Event19:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_ReleaseDoor_1stTalk'}) {
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0006', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event27:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoUGPrison_BadBoy_Yiga'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoUGPrison_BadBoy_Naked'})
            GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

            fork {
                Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'OutPrizon_PlayerWarp', 'UseDemoWait': True})
                Player.EventPlayerUnequip({'IsWaitEnd': True})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3899.530029296875, 139.8000030517578, 2940.6201171875], 'AtVector': [-3895.25, 139.8000030517578, 2937.5], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

            fork {
                Npc_OasisStep_A.EventAIScheduleWarpToAnchor({'ActionType': 1, 'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                Npc_OasisStep_A.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
                Player.EventTriggerPlayerRequestLookAtTheFrontLock()
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            } {
                SoundSystemActor.EventStartSound({'IsWaitEnd': True, 'TimeoutFrame': 0, 'SLinkKey': 'Dm_PrisonDoorUnlocked'})
            }

            GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        } else {
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0005', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GerudoUGPrison_BadBoy_ReleaseDoor_1stTalk', 'Index': -1})
            goto Event27
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_Naked'}) {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckHead': False, 'CheckUpper': True, 'CheckSeries': 'Naked'}) {
            goto Event60
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
            Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0021', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event116
        } else
        goto Event19
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy'}) {
        goto Event85
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_GoodBoy_ReleaseDoor_1stTalk'}) {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0004', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event27
    } else {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0003', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoUGPrison_GoodBoy_ReleaseDoor_1stTalk', 'Value': True, 'Index': -1})
        goto Event27
    }
}

void InPrizon() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})

    call PlayerSittingCheck()


    fork {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'InPrizon_PlayerWarp', 'UseDemoWait': True})
        Player.EventPlayerOffStopMode()
        Player.EventPlayerOnSurfaceVelocityFloatWater()
        Player.EventPlayerWait({'IsWaitEnd': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3884.6298828125, 141.35000610351562, 2934.989990234375], 'AtVector': [-3887.3701171875, 140.6300048828125, 2935.9599609375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TakeOut_BigStoneBall'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Resporn_BigStoneBall', 'Index': -1, 'Value': True})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_Playing'}) {
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        Npc_OasisStep_A.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_PrisonDoorLocked', 'IsWaitEnd': True, 'TimeoutFrame': 0})
    }

    GameSystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Gerudo_InPrizonFirst', 'Index': -1}) {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0009', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event283:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_Playing'}) {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0049', 'IsNotOpenIfSkipedMostRecent': False})

            call FindSunaNui.FindSunaNuiGameCancel()

            Event38:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoUGPrison_BadBoy'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_MultiEventStopper', 'Value': False})
            TwnObj_StoneBall_A[AncientBall_gerudo].EventTriggerErasePauseMask()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_OasisStep_A.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            goto Event38
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event40:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Gerudo_InPrizonFirst', 'Index': -1, 'Value': True})
        goto Event283
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckHead': False, 'CheckLower': False, 'CheckSeries': 'Naked'}) {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_OasisStep_A.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0008', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event40
}

void BadEquipment1() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeNone'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment1_NoScra'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeFlameThrower'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment1_Scra'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeRuby'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment1_ScraClearMini'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment1_ScraClearGerudo'})
    }
}

void BadEquipment3() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_WeaponAttachStep_Exp'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment3_Scra'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment3_NoScra'})
    }
}

void BadEquipment2() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_WeaponAttachStep_Exp'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment2_Scra'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'BadEquipment2_NoScra'})
    }
}

void Naked1() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeNone'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked1_NoScra'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeFlameThrower'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked1_Scra'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_Oasis024_ChangeRuby'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked1_ScraClearMini'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked1_ScraClearGerudo'})
    }
}

void Naked3() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_WeaponAttachStep_Exp'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked3_Scra'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked3_NoScra'})
    }
}

void Naked2() {

    call Common.AirStartUP_Player()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_WeaponAttachStep_Exp'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked2_Scra'})
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Naked2_NoScra'})
    }
}

void BadEquipment4() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis036")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'TurnType': 3, 'Self': ActorIdentifier(name="Npc_oasis036")})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis036")})

}

void Naked4() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis036")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': ActorIdentifier(name="Npc_oasis036"), 'TurnType': 3})

    }

    call Naked_oasis036({'Self': ActorIdentifier(name="Npc_oasis036")})

}

void BadEquipment4_2() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis036", sub_name="Defense")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'TurnType': 3, 'Self': ActorIdentifier(name="Npc_oasis036", sub_name="Defense")})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis036", sub_name="Defense")})

}

void BadEquipment_oasisgatekeeper() {

    fork {
        Npc_oasis036[BadEquipment_oasisgatekeeper(Self)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_oasis036[BadEquipment_oasisgatekeeper(Self)].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
        Npc_oasis036[BadEquipment_oasisgatekeeper(Self)].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_oasis036[BadEquipment_oasisgatekeeper(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'GuardWait', 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0010', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 1, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkSurprise', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        }
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call InPrizon()

}

void Naked_oasis036() {
    Npc_oasis036[Naked_oasis036(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0020', 'NotPlayLipSyncAnim': False, 'ASName': '', 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis036[Naked_oasis036(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0019', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_oasis036[Naked_oasis036(Self)].EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'AnchorType': 4, 'ActionType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis036[Naked_oasis036(Self)].EventTriggerRequestLookAtTheFront()

    call NakedPlayerWarp()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3863.550048828125, 141.49000549316406, 2942.31005859375], 'AtVector': [-3866.679931640625, 140.8699951171875, 2945.199951171875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void PlayerSittingCheck() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
}

void BadEquipment1_Main() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': 'Self'})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'TurnType': 3, 'Self': 'Self'})

    }
    Npc_oasis010[BadEquipment1_Main(Self2)].EventNPCTurnToTarget({'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_oasis010[BadEquipment1_Main(Self2)].EventPlayAS({'ASName': 'GuardWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    call BadEquipment_oasisgatekeeper({'Self': 'Self'})

}

void BadEquipment1_ScraClearGerudo() {

    call BadEquipment1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearGerudo"), 'Self2': ActorIdentifier(name="Npc_oasis010", sub_name="NoScra")})

}

void BadEquipment1_ScraClearMini() {

    call BadEquipment1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearMini"), 'Self2': ActorIdentifier(name="Npc_oasis010", sub_name="NoScra")})

}

void Naked1_Main() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': 'Self'})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': 'Self', 'TurnType': 3})

    }
    Npc_oasis024[Naked1_Main(Self)].EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0020', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 6, 7]:
        Npc_oasis024[Naked1_Main(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0017', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event171:
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_oasis024[Naked1_Main(Self)].EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_oasis024[Naked1_Main(Self)].EventTriggerRequestLookAtTheFront()

        call NakedPlayerWarp()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3778.0, 150.5800018310547, 2856.739990234375], 'AtVector': [-3781.75, 150.5800018310547, 2860.489990234375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case [1, 2, 3, 4, 5]:
        Npc_oasis024[Naked1_Main(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0016', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event171
    }
}

void Naked1_ScraClearMini() {

    call Naked1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearMini")})

}

void Naked1_ScraClearGerudo() {

    call Naked1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="ScraClearGerudo")})

}

void BadEquipment1_Scra() {

    call BadEquipment1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="Scra"), 'Self2': ActorIdentifier(name="Npc_oasis010", sub_name="Scra")})

}

void BadEquipment1_NoScra() {

    call BadEquipment1_Main({'Self2': ActorIdentifier(name="Npc_oasis010", sub_name="NoScra"), 'Self': ActorIdentifier(name="Npc_oasis024", sub_name="NoScra")})

}

void BadEquipment2_NoScra() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_oasis023", sub_name="NoScra")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="NoScra"), 'TurnType': 3})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="NoScra")})

}

void BadEquipment2_Scra() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_oasis023", sub_name="Scra")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="Scra"), 'TurnType': 3})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="Scra")})

}

void BadEquipment3_NoScra() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis009", sub_name="NoScra")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="NoScra"), 'TurnType': 3})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="NoScra")})

}

void BadEquipment3_Scra() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis009", sub_name="Scra")})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="Scra"), 'TurnType': 3})

    }

    call BadEquipment_oasisgatekeeper({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="Scra")})

}

void Naked1_Scra() {

    call Naked1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="Scra")})

}

void Naked1_NoScra() {

    call Naked1_Main({'Self': ActorIdentifier(name="Npc_oasis024", sub_name="NoScra")})

}

void Naked2_Main() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': 'Self'})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': 'Self', 'TurnType': 3})

    }
    Npc_oasis023[Naked2_Main(Self)].EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0020', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis023[Naked2_Main(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0018', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_oasis023[Naked2_Main(Self)].EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis023[Naked2_Main(Self)].EventTriggerRequestLookAtTheFront()

    call NakedPlayerWarp()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3744.530029296875, 150.22999572753906, 2959.800048828125], 'AtVector': [-3748.22998046875, 150.22999572753906, 2956.010009765625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Naked3_Main() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': 'Self'})

    } else {

        call InitTalkNoTurnOnEvent_NpcOasisStepA({'Self': 'Self', 'TurnType': 3})

    }
    Npc_oasis009[Naked3_Main(Self)].EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0020', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis009[Naked3_Main(Self)].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0019', 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_oasis009[Naked3_Main(Self)].EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis009[Naked3_Main(Self)].EventTriggerRequestLookAtTheFront()

    call NakedPlayerWarp()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3927.72998046875, 150.61000061035156, 2868.989990234375], 'AtVector': [-3924.0, 150.61000061035156, 2872.75], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Naked2_NoScra() {

    call Naked2_Main({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="NoScra")})

}

void Naked2_Scra() {

    call Naked2_Main({'Self': ActorIdentifier(name="Npc_oasis023", sub_name="Scra")})

}

void Naked3_NoScra() {

    call Naked3_Main({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="NoScra")})

}

void Naked3_Scra() {

    call Naked3_Main({'Self': ActorIdentifier(name="Npc_oasis009", sub_name="Scra")})

}

void Talk_Door() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_OasisStep_A"), 'Arg_Turn': 2})

    goto Event14
}

void InitTalkNoTurnOnEvent_NpcOasisStepA() {

    call InitTalk.InitTalkNoTurnOnEvent({'Self': 'Self'})

    if !Npc_oasis036[InitTalkNoTurnOnEvent_NpcOasisStepA(Self)].EventQueryNeedEquipWeapon() {
        Npc_oasis036[InitTalkNoTurnOnEvent_NpcOasisStepA(Self)].EventUnequipWeapon({'IsWaitEnd': True})
    }
    if !Npc_oasis036[InitTalkNoTurnOnEvent_NpcOasisStepA(Self)].EventQueryHasControllerSet() {
        Npc_oasis036[InitTalkNoTurnOnEvent_NpcOasisStepA(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'TurnType'})
    }
}

void NakedPlayerWarp() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        if Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventTriggerPlayerGetOff()
        }
        Event133:
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'WarpNaked', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event133
    }
}

void BadEquipment() {
    TwnObj_StoneBall_A[AncientBall_gerudo].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_MultiEventStopper', 'Value': True})
    Npc_OasisStep_A.EventClosePlacementShopUI({'IsWaitEnd': False})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_Yiga', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoUGPrison_BadBoy_Naked'})
    Player.EventPlayerOffSurfaceVelocityFloatWater()
    if !Player.EventQueryCheckPlayerState({'State': 4}) {
        if !Player.EventQueryCheckPlayerState({'State': 17}) {
            if !Player.EventQueryCheckPlayerState({'State': 3}) {
                if !Player.EventQueryCheckPlayerState({'State': 12})
                && !Player.EventQueryCheckPlayerState({'State': 8})
                && !Player.EventQueryCheckPlayerState({'State': 6}) {
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASCommand': 'LookAroundAttention', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                }
                Event107:
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
                    Npc_OasisStep_A.EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0010', 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': True, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_Yiga', 'Value': True})
                    Event106:
                    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                    call InPrizon()

                } else
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True}) {
                    Npc_OasisStep_A.EventTalk({'EndDialogOption': 1, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:talk0013', 'ASName': 'Wait', 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': True, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy_Naked', 'Value': True})
                    goto Event106
                }
            } else {
                Player.EventPlayerWait({'IsWaitEnd': True})
                goto Event107
            }
        } else {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
            goto Event107
        }
    } else {
        Player.EventTriggerSetExtraOrderInput({'ExtraOrder': 2})
        goto Event107
    }
}
