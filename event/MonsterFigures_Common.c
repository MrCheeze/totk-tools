-------- EventFlow: MonsterFigures_Common --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWaitForActorPresence', 'EventWait', 'EventChangeAlbumModeDetail', 'EventChangeAlbumModeList', 'EventCloseAlbumSelectPictureUI', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryAlbumSelectPictureActorName']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureCreateActor
entrypoint: None()
actions: ['EventCreateFigureFromAlbum', 'EventTriggerWarpToLastCreateFigurePos', 'EventTriggerWarpToFigurePosByActorName']
queries: ['EventQueryFigureTotalOfThreeSides', 'EventQueryIsFigureCreateNumFull', 'EventQueryChosenPictureActorAlreadyCreated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage031[Figures]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MamonoShop[Figures]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWait']
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventQueryIsOnRecentTalkFlag', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureDeleteArea
entrypoint: None()
actions: ['EventTriggerDeleteFigureInArea']
queries: ['EventQueryIsExistFigureInArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventWait', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MamonoShop[SetupAudience(Npc_Actor)]
entrypoint: SetupAudience(Npc_Actor)
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_UMiiVillage031[ClosePad(Npc_UMiiVillage031)]
entrypoint: ClosePad(Npc_UMiiVillage031)
actions: ['EventTalk']
queries: []
params: None

void CreateFigure() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': ''})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk14', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': True, 'IsDeleteActor': False, 'AnchorInstanceName': 'MonsterFigures_PlayerPos', 'AnchorActorName': 'StartPos', 'Radius': 3.0, 'Height': 4.0})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'MonsterFigures_PlayerPos', 'IsWaitEnd': True, 'UseDemoWait': True})
        FigureCreateActor.EventCreateFigureFromAlbum({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        call LookAtFigureOnFigureBase()

        Npc_MamonoShop[Figures].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MonsterFigures_IsCreatedAfterChallenge', 'Index': -1, 'Value': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        SoundSystemActor.EventStartSound({'IsWaitEnd': True, 'TimeoutFrame': 0, 'SLinkKey': 'Dm_CreateFigure'})
    }

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
}

void SetupAudience() {
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': 'InstanceName', 'ActorName': 'NpcName'})
    Npc_MamonoShop[SetupAudience(Npc_Actor)].EventTriggerParticipateEvent()
    Npc_MamonoShop[SetupAudience(Npc_Actor)].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void DeleteFigure() {

    call LookAtFigureBase()

    if !FigureCreateActor.EventQueryIsFigureCreateNumFull() {
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk57', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk69', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !FigureCreateActor.EventQueryIsFigureCreateNumFull() {
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk53', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk70', 'IsNotOpenIfSkipedMostRecent': False})
        }
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': ''})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': False})

        fork {
            FigureDeleteArea.EventTriggerDeleteFigureInArea({'IsWaitEnd': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            SoundSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
            SoundSystemActor.EventStartSound({'TimeoutFrame': 90, 'SLinkKey': 'Dm_MonsterFigures_DeleteFigure', 'IsWaitEnd': True})
        }

        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk71', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'KeepTalkWait': True, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Figures', 'OffsetBase': 0})
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk99', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void SetupMainCharactorExPos() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MonsterFigures_InExhibition', 'Index': -1, 'Value': True})
    FigureCreateActor.EventTriggerWarpToLastCreateFigurePos()
    Npc_UMiiVillage031[Figures].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_UMiiVillage031[Figures].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_MamonoShop[Figures].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_MamonoShop[Figures].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'MonsterFigures_PlayerExhibition', 'IsWaitEnd': True, 'UseDemoWait': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void LookAtStage() {
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'WoodDeckPos', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'FaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'WoodDeckPos', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'WoodDeckPos', 'IsWaitEnd': False, 'TurnFaceControlType': 0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'TargetActorInstanceName': 'WoodDeckPos', 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 15.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': 10.0, 'CameraCollisionMode': 0})
}

