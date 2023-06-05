-------- EventFlow: Raise_GoddesStatue --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventPlayerTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDiffuseAttenuate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GoddesStatue_Courage_A_10
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GoddesStatue_Wisdom_A_10
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_GoddesStatue_Power_A_10
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: TwnObj_SuperGoddesStatue_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void GoddesStatue_Down() {

    call Start_GoddesStatueDown()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk000', 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -4.670000076293945], 'AtVector': [0.0, 1.7599999904632568, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 40, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Raise_GoddesStatue_Checked', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_Raise_GoddesStatue_Wisdom', 'Value': 'CheckGoddesStatue', 'Index': -1}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Wisdom', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Report', 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'CheckGoddesStatue', 'Index': -1, 'GameDataName': 'Step_Raise_GoddesStatue_Power'}) {
            Event46:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Report', 'ChallengeName': 'Raise_GoddesStatue_Power', 'IsWaitEnd': True})
        }
        if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'CheckGoddesStatue', 'Index': -1, 'GameDataName': 'Step_Raise_GoddesStatue_Courage'}) {
            Event48:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Report', 'ChallengeName': 'Raise_GoddesStatue_Courage', 'IsWaitEnd': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'CheckGoddesStatue', 'Index': -1, 'GameDataName': 'Step_Raise_GoddesStatue_Power'}) {
        goto Event46
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'CheckGoddesStatue', 'Index': -1, 'GameDataName': 'Step_Raise_GoddesStatue_Courage'}) {
        goto Event48
    }
}

void Complate_GoddesStatue_Talk() {
    if !GameSystemActor.EventQueryExistActor({'ActorName': 'Weapon_Sword_057', 'IsCheckLife': False, 'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
        Event59:
        EventSystemActor.EventTransition({'EventName': 'DmF_SY_StatueVenus', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_057', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': False}) {
        goto Event59
    } else {

        call StartCommon_Camera()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk030', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Enemy_39', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
            && !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Enemy_50', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
            && !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Enemy_54', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_057'}) {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'AttachmentActor': '', 'IsEquipDIrect': False, 'Actor': 'Item_Enemy_39', 'Num': -1, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'AttachmentActor': '', 'IsEquipDIrect': False, 'Num': -1, 'Actor': 'Item_Enemy_50', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'AttachmentActor': '', 'IsEquipDIrect': False, 'Num': -1, 'Actor': 'Item_Enemy_54', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_057'})

                    Event91:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call EndCommon()

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call EndCommon()

                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event91
            }
        } else {
            goto Event91
        }
    }
}

void CameraFromDemo() {
    Npc_EventStarter.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'IsKill': True})
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.30000001192092896})
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_Wisdom_A_10'}) {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Wisdom_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
        }

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_Power_A_10'}) {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Power_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
        }

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_Courage_A_10'}) {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Courage_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
        }

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'TargetActorName': 'TwnObj_SuperGoddesStatue_A_01', 'IsWaitEnd': True, 'SceneName': 'C01-4', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 2.8499999046325684, 20.0], 'UseDemoWait': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        } {
            Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
        }

    }
}

void StartCommon_Camera() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})


    call CameraFromDemo()

    Event65:
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
}

void ToGoal_SuperGoddesStatue_Talk() {

    call EndRaiseEffect()


    call StartCommon_Camera()

    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_057'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk010', 'IsOverrideStyle': True, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_057'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk011', 'IsOverrideStyle': True, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Raise_GoddesStatue', 'StepName': 'Complete', 'IsWaitEnd': True})
        Event35:

        call EndCommon()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsOverrideStyle': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue:talk012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event35
    }
}

void StartCommon_FarWisdom() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})


    call CameraFromDemo_FarWisdom()

    goto Event65
}

void CameraFromDemo_FarWisdom() {
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.30000001192092896})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Wisdom_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'TwnObj_GoddesStatue_Wisdom_A_10', 'TurnFaceControlType': 1})
    } {
        TwnObj_GoddesStatue_Wisdom_A_10.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void CameraFromDemo_FarPower() {
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.30000001192092896})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Power_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'TwnObj_GoddesStatue_Power_A_10', 'TurnFaceControlType': 1})
    } {
        TwnObj_GoddesStatue_Power_A_10.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void CameraFromDemo_FarCourage() {
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.30000001192092896})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorName': 'TwnObj_GoddesStatue_Courage_A_10', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TwnObj_GoddesStatue_Courage_A_10', 'Target': 3, 'TurnFaceControlType': 1})
    } {
        TwnObj_GoddesStatue_Courage_A_10.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void StartCommon_FarPower() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})


    call CameraFromDemo_FarPower()

    goto Event65
}

void StartCommon_FarCourage() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})


    call CameraFromDemo_FarCourage()

    goto Event65
}

void EndCommon() {
    Npc_EventStarter.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_StatueVenus_Aureole'})
    Event32:
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
}

void EndCommon_Wisdom() {
    TwnObj_GoddesStatue_Wisdom_A_10.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_StatueVenus_Aureole'})
    goto Event32
}

void EndCommon_Power() {
    TwnObj_GoddesStatue_Power_A_10.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_StatueVenus_Aureole'})
    goto Event32
}

void EndCommon_Courage() {
    TwnObj_GoddesStatue_Courage_A_10.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_StatueVenus_Aureole'})
    goto Event32
}

void Start_GoddesStatueDown() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor2ActorName': 'TwnObj_SuperGoddesStatue_Down_A_01', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_SuperGoddesStatue_Down_A_01', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'PosVector': [-1081.9129638671875, 21.493099212646484, -2649.219970703125], 'AtVector': [-1079.93896484375, 22.8075008392334, -2650.133056640625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 50.0, 0.0], 'TurnFaceControlType': 1})
    }

}

void StartRaiseEffect() {
    TwnObj_SuperGoddesStatue_A_01.EventTriggerParticipateEvent()
    TwnObj_SuperGoddesStatue_A_01.EventTriggerEmitXLink({'ELinkKey': 'Raise_GoddesStatue_StartRaiseEffect_SuperGoddesStatue_Revival', 'SLinkKey': 'Raise_GoddesStatue_StartRaiseEffect_SuperGoddesStatue_Revival'})
}

void EndRaiseEffect() {
    TwnObj_SuperGoddesStatue_A_01.EventTriggerParticipateEvent()
    TwnObj_SuperGoddesStatue_A_01.EventTriggerXLinkFadeByKey({'IsKill': False, 'ELinkKey': 'Raise_GoddesStatue_StartRaiseEffect_SuperGoddesStatue_Revival', 'SLinkKey': 'Raise_GoddesStatue_StartRaiseEffect_SuperGoddesStatue_Revival'})
}
