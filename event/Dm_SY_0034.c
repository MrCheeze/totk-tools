-------- EventFlow: Dm_SY_0034 --------

Actor: Dm_Locator[dm]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Parasail_Event[ParasailChange]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventParasailStainWait', 'EventTriggerParticipateEvent', 'EventTriggerBindUIModelScene']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'Rotation': [0.0, 33.0, 0.0], 'EventMemberCreateMethod': 2, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerParasailGlide', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerEquipmentUserRequestSetVisible', 'EventTriggerEquipmentUserRequestStaticEquipmentSetVisible', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0034/Dm_SY_0034_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0034_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoHouseRoof_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0034/Dm_SY_0034_TwnObj_Village_HatenoHouseRoof_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0034_TwnObj_Village_HatenoHouseRoof_A_01.root.as', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoHouseShutter_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0034/Dm_SY_0034_TwnObj_Village_HatenoHouseShutter_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0034_TwnObj_Village_HatenoHouseShutter_A_01.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventCloseMessageDialog', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventTriggerForceCloseUIScreen', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventTriggerControllerRumble', 'EventDoNothing']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventTriggerChangeParasailPatternAsSelectResult', 'EventTalk', 'EventPlayAS', 'EventOpenParasailPatternSelectUI', 'EventWaitParasailPatternSelectInput', 'EventCloseParasailPatternSelectUI', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: ['EventQueryParasailPatternSelectResult']
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0034/Dm_SY_0034_Npc_Hylia_Dyer/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0034_Npc_Hylia_Dyer.root.as', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoHouseSwitchStep_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0034/Dm_SY_0034_TwnObj_Village_Hateno_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0034_TwnObj_Village_Hateno_A.root.as', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Parasail
entrypoint: None()
actions: ['EventChangeParasailPattern']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Dm_Locator[dm].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ActorName': 'Npc_HatenoVillage001', 'OffsetBase': 0})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'dm', 'PosVector': [-4.130000114440918, 2.2200000286102295, -5.650000095367432], 'AtVector': [-0.8199999928474426, 1.340000033378601, -0.8299999833106995], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'EventParasail_Appeared', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    Parasail_Event[ParasailChange].EventTriggerParticipateEvent()
    Parasail_Event[ParasailChange].EventTriggerBindUIModelScene()
    Parasail_Event[ParasailChange].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.0, 0.0, 5.900000095367432]})
    Event51:
    Npc_EventStarter.EventOpenParasailPatternSelectUI({'IsWaitEnd': True, 'IsFocusToUnownedPattern': False, 'IsShowGuide': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sage_CheckedParasailList', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1002', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Parasail_Event[ParasailChange].EventParasailStainWait({'IsWaitEnd': True, 'OffsetX': -0.1875, 'OffsetY': -0.12999999523162842})
    Event52:
    Npc_EventStarter.EventWaitParasailPatternSelectInput({'IsWaitEnd': True})
    switch Npc_EventStarter.EventQueryParasailPatternSelectResult() {
      case 0:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call CloseUIandParasail()

            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1006', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call Demo()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {

            call ReChoice_Parasail()

        }
      case 1:

        call CloseUIandParasail()

        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 10, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
      case 2:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1033', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event87:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1009', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event52
      case 3:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1021', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event87
    }
}

