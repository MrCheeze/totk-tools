-------- EventFlow: DmF_SY_RecycleBox --------

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerRecycle', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic', 'EventPlayerTurnAndLook', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_RecycleBox_Link.root.as', 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_RecycleBox/DmF_SY_RecycleBox_Link/workspace.pp__ModelProject.gyml', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: RecycleBox_EventStarter
entrypoint: None()
actions: ['EventRequestMoveFromOtherDynamicActorContainerFromCarryBox', 'EventPlayAS', 'EventRecycleBoxExecuteDropCapsules', 'EventExecuteRecycleBoxWaitNearDoorNotCrowded', 'EventSetCookingCarryBoxInfo', 'EventTriggerEmitXLink', 'EventTriggerClearCarryBoxDependency', 'EventTriggerRecycleBoxSetThrowIntoFlag', 'EventWait']
queries: ['EventQueryRecycleBoxCalcDropCapsuleCount', 'EventQueryRecycleBoxIsThereDropActor', 'EventQueryIsAnyConvertedToCapsule', 'EventQueryIsDoorOpen']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'ExceptionalBindType': 1, 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_RecycleBox_RecycleBox.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd', 'EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_RecycleBox() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 2, 'DuckingName2': ''})
    RecycleBox_EventStarter.EventRequestMoveFromOtherDynamicActorContainerFromCarryBox({'IsWaitEnd': True})
    if !RecycleBox_EventStarter.EventQueryRecycleBoxIsThereDropActor() {

        call C01({'RBoxASCommand': 'ItemLight'})


        call C02()


        call C03()


        call Options()

        if !RecycleBox_EventStarter.EventQueryIsAnyConvertedToCapsule() {
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DropCapsule'})
        }
        Event19:
        RecycleBox_EventStarter.EventTriggerClearCarryBoxDependency()
    } else {

        call C01({'RBoxASCommand': 'AnimalOnly'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsRequestClearCarryBox'})
        Player.EventPlayerWait({'IsWaitEnd': True})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        goto Event19
    }
}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'c02-01', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 21})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsRequestClearCarryBox'})
    RecycleBox_EventStarter.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'ASName': 'LightMove', 'IsWaitEnd': True})
    RecycleBox_EventStarter.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'CapsuleLight', 'IsWaitEnd': False, 'Partial': ''})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 15, 'Power': 0.009999999776482582, 'IsRumbleController': False})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 18})
}

void C03() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_RecycleBox', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'PosVector': [-0.05000000074505806, 2.509999990463257, 6.849999904632568], 'AtVector': [-0.029999999329447746, 3.4000000953674316, 5.559999942779541], 'TargetFovy': 53.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'MoveTime': 82, 'Actor1ActorName': 'Dm_Locator', 'PosVector': [-0.05000000074505806, 2.509999990463257, 6.849999904632568], 'AtVector': [-0.029999999329447746, 3.4000000953674316, 5.559999942779541], 'TargetFovy': 53.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 1, 'Power': 0.30000001192092896, 'LoopEndCount': 1, 'IsRumbleController': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 87})

        fork {
            switch RecycleBox_EventStarter.EventQueryRecycleBoxCalcDropCapsuleCount() {
              case [0, 1]:
                RecycleBox_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_RecycleBox_Success', 'SLinkKey': 'DmF_SY_RecycleBox_Success'})
              case 2:
                RecycleBox_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_RecycleBox_Failure', 'SLinkKey': 'DmF_SY_RecycleBox_Failure'})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
        }

    }

    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 28})
}