void SetupRewardPosition() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MonsterFigures_InExhibition', 'Value': False, 'Index': -1})
    Npc_UMiiVillage031[Figures].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_MamonoShop[Figures].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'IsWaitEnd': True, 'InstanceName': 'MonsterFigures_PlayerPos', 'UseDemoWait': True})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void LookAtFigureFromMamonoShop() {
    FigureCreateActor.EventTriggerWarpToLastCreateFigurePos()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'FigureCreateActor', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'TotalOfThreeSides': 10.0, 'IsLastCreateFigure': True, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 25.0})

    } else
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'IsLastCreateFigure': True, 'TotalOfThreeSides': 24.0, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 35.0})

    } else {

        call Camera_MamonoShopToFigure({'TargetFovy': 50.0})

    }
}

void CreateOtherFigure() {
    GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk59', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    call CreateFigure()

    switch Npc_MamonoShop[Figures].EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk60', 'IsNotOpenIfSkipedMostRecent': False})
        Event156:

        fork {
            Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk66', 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk64', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event156
      case 2:
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk65', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event156
    }
}

void NonMonsterInPhoto() {
    if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Npc_UMiiVillage033_Gerudo'}) {

        call Npc_UMiiVillage031.ShowPhotoReaction()

    } else {
        GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk50', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
    }
}

void CanNotCreateFigure() {
    GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk50', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
}

void LookAtFigureBase() {
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FigureBasePos', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'FigureBasePos', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'FigureBasePos', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1ActorName': 'DesignateMatrixActor', 'PosVector': [-12.739999771118164, 4.409999847412109, -1.4600000381469727], 'AtVector': [-6.610000133514404, 2.9800000190734863, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void LookAtDegsinatedFigure() {
    FigureCreateActor.EventTriggerWarpToFigurePosByActorName({'ActorName2': 'ActorName2', 'ActorName3': 'ActorName3', 'ActorName1': 'ActorName1'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'FigureCreateActor', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'TotalOfThreeSides': 10.0, 'IsLastCreateFigure': False, 'ActorName1': 'Size_ActorName1', 'ActorName2': 'Size_ActorName2', 'ActorName3': 'Size_ActorName3'}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 20.0})

    } else
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'IsLastCreateFigure': True, 'TotalOfThreeSides': 24.0, 'ActorName1': 'Size_ActorName1', 'ActorName2': 'Size_ActorName2', 'ActorName3': 'Size_ActorName3'}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 35.0})

    } else {

        call Camera_MamonoShopToFigure({'TargetFovy': 50.0})

    }
}

void FullOfFigures() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MonsterFigures_IsExplainedDelete', 'Index': -1, 'Value': True})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel3': 2, 'ChoiceLabel2': 13, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk47', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk51', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    call LookAtFigureBase()

    if !FigureDeleteArea.EventQueryIsExistFigureInArea() {
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk77', 'ChoiceLabel1': 7, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call DeleteFigure()

            Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk54', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'KeepTalkWait': True, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Figures', 'OffsetBase': 0})
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk99', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk77', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ExistOnFigureBase() {

    call LookAtFigureBase()

    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk93', 'IsNotOpenIfSkipedMostRecent': False})
}

void WaitPhoto_Enokida() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk94', 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 6, 7, 8]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk96', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void WaitPhoto_Greeting() {
    if !Player.EventQueryCheckPlayerState({'State': 0}) {

        call Reaction_MamonoArmor()

    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk104', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Npc_UMiiVillage031.ShowPhotoAfterTalk()

}

void CancelToSelectPhoto() {

    call ClosePad({'MessageId': 'EventFlowMsg/MonsterFigures05:Talk73', 'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures")})

}

void Reward_Enokida_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 3})

    Npc_MamonoShop[Figures].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk102', 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 6, 7, 8]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk100', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Reaction_MamonoArmor() {
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_022_Head', 'ArmorSlot': 0}) {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk106', 'IsNotOpenIfSkipedMostRecent': False})
        Event120:
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk105', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1125_Head'}) {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk110', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event120
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_045_Head'}) {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk107', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event120
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_056_Head'}) {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk111', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event120
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_055_Head'}) {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk108', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event120
    } else {

        call NormalGreeting()

    }
}