void Enter() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'TwnObj_Village_HatenoHouseShutter_A_01', 'PosVector': [0.0, -0.46000000834465027, 6.070000171661377], 'AtVector': [0.0, -1.0299999713897705, 1.75], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'dm', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_EventStarter.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3410.047119140625, 226.72079467773438, 2150.443115234375], 'YAngle': -50.0})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Player.EventPlayerOnStopMode({'StopAnm': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Walk', 'UseAnmDriven': True, 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(Dm_SY_0034用)', 'CommandLife': 0})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_EventStarter.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3410.047119140625, 226.72079467773438, 2150.443115234375], 'YAngle': 0.0})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

    fork {
        if EventSystemActor.EventQueryIsEventSkipedMostRecent() {

            fork {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1003', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                TwnObj_Village_HatenoHouseShutter_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0034_HatenoHouseShutter_Close'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            }

        }
    } {
        TwnObj_Village_HatenoHouseShutter_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'On', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
    }

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_1004', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'ASName': 'DemoTalk', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        GameSystemActor.EventDoNothing({'IsWaitEnd': True})
        GameSystemActor.EventTriggerForceCloseUIScreen({'ForceCloseScreen': 1})
        Event19:
        Npc_EventStarter.EventTriggerRequestLookAtTheFront()

        fork {
            Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Switch'})
        } {
            TwnObj_Village_HatenoHouseSwitchStep_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        TwnObj_Village_HatenoHouseShutter_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0034_HatenoHouseShutter_Smoke', 'SLinkKey': 'Dm_SY_0034_HatenoHouseShutter_Smoke'})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.10000000149011612, 0.0], 'MoveTime': 0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': '', 'AtVector': [0.0, -0.20000000298023224, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 2, 'Actor1ActorName': '', 'AtVector': [0.0, 0.15000000596046448, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 2, 'Actor1ActorName': '', 'AtVector': [0.0, -0.10000000149011612, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 3, 'Actor1ActorName': '', 'AtVector': [0.0, 0.05000000074505806, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'TwnObj_Village_HatenoHouseShutter_A_01', 'AtVector': [0.0, 2.3399999141693115, 2.140000104904175], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.800000011920929, 'PosVector': [0.0, -0.46000000834465027, 6.070000171661377], 'TargetFovy': 50.0, 'MoveTime': 28, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SY_0034', 'CommandLife': 2, 'IsReleaseDucking': False})
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 32})
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SY_0034', 'CommandLife': 2, 'IsReleaseDucking': False})
                SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(Dm_SY_0034用)', 'IsImmediately': False, 'IsClearRefCount': False})
            }
        }

    } else {
        goto Event19
    }
}

void Fly() {

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3411.2099609375, 235.63999938964844, 2153.969970703125], 'YAngle': -139.0, 'UseDemoWait': True})

        call PlayerSetVisibleWeapon({'IsVisible': True})

        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Jump', 'UseAnmDriven': True, 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'PosVector': [0.0, 1.7999999523162842, -7.599999904632568], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0034_Player_WindThrough', 'SLinkKey': ''})
        EventSystemActor.EventWait({'Frames': 44, 'IsWaitEnd': True})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0034_Player_WindThrough', 'IsKill': False, 'SLinkKey': ''})
    }

    TwnObj_Village_HatenoHouseRoof_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Off', 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Fall', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            TwnObj_Village_HatenoHouseRoof_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Off', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        }

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 10.010000228881836, -2.200000047683716], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventPlayerOnStopMode({'StopAnm': False})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -139.0, 'Position': [3411.2099609375, 266.1499938964844, 2153.969970703125], 'UseDemoWait': True})

        fork {
            Player.EventPlayerParasailGlide({'IsWaitEnd': True, 'DoSleep': False})
        } {
            TwnObj_Village_HatenoHouseSwitchStep_A_01.EventPlayAS({'ASName': 'Default', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
        }

        Event32:
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0})
        Player.EventPlayerOffStopMode()
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 10.010000228881836, -2.200000047683716], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 20, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {

            fork {
                Player.EventPlayerParasailGlide({'IsWaitEnd': True, 'DoSleep': False})
            } {
                TwnObj_Village_HatenoHouseSwitchStep_A_01.EventPlayAS({'ASName': 'Default', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
            }

        }

        goto Event32
    }
}

void DoorOpen() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'dm', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 1.4500000476837158, -2.380000114440918], 'AtVector': [0.0, 1.3300000429153442, 1.0800000429153442], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'dm', 'YAngle': 0.0, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, -3.5], 'UseDemoWait': True})
        } {

            call PlayerSetVisibleWeapon({'IsVisible': False})

        }

        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsAllSlot': False, 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Locator[dm].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'TwnObj_Village_HatenoHouseShutter_A_01', 'YAngle': 180.0, 'PositionOffset': [0.0, -2.759999990463257, 1.0]})
    }

    Npc_EventStarter.EventTriggerChangeParasailPatternAsSelectResult()
    Parasail.EventChangeParasailPattern({'IsWaitEnd': True})
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
    TwnObj_Village_HatenoHouseRoof_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    TwnObj_Village_HatenoHouseShutter_A_01.EventPlayAS({'ASName': 'Open', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void ReChoice_Parasail() {
    goto Event51
}

void Demo() {

    call DoorOpen()


    call Enter()


    call Fly()

}

void PlayerSetVisibleWeapon() {
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 0, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 3, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 4, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestStaticEquipmentSetVisible({'StaticEquipmentSlot': 3, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestStaticEquipmentSetVisible({'StaticEquipmentSlot': 6, 'IsVisible': 'IsVisible'})
}

void CloseUIandParasail() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Parasail_Event[ParasailChange].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'EventParasail_Appeared', 'Value': False, 'Index': -1})
    Npc_EventStarter.EventCloseParasailPatternSelectUI({'IsWaitEnd': True})
}
