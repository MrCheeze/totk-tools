-------- EventFlow: Orchestra04 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryOwningObjectPlayerInterference', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_H_Road
entrypoint: None()
actions: ['EventFollowToTargetActor', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTalk', 'EventCancelFollowToTargetActor', 'EventTriggerAIScheduleOverWriteActionType', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: ['EventQueryIsFollowToTargetActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventWait', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeIn', 'EventEventCircleWipeFadeOutSecond', 'EventTraverseAroundAndWaitCreateActor', 'EventRequestSoulSageLightOrb', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerHorseGetOff', 'EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerTurnAndLookNow', 'EventPlayerTalk', 'EventPlayerClimbOff', 'EventPlayerUnequip']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_CaravanWagon_A_06[Orchestra04]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: AsbObj_CaravanWagon_A_06[Orchestra04_02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

void Ready_Npc_Orchestra_M_H_Road_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy2_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0001', 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0013', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0014', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0015', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call Rain()

        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0016', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_TalkAboutOrchestra'})
        Event129:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0006_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event151:
        Npc_Orchestra_M_H_Road.EventTriggerAIScheduleOverWriteActionType({'ActionType': 0, 'ASName': 'Wait'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Carry', 'ChallengeName': 'Orchestra04', 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_WagonOwner'})
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0001', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0002_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call Rain()

            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event129
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0002_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call Rain()

            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0006_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event151
        }
    }
}

void Ready_Npc_Orchestra_M_H_Road_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Orchestra04:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GetOn() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0103', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Orchestra04', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'OffsetBase': 0, 'KeepTalkWait': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Orchestra04', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'AtVector': [0.0, 2.130000114440918, -2.0999999046325684], 'PosVectorSetType': 4, 'Actor2ActorName': 'Player', 'PosVector': [0.0, 2.6500000953674316, -4.449999809265137], 'Actor1ActorName': 'AsbObj_CaravanWagon_A_06', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Orchestra_M_H_Road.EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'Orchestra04', 'Posture': 2, 'XZDegOffset': -90.0, 'PositionOffset': [0.46000000834465027, 1.4800000190734863, -2.7249999046325684], 'ActorName': 'AsbObj_CaravanWagon_A_06'})
    Npc_Orchestra_M_H_Road.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Orchestra_M_H_Road.EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0104', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide', 'Value': True})
}

void GetOff() {

    fork {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
    } {
        Npc_Orchestra_M_H_Road.EventCancelFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'Orchestra04', 'ASName': 'SitGetUp', 'ActorName': 'AsbObj_CaravanWagon_A_06'})
        Npc_Orchestra_M_H_Road.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    Npc_Orchestra_M_H_Road.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide', 'Value': False})
}

void Reset() {

    call Reset_SubA()


    call Reset_Sub_Warp()


    call Reset_SubB()

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0281', 'IsNotOpenIfSkipedMostRecent': False})
    Event8:
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
}

void Orchestra04_Tilt() {
    Event43:

    call Common.AirStartUP_Player()

    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})
    Npc_Orchestra_M_H_Road.EventTriggerBecomeSpeaker()
    Npc_Orchestra_M_H_Road.EventTriggerRequestLookAtTheFront()

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        } else {

            call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road"), 'Arg_Turn': 0})

        }
    } {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'TargetActorName': 'Npc_Orchestra_M_H_Road', 'MoveTime': 7, 'ToleranceDistance': 0.0, 'TargetOffset': [0.0, 1.600000023841858, 0.0], 'IdealDistance': 1.5, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0252', 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call Reset()

}

void Orchestra04_InteractCarriage() {
    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': True}) {
      case [1, 2, 3, 4, 7]:
        Event382:

        call Common.AirStartUP_Player()

        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        } else {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsAfter_Carry_Exp'}) {
            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0039_01', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0039', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_Orchestra_M_H_Road.EventDisableRecentTalkFlag({'IsWaitEnd': True})
      case 6:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_WagonBreaking'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_BreakWagonControl'})

            call Orchestra04_BrakeWagon()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_BreakWagonControl', 'Value': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_WagonBurning'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_BurnWagonControl'})

            call Orchestra04_BurnWagon()

            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Orchestra04_BurnWagonControl'})
        } else {
            goto Event382
        }
      case 8:

        call Orchestra04_BurnWagon()

      case 9:

        call Orchestra04_BrakeWagon()

    }
}