void NormalGreeting() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_IsCreatedAfterChallenge'})
    && !Npc_MamonoShop[Figures].EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk75', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_MamonoShop[Figures].EventQueryIsOnRecentTalkFlag() {
        Npc_MamonoShop[Figures].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk74', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LookAtAll() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_MamonoShop', 'Actor1InstanceName': 'Figures', 'PosVector': [-2.4200000762939453, 2.799999952316284, 13.699999809265137], 'AtVector': [-3.1600000858306885, 2.1600000858306885, 7.059999942779541], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void LookAtFigureFromAudience() {
    FigureCreateActor.EventTriggerWarpToLastCreateFigurePos()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'FigureCreateActor', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'TotalOfThreeSides': 10.0, 'IsLastCreateFigure': True, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_AudienceToFigure({'TargetFovy': 20.0})

    } else
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'IsLastCreateFigure': True, 'TotalOfThreeSides': 24.0, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_AudienceToFigure({'TargetFovy': 35.0})

    } else {

        call Camera_AudienceToFigure({'TargetFovy': 50.0})

    }
}

void TwoMenTurnToPlayer() {
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void LookAtDegsinatedFigureFromAudience() {
    FigureCreateActor.EventTriggerWarpToFigurePosByActorName({'ActorName1': 'ActorName1', 'ActorName2': 'ActorName2', 'ActorName3': 'ActorName3'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'FigureCreateActor', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'TotalOfThreeSides': 10.0, 'IsLastCreateFigure': True, 'ActorName1': 'Size_ActorName1', 'ActorName2': 'Size_ActorName2', 'ActorName3': 'Size_ActorName3'}) {

        call Camera_AudienceToFigure({'TargetFovy': 20.0})

    } else
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'IsLastCreateFigure': True, 'TotalOfThreeSides': 24.0, 'ActorName1': 'Size_ActorName1', 'ActorName2': 'Size_ActorName2', 'ActorName3': 'Size_ActorName3'}) {

        call Camera_AudienceToFigure({'TargetFovy': 35.0})

    } else {

        call Camera_AudienceToFigure({'TargetFovy': 50.0})

    }
}

void LookAtFigureOnFigureBase() {
    FigureCreateActor.EventTriggerWarpToLastCreateFigurePos()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'ActorName': 'FigureCreateActor', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'TotalOfThreeSides': 10.0, 'IsLastCreateFigure': True, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 25.0})

    } else
    if !FigureCreateActor.EventQueryFigureTotalOfThreeSides({'IsLastCreateFigure': True, 'TotalOfThreeSides': 24.0, 'ActorName1': '', 'ActorName2': '', 'ActorName3': ''}) {

        call Camera_MamonoShopToFigure({'TargetFovy': 35.0})

    } else {

        call Camera_MamonoShopToFigure({'TargetFovy': 50.0})

    }
}

void Camera_MamonoShopToFigure() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'Actor1ActorName': 'Npc_MamonoShop', 'Actor1InstanceName': 'Figures', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor2ActorName': 'FigureCreateActor', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 4.0, 1.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'TargetFovy': 'TargetFovy', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_AudienceToFigure() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'Actor1InstanceName': 'Figures', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor2ActorName': 'FigureCreateActor', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 4.0, 1.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'TargetFovy': 'TargetFovy', 'Actor1ActorName': 'Npc_oasis050', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void ExistOnFigureBaseAfterDeleteEvent() {
    EventCamera.EventTriggerCameraSavePoint()

    call LookAtFigureBase()

    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk93', 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call DeleteFigure()

    } else {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'KeepTalkWait': True, 'ActorName': 'Npc_UMiiVillage031', 'InstanceName': 'Figures', 'OffsetBase': 0})
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk99', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LookAtFigure_OutOfArea() {

    fork {
        Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'FigureCreateActor', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'Actor1ActorName': 'Npc_MamonoShop', 'Actor1InstanceName': 'Figures', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor2ActorName': 'FigureCreateActor', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 4.0, 1.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'MoveTime': 'MoveTime', 'TargetFovy': 50.0})
}

void Talk_BeforeCreatingOtherFigure() {
    if !FigureCreateActor.EventQueryChosenPictureActorAlreadyCreated() {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk85', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk49', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ClosePad() {
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})

    fork {
        GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
        Npc_UMiiVillage031[ClosePad(Npc_UMiiVillage031)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'TalkSheikPadShowOff', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
    }

}

void ShowPad() {
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_MamonoShop', 'InstanceName': 'Figures', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'Talk', 'IsWaitEnd': False})

    fork {
        Npc_MamonoShop[Figures].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MamonoShop[Figures].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2})
        Npc_MamonoShop[Figures].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Npc_UMiiVillage031[Figures].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_UMiiVillage031[Figures].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2})
        Npc_UMiiVillage031[Figures].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
    }

}
