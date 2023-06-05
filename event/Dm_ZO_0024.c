-------- EventFlow: Dm_ZO_0024 --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundBeginForbidDialogDucking', 'EventSoundRequestDucking', 'EventTriggerSoundControlBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void WaterDeviceOn_02() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 1}) {
      case [0, 1]:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 29})
        Event46:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminal02_EvtEnd'}) {

            call SwichOn()

            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0024_Waterfall', 'IsIgnoreDucking': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3308.43994140625, 1885.010009765625, -806.5599975585938], 'AtVector': [3309.39990234375, 1888.300048828125, -809.1400146484375], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 1, 'Value': True, 'GameDataName': 'LargeDungeonWater_PipeWater'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

            fork {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LargeDungeonWater_PipeEffect', 'Index': 1, 'Value': True})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [3308.949951171875, 1883.81005859375, -807.75], 'AtVector': [3309.97998046875, 1886.9300537109375, -810.510009765625], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                call message()

            }

            EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 1, 'Value': True, 'GameDataName': 'SageOfZora_CheckTerminal02_EvtEnd'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        }
      case 2:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        goto Event46
    }
}

void WaterDeviceOn_03() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 1}) {
      case [0, 1]:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 29})
        Event49:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminal03_EvtEnd'}) {

            call SwichOn()

            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0025_Waterfall', 'IsIgnoreDucking': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3317.22998046875, 1884.1500244140625, -804.47998046875], 'AtVector': [3318.090087890625, 1887.3800048828125, -807.1799926757812], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 2, 'Value': True, 'GameDataName': 'LargeDungeonWater_PipeWater'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                call message()

            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [3317.510009765625, 1883.1199951171875, -805.47998046875], 'AtVector': [3318.449951171875, 1886.0999755859375, -808.4299926757812], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LargeDungeonWater_PipeEffect', 'Index': 2, 'Value': True})
            }

            EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 1, 'Value': True, 'GameDataName': 'SageOfZora_CheckTerminal03_EvtEnd'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        }
      case 2:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        goto Event49
    }
}

void WaterDeviceOn_05() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 1}) {
      case [0, 1]:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 29})
        Event78:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminal05_EvtEnd'}) {

            call SwichOn()

            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0027_Waterfall', 'IsIgnoreDucking': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3363.219970703125, 1887.6700439453125, -820.030029296875], 'AtVector': [3350.830078125, 1904.22998046875, -831.3300170898438], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 4, 'Value': True, 'GameDataName': 'LargeDungeonWater_PipeWater'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                call message()

            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [3362.570068359375, 1886.6800537109375, -820.6199951171875], 'AtVector': [3349.469970703125, 1902.199951171875, -832.5700073242188], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LargeDungeonWater_PipeEffect', 'Index': 4, 'Value': True})
            }

            EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 1, 'Value': True, 'GameDataName': 'SageOfZora_CheckTerminal05_EvtEnd'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        }
      case 2:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        goto Event78
    }
}

void WaterDeviceOn_04() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 1}) {
      case [0, 1]:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 29})
        Event75:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminal04_EvtEnd'}) {

            call SwichOn()

            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0026_Waterfall', 'IsIgnoreDucking': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3371.60009765625, 1890.300048828125, -827.1900024414062], 'AtVector': [3363.419921875, 1900.8800048828125, -833.3300170898438], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'Value': True, 'GameDataName': 'LargeDungeonWater_PipeWater'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                call message()

            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [3370.360107421875, 1888.6600341796875, -827.989990234375], 'AtVector': [3361.679931640625, 1898.5999755859375, -834.5], 'TargetFovy': 62.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LargeDungeonWater_PipeEffect', 'Index': 3, 'Value': True})
            }

            EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': 1, 'Value': True, 'GameDataName': 'SageOfZora_CheckTerminal04_EvtEnd'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        }
      case 2:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        goto Event75
    }
}

void message() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 3}) {
        if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 2}) {
            if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum', 'Value': 1}) {
                if GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'SageOfZora_CheckTerminalNum'}) in [1, 2] {
                    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})

                    fork {
                        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0024:Dm_ZO_0024_04', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
                    }

                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZO_0028'})
                }
            } else {
                Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0024:Dm_ZO_0024_03', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            }
        } else {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0024:Dm_ZO_0024_02', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        }
    } else {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0024:Dm_ZO_0024_01', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    }
}

void SwichOn() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventTriggerControllerRumble({'Length': 3.5, 'RumbleCall': 'Demo_Large_GoroGoro'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    EventCamera.EventTriggerCameraSavePoint()
}