void Orchestra04_Arrival() {

    fork {

        call Common.AirStartUP_Player()

    } {
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})
    }

    Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0501', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerCombinedActorDeleteAll()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_ChangeWagon', 'Value': True})

    call Climbing_Check()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})


    fork {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
    } {
        Npc_Orchestra_M_H_Road.EventCancelFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'Orchestra04', 'ASName': 'SitGetUp', 'ActorName': 'AsbObj_CaravanWagon_A_06'})
    }


    call Player_Warp2()

    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Orchestra_M_H_Road', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_Orchestra_M_H_Road.EventNPCTurnToTarget({'InstanceName': '', 'Target': 4, 'Direction': 90.0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [3.8499999046325684, 1.7400000095367432, -1.2200000286102295], 'AtVector': [-0.10999999940395355, 1.5199999809265137, 1.0499999523162842], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call Arrival2()

}

void Carry_Npc_Orchestra_M_H_Road_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide'}) {
        ;
    }
}

void Carry_Npc_Orchestra_M_H_Road_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide'})
    && !Npc_Orchestra_M_H_Road.EventQueryIsFollowToTargetActor({'ActorName': 'AsbObj_CaravanWagon_A_06', 'InstanceName': 'Orchestra04'}) {

        call Carry_OnTheCart()

    } else {

        call Carry_Standing()

        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
    }
}

void Orchestra04_Sky() {
    goto Event43
}

void Rain() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 7, 8] {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Orchestra04_LeaveWagon() {

    fork {

        call Common.AirStartUP_Player()

    } {
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})
    }

    Npc_Orchestra_M_H_Road.EventTriggerBecomeSpeaker()

    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        } else {

            call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road"), 'Arg_Turn': 0})

        }
        Npc_Orchestra_M_H_Road.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_06', 'InstanceName': 'Orchestra04', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'PosVector': [-1.2000000476837158, 1.5800000429153442, 1.3600000143051147], 'AtVector': [1.690000057220459, 2.0299999713897705, -1.840000033378601], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0041', 'IsNotOpenIfSkipedMostRecent': False})

    call Reset2()

}

void Reset_SubA() {

    call Fairy_Common.SndStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsAfter_Carry_Exp'}) {

        call Player_Warp2()

    } else {

        call GetOff()


        call Player_Warp1()

    }
}

void Reset2() {

    call Reset_SubA()


    call Reset_Sub_Warp()


    call Reset_SubB()

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0042', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event8
}

void Orchestra04_Fall() {
    goto Event43
}

void Orchestra04_BurnWagon() {

    fork {

        call Common.AirStartUP_Player()

    } {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsAfter_Carry_Exp'}) {
            AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})
        }
    }

    Npc_Orchestra_M_H_Road.EventTriggerBecomeSpeaker()

    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        } else {

            call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road"), 'Arg_Turn': 0})

        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsAfter_Carry_Exp'}) {
            AsbObj_CaravanWagon_A_06[Orchestra04_02].EventTriggerParticipateEvent()
            Npc_Orchestra_M_H_Road.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_06', 'InstanceName': 'Orchestra04_02', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } else {
            Npc_Orchestra_M_H_Road.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_06', 'InstanceName': 'Orchestra04', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide'}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'PosVector': [1.159999966621399, 1.1100000143051147, 1.6799999475479126], 'AtVector': [-0.8700000047683716, 1.7000000476837158, -1.8799999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'PosVector': [-1.2000000476837158, 1.5800000429153442, 1.3600000143051147], 'AtVector': [1.690000057220459, 2.0299999713897705, -1.840000033378601], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0043', 'IsNotOpenIfSkipedMostRecent': False})

    call Reset3()

}

void Reset3() {

    call Reset_SubA()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsAfter_Carry_Exp'}) {

        call Reset_Sub_NetaResetNoWagon()

        Event163:

        call Reset_SubB()

        Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0044', 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'TalkWait'})
    } else {
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()

        call Reset_Sub_NetaReset()

        goto Event163
    }
}

void Wagon_Cam() {
    Npc_Orchestra_M_H_Road.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'InstanceName': 'Orchestra04', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Orchestra04', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Orchestra04', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 2, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'PosVector': [0.0, 1.0, 1.0], 'AtVector': [0.0, 2.130000114440918, -2.0999999046325684], 'Actor1ActorName': 'AsbObj_CaravanWagon_A_06', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Event204:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra04_NpcRide1stTime', 'Index': -1, 'Value': True})
}

