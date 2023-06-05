-------- EventFlow: DmF_SY_SmallDungeon3Arrive --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenDungeonTitle', 'EventTriggerSetDungeonEnter', 'EventOpenMessageDungeon', 'EventTriggerRequestAutoSave', 'EventWaitCloseLoadingFade', 'EventEventFadeIn', 'EventTriggerForceCloseUIScreen', 'EventEventFadeOut', 'EventDoNothing', 'EventOpenSmallKeyDisplay', 'EventTriggerResetSmallKeyPrevNum']
queries: ['EventQuerySmallDungeonType', 'EventQueryIsClearDungeon', 'EventQueryCheckCurrentBancWorkPath', 'EventQueryHasSmallKey']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundSceneBGMDisable', 'EventTriggerSoundSceneBGMEnable', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerWait', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerResetBoneControl', 'EventWarpOnGround']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventCamera[EventCamera]
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventDmLocatorWarpToNearAnchor', 'EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_SmallDungeon3Arrive() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName': 'DmF:Cダンジョン入場用'})
    switch GameSystemActor.EventQuerySmallDungeonType() {
      case [0, 2, 3]:
        Event29:
        SoundSystemActor.EventTriggerSoundSceneBGMDisable()
        Dm_Locator.EventTriggerParticipateEvent()
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'OnElevator', 'UseDemoWait': True})
        Dm_Locator.EventDmLocatorWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'OnElevator'})
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'StartAccelerateRate': 0.5, 'PosVector': [0.0, 1.7999999523162842, -5.099999904632568], 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera[EventCamera].EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.17000000178813934, -7.199999809265137], 'ActorName': 'Dm_Locator', 'InstanceName': '', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': False})
        GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

        fork {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoLookAroundWalkEd', 'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 185})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'TargetFovy': 40.0, 'PosVector': [0.0, 4.0, 10.0], 'AtVector': [0.0, 1.5, -3.0], 'Actor1ActorName': 'Dm_Locator', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetFovy': 40.0, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 3.5, 8.0], 'StartAccelerateRate': 0.5, 'EndRecelerateRate': 0.5, 'Actor1ActorName': 'Dm_Locator', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 135, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.5, 'CameraCollisionMode': 1, 'LongShiftRange': 100.0, 'LatShiftRange': 100.0, 'PosVector': [0.0, 1.850000023841858, -4.699999809265137], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'StartAccelerateRate': 0.5, 'PosVector': [0.0, 1.7999999523162842, -5.099999904632568], 'EndRecelerateRate': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': True})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Cダンジョン入場用'})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
            Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': 0.0, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, 0.5, 0.0], 'UseDemoWait': True})
            Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'StartAccelerateRate': 0.5, 'PosVector': [0.0, 1.7999999523162842, -5.099999904632568], 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventTriggerPlayerResetBoneControl({'Type': 1})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 0, 'IsWaitEnd': False})
            Event44:
            EventCamera[EventCamera].EventTriggerSendKeepStateMessageToPlayerCamera()
            SoundSystemActor.EventTriggerSoundSceneBGMEnable()
            if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon060'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_UltraHand', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    Event32:
                    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    switch GameSystemActor.EventQuerySmallDungeonType() {
                      case [0, 2, 3]:
                        Event24:
                        GameSystemActor.EventOpenDungeonTitle({'IsWaitEnd': True})
                        GameSystemActor.EventTriggerSetDungeonEnter()
                        if !GameSystemActor.EventQueryHasSmallKey() {
                            GameSystemActor.EventTriggerResetSmallKeyPrevNum()
                        } else {
                            GameSystemActor.EventOpenSmallKeyDisplay({'IsWaitEnd': True})
                        }
                        GameSystemActor.EventTriggerRequestAutoSave()
                        GameSystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
                      case 1:
                        if !GameSystemActor.EventQueryIsClearDungeon() {
                            goto Event24
                        } else {
                            EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
                            GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeon3Arrive:talk07', 'IsWithAncientGlyph': True, 'IsUnder': False})
                            GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeon3Arrive:talk05', 'IsWithAncientGlyph': True, 'IsUnder': False})
                            EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
                            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                                GameSystemActor.EventDoNothing({'IsWaitEnd': True})
                                GameSystemActor.EventTriggerForceCloseUIScreen({'ForceCloseScreen': 0})
                                goto Event24
                            } else {
                                goto Event24
                            }
                        }
                    }
                } else {
                    Event13:
                    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:環境系SE下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    EventSystemActor.EventTransition({'EventName': 'Dm_OP_0011', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
                    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'PosVector': [0.0, 1.7999999523162842, -5.099999904632568], 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    goto Event32
                }
            } else
            if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Obj_Tooreroof', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event32
                } else {
                    goto Event13
                }
            } else
            if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Obj_OneTouchBond', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event32
                } else {
                    goto Event13
                }
            } else {
                goto Event32
            }
        } else {
            goto Event44
        }
      case 1:

        call ChangePouch.Leave()

        goto Event29
    }
}