void Options() {
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': ''})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1.6799999475479126, 1.159999966621399, 5.199999809265137], 'AtVector': [1.350000023841858, 1.350000023841858, 4.619999885559082], 'TargetFovy': 57.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.0399999618530273, 5.579999923706055, 8.84000015258789], 'AtVector': [2.5399999618530273, 4.849999904632568, 7.989999771118164], 'TargetFovy': 60.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'StartAccelerateRate': 0.0, 'IsWaitEnd': True, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        } {
            RecycleBox_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
            RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call Whether_DoorOpen()

        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            switch RecycleBox_EventStarter.EventQueryRecycleBoxCalcDropCapsuleCount() {
              case 0:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C04-02-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
              case 1:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C04-01-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
              case 2:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C04-00-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
            }
        }

        Player.EventPlayerOffMotionTypeStatic()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    } else {

        fork {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 0.20000000298023224, 'IsRumbleController': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1.6799999475479126, 1.159999966621399, 5.199999809265137], 'AtVector': [1.350000023841858, 1.350000023841858, 4.619999885559082], 'TargetFovy': 57.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.0399999618530273, 5.579999923706055, 8.84000015258789], 'AtVector': [2.5399999618530273, 4.849999904632568, 7.989999771118164], 'TargetFovy': 60.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'StartAccelerateRate': 0.0, 'IsWaitEnd': True, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        } {
            RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call Whether_DoorOpen()

        } {
            switch RecycleBox_EventStarter.EventQueryRecycleBoxCalcDropCapsuleCount() {
              case 0:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_RecycleBox'}) {
                    EventSystemActor[wait2].EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C04-02-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                } else {
                    Event48:
                    EventSystemActor[wait2].EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                }
              case 1:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_RecycleBox'}) {
                    EventSystemActor[wait2].EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C04-01-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                } else {
                    goto Event48
                }
              case 2:
                Player.EventPlayerTurnAndLook({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerOnMotionTypeStatic()
                EventSystemActor[wait2].EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C04-00-Link', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ForceFadeFrame': 15.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
            }
        }

        Player.EventPlayerOffMotionTypeStatic()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    }
}

void C01() {

    fork {
        RecycleBox_EventStarter.EventSetCookingCarryBoxInfo({'IsWaitEnd': True})
        RecycleBox_EventStarter.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'RBoxASCommand'})
    } {
        Dm_Locator.EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'TargetActorKind': 0, 'ActorName': '', 'OffsetBase': 1})

        call Recycle_Player()

    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName': 'DmF:WorldSEミュート(フェード普通)'})
    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 4})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_RecycleBox'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }
}

void Whether_DoorOpen() {
    if RecycleBox_EventStarter.EventQueryIsDoorOpen() {
        RecycleBox_EventStarter.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'DoorOpen', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'Partial': 'Door'})
    }
    switch RecycleBox_EventStarter.EventQueryRecycleBoxCalcDropCapsuleCount() {
      case 0:
        RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
        RecycleBox_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_RecycleBox_Success_Open', 'SLinkKey': 'DmF_SY_RecycleBox_GreatSuccess_Open'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_RecycleBox_Great', 'CommandLife': 2, 'IsReleaseDucking': False})
        Event148:
        RecycleBox_EventStarter.EventRecycleBoxExecuteDropCapsules({'IsWaitEnd': True})
        RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 12})
        RecycleBox_EventStarter.EventExecuteRecycleBoxWaitNearDoorNotCrowded({'IsWaitEnd': True, 'TimeoutFrame': 60.0})
      case 1:
        RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
        RecycleBox_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_RecycleBox_Success_Open', 'SLinkKey': 'DmF_SY_RecycleBox_Success_Open'})
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_DmF_SY_RecycleBox_Success'})
        goto Event148
      case 2:
        RecycleBox_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
        RecycleBox_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_RecycleBox_Failure_Open', 'SLinkKey': 'DmF_SY_RecycleBox_Failure_Open'})
        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_DmF_SY_RecycleBox_Fail'})
        goto Event148
    }
}

void Recycle_Player() {

    fork {
        Player.EventPlayerRecycle({'IsWaitEnd': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 2})
        RecycleBox_EventStarter.EventTriggerRecycleBoxSetThrowIntoFlag()
    }

}