void Carry_Standing() {
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_TalkAtCarryStep'}) {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0105', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event87:
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide1stTime'}) {
                    Event95:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_ExistWagon'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_OnTheGround'}) {
                            if !AsbObj_CaravanWagon_A_06[Orchestra04].EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {

                                call Wagon_Cam()

                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0122', 'IsNotOpenIfSkipedMostRecent': False})
                            } else
                            if !AsbObj_CaravanWagon_A_06[Orchestra04].EventQueryCheckNoObjectDirY({'Length': 1.7999999523162842, 'Offest': [0.0, 1.5, -2.5], 'Radius': 1.100000023841858}) {

                                call Wagon_Cam()

                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0123', 'IsNotOpenIfSkipedMostRecent': False})
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide1stTime'}) {
                                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                  case [0, 1]:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0102_03', 'IsNotOpenIfSkipedMostRecent': False})
                                    Event92:

                                    call GetOn()

                                  case [2, 3, 4, 5, 6, 7, 8]:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0102_04', 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event92
                                }
                            } else {
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra04_NpcRide1stTime', 'Index': -1, 'Value': True})
                                goto Event92
                            }
                        } else {

                            call Wagon_Cam()

                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0124', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else {

                        call Wagon_Cam2()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0121', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra04_NpcRide1stTime', 'Index': -1, 'Value': True})
                    }
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0102_01', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0102_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event95
                }
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0111', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Event86:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0101_01', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event206:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0101_02', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_TalkAtCarryStep'})
            goto Event87
        }
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy2_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Orchestra04_TalkAboutOrchestra', 'Index': -1}) {
                goto Event86
            } else {

                call TalkAboutOrchestra()

            }
        } else {
            goto Event86
        }
    }
}

void Carry_OnTheCart() {
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0201', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0202_01', 'IsNotOpenIfSkipedMostRecent': False})
            Event354:

            call Fairy_Common.SndStopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call GetOff()


            call Player_Warp1()


            call Reset_Sub_Warp()

            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            Npc_Orchestra_M_H_Road.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            Player.EventPlayerTurnAndLookNow({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Orchestra04', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'OffsetBase': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'Actor2ActorName': 'Player', 'Actor1ActorName': 'Player', 'PosVector': [-0.1599999964237213, 1.6799999475479126, -3.390000104904175], 'AtVector': [0.0, 1.690000057220459, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Fairy_Common.SndStartInGameBgm()

            AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0202_02', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event354
        }
    } else {
        Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0203', 'IsNotOpenIfSkipedMostRecent': False})
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
    }
}

void TalkAboutOrchestra() {
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0015', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0016', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_TalkAboutOrchestra'})

    call ReturnFrom_TalkAboutOrchestra()

}

void ReturnFrom_TalkAboutOrchestra() {
    goto Event206
}

void Arrival2() {
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0502', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_H_Road.EventNPCTurnToTarget({'InstanceName': '', 'Target': 2, 'Direction': 0.0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0503', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0504', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0505', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy2_IsAfter_Ready_Exp'}) {
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0508_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event64:

        call Arrival3()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune16_IsCompleted_Exp'}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0506_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy3_IsCompleted_Exp'}) {

            call Chk_Fairy4()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy3_IsAfter_Ready_Exp'}) {
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0507_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event245:
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0508_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event64
        } else
        Event236:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy4_IsCompleted_Exp'}) {

            call NotLockOrchestra()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy4_IsAfter_Ready_Exp'}) {
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0507_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event240:
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0507_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event245
    } else {
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0506_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event245
    }
}

void Arrival3() {
    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0509', 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'BeeHome'}) {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'BeeHome_Bundle_A'})

        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0510', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy2_IsAfter_Ready_Exp'}) {
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0511_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event67:
            Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0511_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_Clear', 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'Orchestra04', 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_Orchestra4Cleared', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Fairy2_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Fairy2', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'ReturnUmayado', 'IsWaitEnd': True})
        }
    } else {
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0521', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Orchestra04', 'StepName': 'GetPrize', 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_WagonOwner', 'Value': False})
    }
}

void Chk_Fairy4() {
    goto Event236
}

void NotLockOrchestra() {
    goto Event240
}

