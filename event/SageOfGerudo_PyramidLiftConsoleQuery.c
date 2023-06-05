-------- EventFlow: SageOfGerudo_PyramidLiftConsoleQuery --------

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ElectricElevator_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3}

void EntryPoint0() {
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerParticipateEvent()

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    call thunder_off()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidLiftArrive'}) {

        call AuthenticationCommon.Authentication()


        call SageOfGerudo_PyramidLiftRecovery.EntryPoint0()


        call thunder_on()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_PyramidDungeonFirstAccess', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_PyramidAllSwitchOn', 'Index': -1}) {
            SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName2': '', 'CommandLife': 0, 'DuckingName': 'DmF:プレイヤ風・ケミカルミュート'})

            call AuthenticationCommon.Authentication()

            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GE_0039'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DungeonBossFindAgain'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidLiftArrive'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode', 'Value': True})

            call thunder_on()

            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:プレイヤ風・ケミカルミュート'})

            call AuthenticationCommon.FailureNoEffect()

            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GE_0041'})

            call PlayElevatorAS()

            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 0}) {
              case 1:
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsoleQuery:NoPower', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call thunder_on()

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Value': 1, 'Index': -1}) {
                  case 1:
                    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsoleQuery:Power_25', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call thunder_on()

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 2}) {
                      case 1:
                        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsoleQuery:Power_50', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call thunder_on()

                      case 2:
                        if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 3}) {
                            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsoleQuery:Power_75', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call thunder_on()

                        }
                    }
                }
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidDungeonFirstIn'}) {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:プレイヤ風・ケミカルミュート'})

        call AuthenticationCommon.FailureNoEffect()

        DgnObj_WarpPoint_Zonau_A_03.EventTriggerParticipateEvent()

        call OpenWarpPoint({'GameDataName': 'OpenWarpPoint_LargeDungeonThunder', 'Actor1InstanceName': ''})

        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GE_0041'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GE_0018'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidDungeonFirstAccess'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode', 'Value': True})

        call thunder_on()

        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

        call AuthenticationCommon.Failure()


        call thunder_on()

    }
}

void OpenWarpPoint() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        EventCamera.EventTriggerCameraSavePoint()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'Actor1InstanceName', 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_03', 'PosVector': [-0.029999999329447746, 1.840000033378601, 5.730000019073486], 'AtVector': [0.0, 1.0800000429153442, 0.47999998927116394], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GameDataName'})
        } {
            DgnObj_WarpPoint_Zonau_A_03.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            DgnObj_WarpPoint_Zonau_A_03.EventPlayAS({'ASName': 'OnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }
}

void PlayElevatorAS() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidDungeonTerminal1On'}) {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'ASName': 'OnKeep_01', 'Partial': 'OnOff01', 'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'Partial': 'OnOff01', 'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Off_01'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidDungeonTerminal2On'}) {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff02', 'ASName': 'OnKeep_02', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff02', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Off_02'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidDungeonTerminal3On'}) {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff03', 'ASName': 'OnKeep_03', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff03', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Off_03'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidDungeonTerminal4On'}) {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff04', 'ASName': 'OnKeep_04', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': 'OnOff04', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Off_04'})
    }
}

void thunder_off() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}

void thunder_on() {
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv3', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv2', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'ThunderAttack_Max_Lv1', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'Env_ThunderAttackArea', 'ActorName': 'Npc_Gerudo_Queen_Young'})
}