void GetPrize_Npc_Orchestra_M_H_Road_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'BeeHome'}) {
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0561', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'BeeHome_Bundle_A'})

        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0510', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call ToComplete()

    } else {
        Npc_Orchestra_M_H_Road.EventTalk({'MessageId': 'EventFlowMsg/Orchestra04:Talk_0551', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ToComplete() {
    goto Event67
}

void Wagon_Cam2() {
    Npc_Orchestra_M_H_Road.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'InstanceName': 'Orchestra04', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Orchestra04', 'ActorName': 'AsbObj_CaravanWagon_A_06', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Orchestra04', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 2, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'AtVector': [0.0, 2.130000114440918, -2.0999999046325684], 'PosVector': [0.0, 15.0, 12.0], 'Actor1ActorName': 'AsbObj_CaravanWagon_A_06', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    goto Event204
}

void Reset4() {

    call Reset_SubA()


    call Reset_Sub_NetaResetNoWagon()


    call Reset_SubB()

    Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0046', 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'TalkWait'})
}

void Orchestra04_BrakeWagon() {

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Orchestra04_BreakWagonEvent'})
        Npc_Orchestra_M_H_Road.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        Npc_Orchestra_M_H_Road.EventTriggerBecomeSpeaker()
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_NpcRide'}) {
            Npc_Orchestra_M_H_Road.EventTriggerRequestLookAtTheFront()

            fork {
                GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 7, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'PosVector': [0.03999999910593033, 1.409999966621399, 1.059999942779541], 'AtVector': [-0.03999999910593033, 1.399999976158142, -1.2799999713897705], 'TargetFovy': 72.5999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }

            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0045', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'PosVector': [-1.2000000476837158, 1.5800000429153442, 1.3600000143051147], 'AtVector': [1.690000057220459, 2.0299999713897705, -1.840000033378601], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_Orchestra_M_H_Road.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Orchestra04:Talk_0045', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {

        call Common.AirStartUP_Player()

        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road")})

        } else {

            call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_Orchestra_M_H_Road"), 'Arg_Turn': 0})

        }
    }

    Npc_Orchestra_M_H_Road.EventTriggerErasePauseMask()

    call Reset4()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_BreakWagonEvent', 'Value': False})
}

void Reset_SubB() {

    call Fairy_Common.SndStartInGameBgm()

    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-2.869999885559082, 3.1700000762939453, 7.909999847412109], 'AtVector': [-2.390000104904175, 2.950000047683716, 7.059999942779541], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Orchestra_M_H_Road', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Orchestra_M_H_Road.EventTriggerBecomeSpeaker()
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Npc_Orchestra_M_H_Road.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_H_Road.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Fairy_Common.SndStartBgm()

    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
}

void Reset_Sub_NetaReset() {
    AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerCombinedActorDeleteAll()
    Event109:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Orchestra04_ResetActor', 'Value': True})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Orchestra04_ResetActor'})
}

void Reset_Sub_Warp() {
    if !AsbObj_CaravanWagon_A_06[Orchestra04].EventQueryWarpToSafeSpaceWithCombinedActor({'BaseRot': [0.0, -150.0, 0.0], 'BasePos': [-3657.800048828125, 223.63999938964844, -760.3499755859375], 'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'IsEnableHitPlayer': True, 'IsEnableFailDelete': True}) {
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerErasePauseMask()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        AsbObj_CaravanWagon_A_06[Orchestra04].EventTriggerPushPauseMask({'IsPhysics': True, 'IsCloth': False, 'IsFrameEndCalc': False})
    } else {

        call Reset_Sub_NetaReset()

    }
}

void GetPrize_Npc_Orchestra_M_H_Road_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'BeeHome'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Orchestra04:Near_0004', 'DisplayFrame': 90})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Orchestra04:Near_0004', 'IsChallenge': False, 'DisplayFrame': 90})
    }
}

void Climbing_Check() {
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void Reset_Sub_NetaResetNoWagon() {
    goto Event109
}

void Player_Warp1() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 1.0, 'AnchorInstanceName': 'Orchestra04_Link_Pos', 'Radius': 2.0}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'Orchestra04_Link_Pos', 'IsDeleteActor': False})
    }
    Player.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Npc_Orchestra_M_H_Road', 'InstanceName': '', 'PositionOffset': [-2.5, 0.0, 0.5], 'YAngle': 95.0, 'UseDemoWait': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
}

void Player_Warp2() {
    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorActorName': 'DestinationAnchor', 'Length': 1.0, 'AnchorInstanceName': 'Orchestra04_Link_Comp', 'Radius': 2.0}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'Orchestra04_Link_Comp', 'IsDeleteActor': True})
    }
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Orchestra04_Link_Comp', 'UseDemoWait': True})
    Npc_Orchestra_M_H_Road.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
}
